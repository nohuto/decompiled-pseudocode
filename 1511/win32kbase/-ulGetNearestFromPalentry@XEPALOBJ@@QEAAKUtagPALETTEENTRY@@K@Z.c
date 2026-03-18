/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C00237B4
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C00729D0 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0023470 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B4A10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall XEPALOBJ::ulGetNearestFromPalentry(
        struct _SINGLE_LIST_ENTRY **this,
        struct tagPALETTEENTRY a2,
        int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, LODWORD((*this)[12].Next), *(unsigned int *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
