/*
 * XREFs of ?Rehash@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXI@Z @ 0x1800763F8
 * Callers:
 *     ?NewNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAPEAVCNode@12@AEBU_GUID@@II@Z @ 0x1800125B4 (-NewNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEA.c)
 *     ?FreeNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003AAA8 (-FreeNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PE.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAA_NI_N@Z @ 0x180012698 (-InitHashTable@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrai.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXXZ @ 0x18003B348 (-UpdateRehashThresholds@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CEl.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800A6D9C (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 */

void __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  void *v4; // rsi
  __int64 i; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v10; // [rsp+58h] [rbp+10h]
  void *v11; // [rsp+60h] [rbp+18h]

  v10 = a2;
  v2 = a2;
  v3 = a1;
  if ( !a2 )
  {
    v2 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    v10 = v2;
  }
  if ( v2 != *(_DWORD *)(v3 + 16) )
  {
    if ( *(_QWORD *)v3 )
    {
      try
      {
        v4 = operator new(saturated_mul(v2, 8uLL));
        v11 = v4;
      }
      catch ( ... )
      {
        v3 = a1;
        v2 = v10;
        v4 = v11;
      }
      if ( !v4 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v4, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 16); i = (unsigned int)(i + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
        if ( v6 )
        {
          do
          {
            v7 = *(_QWORD *)(v6 + 24);
            v8 = *(_DWORD *)(v6 + 32) % v2;
            *(_QWORD *)(v6 + 24) = *((_QWORD *)v4 + v8);
            *((_QWORD *)v4 + (unsigned int)v8) = v6;
            v6 = v7;
          }
          while ( v7 );
        }
      }
      operator delete(*(void **)v3);
      *(_QWORD *)v3 = v4;
      *(_DWORD *)(v3 + 16) = v2;
      ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::UpdateRehashThresholds(v3);
    }
    else
    {
      ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::InitHashTable(
        (void **)v3,
        v2,
        0);
    }
  }
}
