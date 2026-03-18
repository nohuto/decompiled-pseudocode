/*
 * XREFs of ?AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z @ 0x1C00652D0
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0064D94 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
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
