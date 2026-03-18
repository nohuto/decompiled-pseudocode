/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C0202E30
 * Callers:
 *     xxxCancelTracking @ 0x1C0109250 (xxxCancelTracking.c)
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     IsInsideMenuLoop @ 0x1C0120918 (IsInsideMenuLoop.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C01FC62C (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v5; // rcx

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 592);
    if ( v3 )
    {
      if ( ((*(_DWORD *)(v3 + 180) >> 27) & 1) != 0 )
      {
        DisableDwmSwCursorMoveSize((*(_DWORD *)(v3 + 180) >> 27) & 1);
        *(_DWORD *)(v3 + 180) &= ~0x8000000u;
      }
      *(_DWORD *)(v3 + 180) |= 8u;
      if ( (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
      {
        bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v3 + 180) & 0x20) == 0 )
          xxxDrawDragRectEx((struct _MOVESIZEDATA *)v3);
      }
      *(_DWORD *)(a1 + 440) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 384) )
        SetWakeBit(a1, 2LL, a3);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v5 = *(__int64 **)(a1 + 592);
        if ( v5 )
          PostMessage(*v5, 31LL, 0LL, 0LL);
      }
      xxxCapture((_QWORD *)a1, 0LL, 0);
    }
  }
}
