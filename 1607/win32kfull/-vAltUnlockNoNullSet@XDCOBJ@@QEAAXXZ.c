/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0049624 (--1DCOBJA@@QEAA@XZ.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00D8824 (GreConvertMemToRedirectionDC.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0158A20 (--1MDCOBJA@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C025CFC0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0260090 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02602F0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0260E90 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0260EF0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0260F70 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0261030 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0261080 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C0290508 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293120 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0048F10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
}
