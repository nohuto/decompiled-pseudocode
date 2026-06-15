/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18001CBA8
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x18000F6E0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001B910 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18001C6E4 (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
        __int64 *a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // r8d
  unsigned __int16 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int16 *v13; // rbx
  unsigned __int16 *result; // rax
  unsigned __int16 *v15; // rcx
  int v16; // r10d
  int v17; // edx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v8 = *a2;
  v9 = 0;
  v10 = a2;
  while ( v8 )
  {
    ++v10;
    v9 = v8 + 33 * v9;
    v8 = *v10;
  }
  v11 = *a1;
  HIDWORD(v12) = 0;
  *a4 = v9;
  LODWORD(v12) = v9 % *((_DWORD *)a1 + 4);
  *a3 = v12;
  if ( v11 )
  {
    v13 = 0LL;
    result = *(unsigned __int16 **)(v11 + 8 * v12);
    *a5 = 0LL;
    while ( result )
    {
      if ( *((_DWORD *)result + 6) == v9 )
      {
        v15 = *(unsigned __int16 **)result;
        do
        {
          v16 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v15 - *(_QWORD *)result);
          v17 = *v15 - v16;
          if ( v17 )
            break;
          ++v15;
        }
        while ( v16 );
        if ( !v17 )
        {
          *a5 = v13;
          return result;
        }
      }
      v13 = result;
      result = (unsigned __int16 *)*((_QWORD *)result + 2);
    }
  }
  return 0LL;
}
