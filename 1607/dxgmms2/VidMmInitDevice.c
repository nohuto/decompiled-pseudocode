/*
 * XREFs of VidMmInitDevice @ 0x1C0011C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmInitDevice(VIDMM_DEVICE *a1)
{
  return VIDMM_DEVICE::Init(a1, 0LL);
}
