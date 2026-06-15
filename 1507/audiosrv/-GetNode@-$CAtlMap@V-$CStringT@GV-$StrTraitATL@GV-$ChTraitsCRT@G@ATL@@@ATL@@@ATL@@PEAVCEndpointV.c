/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18002F500
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180010F00 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAAEAPEAVCEndpointVolumeState@@PEBG@Z @ 0x18009EE3C (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18009FA14 (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009FB48 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x1800A0128 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
        __int64 *a1,
        char *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  char *v7; // rbx
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // rdi
  unsigned int i; // ecx
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int16 *result; // rax
  unsigned __int16 *v15; // rdx
  int v16; // r10d
  int v17; // r8d

  v7 = a2;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v8 = *(_WORD *)a2;
  v9 = 0LL;
  for ( i = 0; *(_WORD *)a2; v8 = *(_WORD *)a2 )
  {
    a2 += 2;
    i = v8 + 33 * i;
  }
  v11 = *((_DWORD *)a1 + 4) == 17;
  *a4 = i;
  if ( v11 )
    v12 = i % 0x11;
  else
    v12 = i % *((_DWORD *)a1 + 4);
  v13 = *a1;
  *a3 = v12;
  if ( !v13 )
    return 0LL;
  result = *(unsigned __int16 **)(v13 + 8 * v12);
  *a5 = 0LL;
  if ( !result )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)result + 6) == i )
    {
      v15 = *(unsigned __int16 **)result;
      do
      {
        v16 = *(unsigned __int16 *)&v7[(_QWORD)v15 - *(_QWORD *)result];
        v17 = *v15 - v16;
        if ( v17 )
          break;
        ++v15;
      }
      while ( v16 );
      if ( !v17 )
        break;
    }
    v9 = result;
    result = (unsigned __int16 *)*((_QWORD *)result + 2);
    if ( !result )
      return 0LL;
  }
  *a5 = v9;
  return result;
}
