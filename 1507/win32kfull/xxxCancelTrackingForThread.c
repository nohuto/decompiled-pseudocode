/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C020B640
 * Callers:
 *     xxxCancelTracking @ 0x1C0044D18 (xxxCancelTracking.c)
 * Callees:
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     IsInsideMenuLoop @ 0x1C00F9B14 (IsInsideMenuLoop.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0204F7C (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 600);
    if ( v1 )
    {
      if ( ((*(_DWORD *)(v1 + 180) >> 27) & 1) != 0 )
      {
        DisableDwmSwCursorMoveSize((*(_DWORD *)(v1 + 180) >> 27) & 1);
        *(_DWORD *)(v1 + 180) &= ~0x8000000u;
      }
      *(_DWORD *)(v1 + 180) |= 8u;
      if ( (*(_DWORD *)(a1 + 448) & 0x10) != 0 )
      {
        bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 180) & 0x20) == 0 )
          xxxDrawDragRectEx(v1, 0LL, 2LL, v1 + 8);
      }
      *(_DWORD *)(a1 + 448) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 392) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v3 = *(__int64 **)(a1 + 600);
        if ( v3 )
          PostMessage(*v3, 0x1Fu, 0LL, 0LL);
      }
      xxxCapture((_QWORD *)a1, 0LL, 0);
    }
  }
}
