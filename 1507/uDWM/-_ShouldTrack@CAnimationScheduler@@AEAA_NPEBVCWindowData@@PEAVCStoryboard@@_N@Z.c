/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000BA74
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18000C614 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180067B04 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x1800056F8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  char v4; // di
  HWND *v8; // rsi

  v4 = 0;
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( *((_DWORD *)a3 + 6) != 4 && CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return 1;
  }
  else
  {
    v8 = a2;
    if ( a2 )
    {
      while ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 88LL))(
                a3,
                *((unsigned int *)v8 + 142)) == -1 )
      {
        v8 = (HWND *)v8[63];
        if ( !v8 )
          return v4;
      }
      if ( a4
        || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 96LL))(
              a3,
              *((unsigned int *)v8 + 142)) & 2) == 0 )
      {
        if ( v8 != a2 )
          return ((_DWORD)v8[71] & 0x10000000) != 0;
        return 1;
      }
    }
  }
  return v4;
}
