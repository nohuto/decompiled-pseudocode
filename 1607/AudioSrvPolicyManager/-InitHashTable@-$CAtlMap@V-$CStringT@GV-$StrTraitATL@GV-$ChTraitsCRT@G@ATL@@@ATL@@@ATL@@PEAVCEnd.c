/*
 * XREFs of ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001F1DC
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180010060 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001D630 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001DA00 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ??1?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA@XZ @ 0x18001EB5C (--1-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     ?Rehash@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAXI@Z @ 0x18001F2AC (-Rehash@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVo.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAXXZ @ 0x18001F674 (-UpdateRehashThresholds@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 */

char __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r14
  unsigned __int64 v5; // rsi
  void **v6; // rdi
  void *v7; // rbx
  HANDLE ProcessHeap; // rax
  SIZE_T v10; // rbx
  HANDLE v11; // rax
  int v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v4 = a3;
  v5 = (unsigned int)a2;
  v6 = a1;
  v7 = *a1;
  if ( *a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
    *v6 = 0LL;
  }
  if ( v4 )
  {
    try
    {
      v10 = 8 * v5;
      if ( !is_mul_ok(v5, 8uLL) )
        v10 = -1LL;
      v11 = GetProcessHeap();
      *v6 = HeapAlloc(v11, 0, v10);
    }
    catch ( ... )
    {
      v6 = a1;
      LODWORD(v5) = v13;
    }
    if ( !*v6 )
      return 0;
    memset_0(*v6, 0, 8LL * (unsigned int)v5);
  }
  *((_DWORD *)v6 + 4) = v5;
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::UpdateRehashThresholds(
    v6,
    a2,
    a3,
    a4);
  return 1;
}
