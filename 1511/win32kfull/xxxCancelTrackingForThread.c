/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C020BCE0
 * Callers:
 *     xxxCancelTracking @ 0x1C0090B88 (xxxCancelTracking.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     IsInsideMenuLoop @ 0x1C00FEA20 (IsInsideMenuLoop.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0205330 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 592);
    if ( v1 )
    {
      if ( ((*(_DWORD *)(v1 + 180) >> 27) & 1) != 0 )
      {
        DisableDwmSwCursorMoveSize((*(_DWORD *)(v1 + 180) >> 27) & 1);
        *(_DWORD *)(v1 + 180) &= ~0x8000000u;
      }
      *(_DWORD *)(v1 + 180) |= 8u;
      if ( (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
      {
        bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
          xxxDrawDragRectEx(v1, 0LL, 2LL, v1 + 8);
      }
      *(_DWORD *)(a1 + 440) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 384) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v3 = *(__int64 **)(a1 + 592);
        if ( v3 )
          PostMessage(*v3, 31LL, 0LL, 0LL);
      }
      xxxCapture((_QWORD *)a1, 0LL, 0);
    }
  }
}
