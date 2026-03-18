/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C55A0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     DestroySMWP @ 0x1C0051890 (DestroySMWP.c)
 *     HMUnlockObject @ 0x1C009684C (HMUnlockObject.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMUnlockObject((__int64)a1);
  if ( v1 )
    DestroySMWP(v1);
}
