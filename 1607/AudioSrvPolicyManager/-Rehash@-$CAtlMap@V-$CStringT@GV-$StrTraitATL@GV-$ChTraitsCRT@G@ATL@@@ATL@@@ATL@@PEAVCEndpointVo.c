/*
 * XREFs of ?Rehash@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAXI@Z @ 0x18001F2AC
 * Callers:
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001F46C (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?FreeNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001F5BC (-FreeNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoint.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001F1DC (-InitHashTable@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAI_K@Z @ 0x18001F3E0 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoint.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAXXZ @ 0x18001F674 (-UpdateRehashThresholds@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 */

char __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::Rehash(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rdi
  SIZE_T v7; // rbx
  HANDLE ProcessHeap; // rax
  void *v9; // r14
  __int64 i; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rdx
  void *v14; // rbx
  HANDLE v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+58h] [rbp+10h]
  void *v23; // [rsp+60h] [rbp+18h]

  v4 = &retaddr;
  v22 = a2;
  v5 = a2;
  v6 = a1;
  if ( !a2 )
  {
    LODWORD(v4) = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::PickSize(
                    a1,
                    *(_QWORD *)(a1 + 8));
    v5 = (unsigned int)v4;
    v22 = (unsigned int)v4;
  }
  if ( v5 != *(_DWORD *)(v6 + 16) )
  {
    if ( *(_QWORD *)v6 )
    {
      try
      {
        v7 = 8LL * v5;
        if ( !is_mul_ok(v5, 8uLL) )
          v7 = -1LL;
        ProcessHeap = GetProcessHeap();
        v9 = HeapAlloc(ProcessHeap, 0, v7);
        v23 = v9;
      }
      catch ( ... )
      {
        v6 = a1;
        v5 = v22;
        v9 = v23;
      }
      if ( !v9 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v9, 0, 8LL * v5);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 16); i = (unsigned int)(i + 1) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v6 + 8 * i);
        if ( v11 )
        {
          do
          {
            v12 = *(_QWORD *)(v11 + 16);
            v13 = *(_DWORD *)(v11 + 24) % v5;
            *(_QWORD *)(v11 + 16) = *((_QWORD *)v9 + v13);
            *((_QWORD *)v9 + (unsigned int)v13) = v11;
            v11 = v12;
          }
          while ( v12 );
        }
      }
      v14 = *(void **)v6;
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v14);
      *(_QWORD *)v6 = v9;
      *(_DWORD *)(v6 + 16) = v5;
      LOBYTE(v4) = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::UpdateRehashThresholds(
                     v6,
                     v16,
                     v17,
                     v18);
    }
    else
    {
      LOBYTE(v4) = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                     (void **)v6,
                     v5,
                     0LL,
                     a4);
    }
  }
  return (char)v4;
}
