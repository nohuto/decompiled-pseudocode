/*
 * XREFs of IopGetMountFlag @ 0x140025EC0
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // di
  unsigned __int8 CurrentIrql; // bp
  char *v7; // rcx
  volatile __int64 *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, *((_QWORD *)v7 + 1));
  }
  else
  {
    v9 = _InterlockedExchange64(v8, (__int64)v7);
    if ( v9 )
      KxWaitForLockOwnerShip(v7, v9, v8, a4);
  }
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 && (*(_BYTE *)(v10 + 4) & 1) != 0 )
    v5 = 1;
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v11);
  v12 = (__int64)*v11;
  if ( *v11 )
    goto LABEL_12;
  if ( v11 != (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
  {
    v12 = KxWaitForLockChainValid(v11);
LABEL_12:
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_10:
  __writecr8(CurrentIrql);
  return v5;
}
