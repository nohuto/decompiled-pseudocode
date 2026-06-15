/*
 * XREFs of ?Cleanup@CSaProvider@@IEAAXXZ @ 0x180073FA8
 * Callers:
 *     ??1CSaProvider@@QEAA@XZ @ 0x1800739A0 (--1CSaProvider@@QEAA@XZ.c)
 * Callees:
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAPEAVCEndpointSaDeviceLists@@H@Z @ 0x1800685CC (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ??_GCEndpointSaDeviceLists@@QEAAPEAXI@Z @ 0x180073B28 (--_GCEndpointSaDeviceLists@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEAAHH@Z @ 0x180075520 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpo.c)
 */

void __fastcall CSaProvider::Cleanup(CSaProvider *this)
{
  char *v2; // rdi
  CEndpointSaDeviceLists *v3; // rsi
  CEndpointSaDeviceLists *v4; // rdi

  if ( *((int *)this + 36) > 0 )
  {
    v2 = (char *)this + 128;
    do
    {
      v3 = *(CEndpointSaDeviceLists **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
                                         (__int64)v2,
                                         0);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::RemoveAt(
        v2,
        0LL);
      if ( v3 )
        CEndpointSaDeviceLists::`scalar deleting destructor'(v3);
    }
    while ( *((int *)this + 36) > 0 );
  }
  while ( *((int *)this + 30) > 0 )
  {
    v4 = *(CEndpointSaDeviceLists **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
                                       (__int64)this + 104,
                                       0);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::RemoveAt(
      (char *)this + 104,
      0LL);
    if ( v4 )
      CEndpointSaDeviceLists::`scalar deleting destructor'(v4);
  }
}
