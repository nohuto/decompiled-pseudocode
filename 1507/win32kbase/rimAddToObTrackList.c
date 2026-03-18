/*
 * XREFs of rimAddToObTrackList @ 0x1C0076874
 * Callers:
 *     RawInputManagerObjectCreate @ 0x1C0072DC8 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C007677C (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00C48AC (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  int v2; // eax
  bool v3; // zf
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == 1 )
  {
    Blink = gObRimList.Blink;
    *(_QWORD *)(a1 + 24) = gObRimList.Blink;
    *(_QWORD *)(a1 + 16) = &gObRimList;
    if ( Blink->Flink != &gObRimList )
      __fastfail(3u);
    Blink->Flink = (struct _LIST_ENTRY *)(a1 + 16);
    gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
  }
  else
  {
    v3 = v2 == 2;
    v4 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( v3 )
    {
      v5 = gObRimDevList.Blink;
      v4->Flink = &gObRimDevList;
      *(_QWORD *)(a1 + 24) = v5;
      if ( v5->Flink != &gObRimDevList )
        __fastfail(3u);
      v5->Flink = v4;
      gObRimDevList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
    }
    else
    {
      v7 = gObRimInputObserverList.Blink;
      v4->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v7;
      if ( v7->Flink != &gObRimInputObserverList )
        __fastfail(3u);
      v7->Flink = v4;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
}
