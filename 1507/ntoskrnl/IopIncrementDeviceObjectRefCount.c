/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x1400458A0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1401FB380 (PnpMarkDeviceForRemove.c)
 *     IopShutdownBaseFileSystems @ 0x1403FE590 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IoRegisterFileSystem @ 0x14058FC68 (IoRegisterFileSystem.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rcx
  _QWORD *v5; // rdx
  int v6; // edi
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
    }
    else
    {
      v5 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
      if ( v5 )
        KxWaitForLockOwnerShip((__int64)v4, v5);
    }
    v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
      goto LABEL_8;
    }
    _m_prefetchw(v7);
    v8 = (__int64)*v7;
    if ( !*v7 )
    {
      if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        goto LABEL_9;
      }
      v8 = KxWaitForLockChainValid(v7);
    }
    *v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
    goto LABEL_8;
  }
  v6 = ++*(_DWORD *)(BugCheckParameter2 + 4);
LABEL_9:
  if ( v6 <= 0 )
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v10 )
    {
      IoAddTriageDumpDataBlock(v10, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v6;
}
