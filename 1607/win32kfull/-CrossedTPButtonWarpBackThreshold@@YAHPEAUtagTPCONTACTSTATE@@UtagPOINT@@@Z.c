/*
 * XREFs of ?CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01E7228
 * Callers:
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01E74D8 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedTPButtonWarpBackThreshold(struct tagTPCONTACTSTATE *a1, struct tagPOINT a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx

  if ( (dword_1C0328110 & 0x100) == 0 )
    return 1LL;
  v2 = *((_QWORD *)a1 + 2);
  v3 = dword_1C032816C * dword_1C032816C;
  if ( SHIDWORD(v2) < a2.y )
    v3 = dword_1C0328170 * dword_1C0328170;
  return v3 * (__int64)(((int)v2 - a2.x) * ((int)v2 - a2.x))
       + (unsigned __int64)(unsigned int)(dword_1C0328168 * dword_1C0328168)
       * (HIDWORD(v2) - a2.y)
       * (HIDWORD(v2) - a2.y) >= v3 * (unsigned __int64)(unsigned int)(dword_1C0328168 * dword_1C0328168);
}
