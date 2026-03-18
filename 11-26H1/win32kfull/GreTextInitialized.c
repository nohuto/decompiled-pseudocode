/*
 * XREFs of GreTextInitialized @ 0x1400CE928
 * Callers:
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 *     CreateBitmapStrip @ 0x1400CE890 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x140124F40 (GetCharDimensions.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     EnsureDpiServerInfoForDpi @ 0x1402A648C (EnsureDpiServerInfoForDpi.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402D1ADC (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CE980 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB08 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall GreTextInitialized(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned int v4; // ebx

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = 0;
  if ( KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(SessionState + 96) + 24216LL))
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    return 1LL;
  }
  LOBYTE(v4) = UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
  return v4;
}
