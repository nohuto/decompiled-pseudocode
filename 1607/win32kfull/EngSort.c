/*
 * XREFs of EngSort @ 0x1C027E580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngSort(PBYTE pjBuf, ULONG c, ULONG cjElem, SORTCOMP pfnComp)
{
  qsort(pjBuf, c, cjElem, pfnComp);
}
