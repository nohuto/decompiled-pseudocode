/*
 * XREFs of ?FreeNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180037F00
 * Callers:
 *     ?RemoveAll@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXXZ @ 0x18000B400 (-RemoveAll@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@P.c)
 *     ?RemoveNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18007B53C (-RemoveNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 * Callees:
 *     ?FreePlexes@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXXZ @ 0x18000B1A4 (-FreePlexes@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Rehash@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXI@Z @ 0x18007B15C (-Rehash@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800802E8 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 */

void __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::FreeNode(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // eax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 64);
  --*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = a2;
  if ( *(_QWORD *)(a1 + 8) < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v3 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Rehash(a1, v3);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::FreePlexes(a1);
}
