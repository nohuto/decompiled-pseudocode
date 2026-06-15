/*
 * XREFs of ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18002BDF8
 * Callers:
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002C1E8 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800503F8 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180012CE0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18002C6C0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x180062D18 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x180062DA8 (-Rehash@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r13
  char *i; // rcx
  int v9; // edx
  __int64 v10; // rdi
  struct ATL::CAtlPlex *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-58h]

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v12 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x68uLL);
    if ( !v12 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = (char *)v12 + 104 * (unsigned int)(v9 - 1) + 8; --v9 >= 0; i -= 104 )
    {
      *((_QWORD *)i + 11) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    ATL::AtlThrowImpl(-2147467259);
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v10 + 88);
  try
  {
    *(_QWORD *)v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)a2 - 24LL) + 24;
    *(_QWORD *)(v10 + 8) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)(a2 + 8) - 24LL) + 24;
    *(_QWORD *)(v10 + 16) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)(a2 + 16) - 24LL) + 24;
    *(_OWORD *)(v10 + 24) = *(_OWORD *)(a2 + 24);
    *(_QWORD *)(v10 + 40) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)(a2 + 40) - 24LL) + 24;
    *(_DWORD *)(v10 + 48) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v10 + 56) = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v10 + 64) = *(_DWORD *)(a2 + 64);
    *(_QWORD *)(v10 + 72) = ATL::CSimpleStringT<unsigned short,0>::CloneData(*(_QWORD *)(a2 + 72) - 24LL) + 24;
    *(_DWORD *)(v10 + 96) = a4;
  }
  catch ( ... )
  {
    *(_QWORD *)(v14 + 88) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v14;
    throw;
  }
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v10 + 88) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v10;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
      a1,
      v13);
  }
  return v10;
}
