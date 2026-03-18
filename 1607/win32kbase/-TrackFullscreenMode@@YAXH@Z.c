/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x1C005FD10
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackFullscreenMode(int a1)
{
  if ( a1 )
    gppiFullscreen = *((_QWORD *)gptiCurrent + 47);
  else
    gppiFullscreen = 0LL;
}
