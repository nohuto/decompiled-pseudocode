/*
 * XREFs of ?CrossedTPTapWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01E7464
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedTPTapWarpBackThreshold(struct tagTPCONTACTSTATE *a1, struct tagPOINT a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx

  if ( (dword_1C0328110 & 0x100) == 0 )
    return 1LL;
  v2 = *(_QWORD *)a1;
  v3 = HIDWORD(*(_QWORD *)a1);
  v4 = dword_1C0328108 * dword_1C0328108;
  if ( (int)v3 < a2.y )
    v4 = dword_1C032810C * dword_1C032810C;
  return v4 * (__int64)(((int)v2 - a2.x) * ((int)v2 - a2.x))
       + (unsigned __int64)(unsigned int)(dword_1C0328100 * dword_1C0328100) * ((int)v3 - a2.y) * ((int)v3 - a2.y) >= v4 * (unsigned __int64)(unsigned int)(dword_1C0328100 * dword_1C0328100);
}
