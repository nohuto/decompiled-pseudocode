/*
 * XREFs of ?AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z @ 0x1C0060D98
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0060834 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AreEquivalentDevModes(const struct _devicemodeW *const a1, const struct _devicemodeW *const a2)
{
  return a1->dmPelsWidth == a2->dmPelsWidth
      && a1->dmPelsHeight == a2->dmPelsHeight
      && a1->dmBitsPerPel == a2->dmBitsPerPel
      && a1->dmDisplayFrequency == a2->dmDisplayFrequency
      && a1->dmDisplayFixedOutput == a2->dmDisplayFixedOutput
      && a1->dmDisplayOrientation == a2->dmDisplayOrientation
      && a1->dmDisplayFlags == a2->dmDisplayFlags;
}
