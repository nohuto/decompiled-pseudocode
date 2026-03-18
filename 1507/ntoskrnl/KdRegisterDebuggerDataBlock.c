/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x14072A7E4
 * Callers:
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *v4; // rax
  __int64 **v5; // rax
  __int64 *v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KdpDataSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdpDataSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdpDataSpinLock);
  }
  v4 = (__int64 *)KdpDebuggerDataListHead;
  while ( v4 != &KdpDebuggerDataListHead )
  {
    v7 = v4;
    v4 = (__int64 *)*v4;
    if ( v7 == (__int64 *)a2 || *((_DWORD *)v7 + 4) == 1195525195 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&KdpDataSpinLock, retaddr);
      else
        _InterlockedAnd64(&KdpDataSpinLock, 0LL);
      __writecr8(CurrentIrql);
      return 0;
    }
  }
  *(_DWORD *)(a2 + 16) = 1195525195;
  *(_DWORD *)(a2 + 20) = 864;
  v5 = (__int64 **)qword_14033BB98;
  *(_QWORD *)a2 = &KdpDebuggerDataListHead;
  *(_QWORD *)(a2 + 8) = v5;
  if ( *v5 != &KdpDebuggerDataListHead )
    __fastfail(3u);
  *v5 = (__int64 *)a2;
  qword_14033BB98 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdpDataSpinLock, retaddr);
  else
    _InterlockedAnd64(&KdpDataSpinLock, 0LL);
  __writecr8(CurrentIrql);
  return 1;
}
