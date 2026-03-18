/*
 * XREFs of ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18006B81C
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18006EE64 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?IsUpToDate@CDisplaySet@@QEBA_NXZ @ 0x1800700C0 (-IsUpToDate@CDisplaySet@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDXGIEnumeration::IsUpToDate(CDXGIEnumeration *this)
{
  return (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)this + 14);
}
