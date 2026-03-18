/*
 * XREFs of VidSchiSignalFlipEvents @ 0x1C001A3FC
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00138A0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C001D5D0 (VidSchUnreferenceDisplayingAllocationInternal.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 */

void __fastcall VidSchiSignalFlipEvents(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  KSPIN_LOCK *v6; // rbx
  struct _KEVENT *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 104));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 120));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1832));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1816));
    *(_QWORD *)(v5 + 1664) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1632), 0, 0);
    *(_QWORD *)(v5 + 1776) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1744), 0, 0);
    if ( a2 )
    {
      *(_QWORD *)(v5 + 1328) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1296), 0, 0);
    }
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1848));
    if ( *(_WORD *)(a1 + 14628) )
    {
      v6 = *(KSPIN_LOCK **)(v5 + 1864);
      KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
      v7 = (struct _KEVENT *)v6[1];
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
