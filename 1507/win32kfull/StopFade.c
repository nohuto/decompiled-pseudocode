/*
 * XREFs of StopFade @ 0x1C010E080
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     zzzAnimateFade @ 0x1C010DE60 (zzzAnimateFade.c)
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 *     xxxDwmStopRedirection @ 0x1C012B6A0 (xxxDwmStopRedirection.c)
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 *     zzzStartSonar @ 0x1C01E7CF0 (zzzStartSonar.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     DeleteFadeSprite @ 0x1C010E1E0 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  unsigned int v0; // ebp
  __int64 v1; // rax
  unsigned int v2; // ecx
  int v3; // edi
  HDC DCEx; // rbx
  int v5; // esi
  __int64 StockObject; // rax
  __int64 result; // rax

  v0 = 13369376;
  FindTimer(*((_QWORD *)&gTermIO + 1), 65526LL, 2u, 1, 0LL);
  v1 = DeleteFadeSprite();
  v2 = gfade[12];
  if ( (v2 & 2) == 0 && (v2 & 1) != 0 )
  {
    if ( v1 )
    {
      v3 = 0;
      DCEx = (HDC)_GetDCEx(v1, 0LL, 3LL);
      v5 = 0;
    }
    else
    {
      v3 = gfade[6];
      v5 = gfade[7];
      DCEx = *(HDC *)(gpDispInfo + 24LL);
    }
    if ( (GreGetLayout(DCEx) & 1) != 0 )
      v0 = -2134114272;
    NtGdiBitBltInternal(DCEx, v3, v5, gfade[8], gfade[9], *(HDC *)&gfade[2], 0, 0, v0, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)&gfade[2], StockObject);
  GreCleanDC(*(_QWORD *)&gfade[2]);
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 0LL);
  GreDeleteObject(*(_QWORD *)&gfade[4]);
  *(_QWORD *)&gfade[4] = 0LL;
  result = *(_QWORD *)gfade;
  gfade[12] = 0;
  return result;
}
