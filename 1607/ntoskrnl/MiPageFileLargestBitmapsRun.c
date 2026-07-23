/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x1400B4370
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x1400B40E8 (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiFindBestOutswapPagefile @ 0x1400B4CE8 (MiFindBestOutswapPagefile.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 j; // rax
  unsigned __int64 i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v3 = *(_QWORD *)(a1 + 144);
  v4 = 0LL;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v3 + 48) )
        goto LABEL_6;
      v4 = v3;
      v3 = *(_QWORD *)v3;
    }
    else
    {
      v3 = *(_QWORD *)(v3 + 8);
    }
  }
  v3 = v4;
LABEL_6:
  v5 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    for ( i = *(_QWORD *)(v5 + 8); i; i = *(_QWORD *)(i + 8) )
      v5 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v3 + 16); ; j = *(_QWORD *)(v5 + 16) )
    {
      v5 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v5 || *(_QWORD *)(v5 + 8) == v3 )
        break;
      v3 = v5;
    }
  }
  if ( v5 )
    v2 = *(_DWORD *)(v5 + 52);
  if ( v2 <= *(_DWORD *)(a1 + 140) )
    v2 = *(_DWORD *)(a1 + 140);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
