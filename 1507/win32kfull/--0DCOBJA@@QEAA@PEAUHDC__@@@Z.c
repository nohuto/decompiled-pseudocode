/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C000B03C (GreConvertMemToRedirectionDC.c)
 *     DxgkEngGetClientRect @ 0x1C0100E10 (DxgkEngGetClientRect.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0263F30 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0264180 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0264C50 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0264D10 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02919F8 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293EA0 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025FF4C (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLock(a2, v4);
  return this;
}
