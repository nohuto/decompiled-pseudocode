/*
 * XREFs of rimAddToObTrackList @ 0x1C000E5AC
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1C000E4B4 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x1C0080258 (RawInputManagerObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00D4C08 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

__int64 __fastcall rimAddToObTrackList(__int64 a1)
{
  int v2; // eax
  bool v3; // zf
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY **v5; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *v9; // rcx

  RIMLockExclusive(&gObListLock);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == 1 )
  {
    Blink = gObRimList.Blink;
    v8 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink != &gObRimList )
      __fastfail(3u);
    v8->Flink = &gObRimList;
    *(_QWORD *)(a1 + 24) = Blink;
    Blink->Flink = v8;
    gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
  }
  else
  {
    v3 = v2 == 2;
    v4 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( v3 )
    {
      v5 = (struct _LIST_ENTRY **)qword_1C011E4E8;
      if ( *(__int64 **)qword_1C011E4E8 != &gObRimDevList )
        __fastfail(3u);
      v4->Flink = (struct _LIST_ENTRY *)&gObRimDevList;
      *(_QWORD *)(a1 + 24) = v5;
      *v5 = v4;
      qword_1C011E4E8 = a1 + 16;
    }
    else
    {
      v9 = gObRimInputObserverList.Blink;
      if ( gObRimInputObserverList.Blink->Flink != &gObRimInputObserverList )
        __fastfail(3u);
      v4->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v9;
      v9->Flink = v4;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
    }
  }
  return RIMUnlockExclusive(&gObListLock);
}
