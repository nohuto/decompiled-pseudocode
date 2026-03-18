/*
 * XREFs of ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x1800365D4
 * Callers:
 *     ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744 (-UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDXGIEnumeration::IsUpToDate(CDXGIEnumeration *this)
{
  return (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)this + 14);
}
