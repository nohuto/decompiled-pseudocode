/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01C39E0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     DestroySMWP @ 0x1C0063A00 (DestroySMWP.c)
 *     HMUnlockObject @ 0x1C00DF9F0 (HMUnlockObject.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMUnlockObject((__int64)a1);
  if ( v1 )
    DestroySMWP(v1);
}
