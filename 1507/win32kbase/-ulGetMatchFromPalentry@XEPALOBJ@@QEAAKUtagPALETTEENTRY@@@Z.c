/*
 * XREFs of ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C003AAB0
 * Callers:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00B1860 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B16F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall XEPALOBJ::ulGetMatchFromPalentry(XEPALOBJ *this, struct tagPALETTEENTRY a2, __int64 a3, __int64 a4)
{
  return XEPALOBJ::ulDispatchGFPEFunction(this, *(unsigned int *)(*(_QWORD *)this + 104LL), *(unsigned int *)&a2, a4);
}
