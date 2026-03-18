/*
 * XREFs of ?CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01E73F0
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedTPLiftWarpBackThreshold(struct tagTPCONTACTSTATE *a1, struct tagPOINT a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx

  if ( (dword_1C0328110 & 0x100) == 0 )
    return 1LL;
  v2 = *((_QWORD *)a1 + 2);
  v3 = dword_1C0328160 * dword_1C0328160;
  if ( SHIDWORD(v2) < a2.y )
    v3 = dword_1C0328164 * dword_1C0328164;
  return v3 * (__int64)(((int)v2 - a2.x) * ((int)v2 - a2.x))
       + (unsigned __int64)(unsigned int)(dword_1C032815C * dword_1C032815C)
       * (HIDWORD(v2) - a2.y)
       * (HIDWORD(v2) - a2.y) >= v3 * (unsigned __int64)(unsigned int)(dword_1C032815C * dword_1C032815C);
}
