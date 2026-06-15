/*
 * XREFs of ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180007D90
 * Callers:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180007BE8 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?Release@CPlaybackManager@@WBA@EAAKXZ @ 0x1800453F0 (-Release@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?Release@CDuckingManager@@WBI@EAAKXZ @ 0x180045400 (-Release@CDuckingManager@@WBI@EAAKXZ.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A4D30 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBackgroundSessionCallbacks::Release(CBackgroundSessionCallbacks *this)
{
  return CUnknown::Release(this);
}
