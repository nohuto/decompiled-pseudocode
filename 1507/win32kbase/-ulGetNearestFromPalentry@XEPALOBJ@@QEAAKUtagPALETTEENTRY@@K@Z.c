/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C003AF50
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C0010300 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B16F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00B1860 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(
        XEPALOBJ *this,
        struct tagPALETTEENTRY a2,
        int a3,
        __int64 a4)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *(unsigned int *)(*(_QWORD *)this + 96LL), *(unsigned int *)&a2, a4);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
