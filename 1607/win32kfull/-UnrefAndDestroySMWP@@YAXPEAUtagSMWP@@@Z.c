/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C0124110
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     DestroySMWP @ 0x1C0075EC0 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = (_DWORD *)HMUnlockObject((__int64)a1);
  if ( v1 )
    DestroySMWP(v1, v2, v3);
}
