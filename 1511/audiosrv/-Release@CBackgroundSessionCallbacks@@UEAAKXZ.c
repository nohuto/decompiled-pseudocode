/*
 * XREFs of ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x1800329F0
 * Callers:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180032844 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?Release@CPlaybackManager@@WBA@EAAKXZ @ 0x180049600 (-Release@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?Release@CDuckingManager@@WBI@EAAKXZ @ 0x180049610 (-Release@CDuckingManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBackgroundSessionCallbacks::Release(CBackgroundSessionCallbacks *this)
{
  return CUnknown::Release(this);
}
