/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C002725C
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C0076F80 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0026E10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00BF5C0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(struct PALETTE **this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *((_DWORD *)*this + 24), *(_DWORD *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)this, a2);
}
