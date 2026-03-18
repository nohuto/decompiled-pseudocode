/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x1C001AB68
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackFullscreenMode(int a1)
{
  if ( a1 )
    gppiFullscreen = *((_QWORD *)gptiCurrent + 48);
  else
    gppiFullscreen = 0LL;
}
