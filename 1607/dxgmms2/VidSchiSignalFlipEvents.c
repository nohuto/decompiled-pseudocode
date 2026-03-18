/*
 * XREFs of VidSchiSignalFlipEvents @ 0x1C000EBC4
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001152C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C0027180 (VidSchUnreferenceDisplayingAllocationInternal.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 */

void __fastcall VidSchiSignalFlipEvents(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  KSPIN_LOCK *v6; // rbx
  struct _KEVENT *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 96));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 112));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1816));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1800));
    *(_QWORD *)(v5 + 1648) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1616), 0, 0);
    *(_QWORD *)(v5 + 1760) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1728), 0, 0);
    if ( a2 )
    {
      *(_QWORD *)(v5 + 1368) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1336), 0, 0);
    }
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1832));
    if ( *(_WORD *)(a1 + 18740) )
    {
      v6 = *(KSPIN_LOCK **)(v5 + 1848);
      KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
      v7 = (struct _KEVENT *)v6[1];
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
