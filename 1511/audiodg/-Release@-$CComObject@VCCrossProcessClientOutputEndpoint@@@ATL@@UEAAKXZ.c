/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140038DF0
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A860 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001A870 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A880 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A890 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A8A0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14001A8B0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // esi

  v2 = _InterlockedDecrement(a1 + 114);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
