/*
 * XREFs of IopIncrementVpbRefCount @ 0x14003F7B4
 * Callers:
 *     IopMountInitializeVpb @ 0x1400064D4 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1401F2970 (IopReferenceVerifyVpb.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  KIRQL v3; // al
  KIRQL v4; // bp
  int v5; // esi
  volatile signed __int64 **v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    ++*(_DWORD *)(BugCheckParameter2 + 28);
    v4 = v3;
    v5 = *(_DWORD *)(BugCheckParameter2 + 28);
    v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
      goto LABEL_5;
    }
    _m_prefetchw(v6);
    v7 = (__int64)*v6;
    if ( !*v6 )
    {
      if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
      {
LABEL_5:
        __writecr8(v4);
        goto LABEL_6;
      }
      v7 = KxWaitForLockChainValid(v6);
    }
    *v6 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
    goto LABEL_5;
  }
  v5 = ++*(_DWORD *)(BugCheckParameter2 + 28);
LABEL_6:
  if ( v5 <= 0 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v9 )
    {
      IoAddTriageDumpDataBlock(v9, 336LL);
      v10 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, *(unsigned int *)(BugCheckParameter2 + 28));
  }
  return (unsigned int)v5;
}
