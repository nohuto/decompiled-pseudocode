/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C000B03C (GreConvertMemToRedirectionDC.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0016C2C (--1DCOBJA@@QEAA@XZ.c)
 *     DxgkEngLockVisRgn @ 0x1C00EAB50 (DxgkEngLockVisRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0100E10 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0101120 (DxgkEngGetDC.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015B938 (--1MDCOBJA@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C02609D0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0263F30 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0264180 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0264C50 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0264D10 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02919F8 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293EA0 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
}
