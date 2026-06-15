/*
 * XREFs of ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001CEDC
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x18000F6E0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001B910 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000FB80 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Rehash@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAXI@Z @ 0x18001CD24 (-Rehash@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVo.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAI_K@Z @ 0x18001CE54 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoint.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
        __int64 a1,
        char *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-38h]

  v5 = a3;
  if ( *(_QWORD *)(a1 + 64) )
    goto LABEL_14;
  v8 = *(unsigned int *)(a1 + 52);
  if ( v8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x20 )
      goto LABEL_8;
    v8 *= 32LL;
  }
  if ( ~v8 >= 8 )
  {
    v9 = malloc(v8 + 8);
    v10 = v9;
    if ( !v9 )
      goto LABEL_10;
    *v9 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v9;
    goto LABEL_9;
  }
LABEL_8:
  v10 = 0LL;
LABEL_9:
  if ( !v10 )
LABEL_10:
    ATL::AtlThrowImpl(-2147024882);
  v11 = *(_DWORD *)(a1 + 52);
  for ( i = &v10[4 * (unsigned int)(v11 - 1) + 1]; --v11 >= 0; i -= 4 )
  {
    i[2] = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = i;
  }
LABEL_14:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    ATL::AtlThrowImpl(-2147467259);
  v19 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 16);
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (_QWORD *)v13,
      a2);
    *(_DWORD *)(v13 + 24) = a4;
  }
  catch ( ... )
  {
    *(_QWORD *)(v19 + 16) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v19;
    throw;
  }
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::PickSize(
            a1,
            v14);
    ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::Rehash(
      a1,
      v15,
      v16,
      v17);
  }
  return v13;
}
