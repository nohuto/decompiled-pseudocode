/*
 * XREFs of ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180068564
 * Callers:
 *     _CProcess::_CProcess_::_1_::dtor$6 @ 0x1800463C8 (_CProcess--_CProcess_--_1_--dtor$6.c)
 *     _CProcess::_CProcess_::_1_::dtor$7 @ 0x1800463DB (_CProcess--_CProcess_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x18004647C (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$7 @ 0x18004648F (_CProcess--CProcess_--_1_--dtor$7.c)
 *     _CSaProvider::_CSaProvider_::_1_::dtor$2 @ 0x180073AC1 (_CSaProvider--_CSaProvider_--_1_--dtor$2.c)
 *     _CSaProvider::_CSaProvider_::_1_::dtor$3 @ 0x180073AD1 (_CSaProvider--_CSaProvider_--_1_--dtor$3.c)
 *     _TSSession::_TSSession_::_1_::dtor$2 @ 0x18009EDAE (_TSSession--_TSSession_--_1_--dtor$2.c)
 *     _TSSession::_TSSession_::_1_::dtor$8 @ 0x18009EE20 (_TSSession--_TSSession_--_1_--dtor$8.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18000C5E0 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>(
        __int64 a1)
{
  int i; // edi
  void *v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*(_QWORD *)a1 + 8LL * i));
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
