/*
 * XREFs of IopIncrementVpbRefCount @ 0x1400AFB14
 * Callers:
 *     IopMountInitializeVpb @ 0x1400D0A3C (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1401B7630 (IopReferenceVerifyVpb.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  KIRQL v3; // al
  int v4; // esi
  unsigned __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( a2 )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    v4 = ++*(_DWORD *)(BugCheckParameter2 + 28);
    v5 = v3;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 18);
    __writecr8(v5);
  }
  else
  {
    v4 = ++*(_DWORD *)(BugCheckParameter2 + 28);
  }
  if ( v4 <= 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v7 )
    {
      IoAddTriageDumpDataBlock(v7, 336LL);
      v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v8 )
      {
        IoAddTriageDumpDataBlock(v8, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, *(unsigned int *)(BugCheckParameter2 + 28));
  }
  return (unsigned int)v4;
}
