/*
 * XREFs of ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18001C6E4
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x180018868 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001B910 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18001CBA8 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?FreeNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001D018 (-FreeNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoint.c)
 */

char __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveKey(
        __int64 a1,
        int a2)
{
  __int64 Node; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v5[0] = 0LL;
  Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           a1,
           a2,
           (unsigned int)&v7,
           (unsigned int)&v6,
           (__int64)v5);
  if ( Node )
  {
    if ( v5[0] )
      *(_QWORD *)(v5[0] + 16LL) = *(_QWORD *)(Node + 16);
    else
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(Node + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(Node + 16);
    ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::FreeNode(
      a1,
      Node);
    LOBYTE(Node) = 1;
  }
  return Node;
}
