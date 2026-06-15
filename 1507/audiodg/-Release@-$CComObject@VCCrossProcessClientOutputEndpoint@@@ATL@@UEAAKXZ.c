/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140038D70
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A790 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A7A0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14001A7B0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A7C0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001A7D0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A7E0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(int *a1)
{
  unsigned int v2; // ebp

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 114);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
