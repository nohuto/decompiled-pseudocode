/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C004177C
 * Callers:
 *     XLATEOBJ_iXlate @ 0x1C00DF4B0 (XLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(XEPALOBJ *this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *(unsigned int *)(*(_QWORD *)this + 96LL), *(unsigned int *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
