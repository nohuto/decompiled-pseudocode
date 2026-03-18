/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00D8824 (GreConvertMemToRedirectionDC.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0260090 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02602F0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0260E90 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0260F70 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0261030 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C0290508 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293120 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C025CEBC (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
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
