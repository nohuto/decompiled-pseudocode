/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18002E440
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x1800673CC (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
        __int64 *a1,
        char *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  char *v5; // rbx
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rdi
  unsigned int i; // ecx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int16 *v13; // r10
  unsigned __int16 *v14; // rax
  int v15; // edx
  int v16; // r8d

  v5 = a2;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = *(_WORD *)a2;
  v8 = 0LL;
  for ( i = 0; *(_WORD *)a2; v7 = *(_WORD *)a2 )
  {
    a2 += 2;
    i = v7 + 33 * i;
  }
  v10 = *((_DWORD *)a1 + 4) == 17;
  *a4 = i;
  if ( v10 )
    v11 = i % 0x11;
  else
    v11 = i % *((_DWORD *)a1 + 4);
  v12 = *a1;
  *a3 = v11;
  if ( !v12 )
    return 0LL;
  v13 = *(unsigned __int16 **)(v12 + 8 * v11);
  *a5 = 0LL;
  if ( !v13 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)v13 + 6) == i )
    {
      v14 = *(unsigned __int16 **)v13;
      do
      {
        v15 = *(unsigned __int16 *)&v5[(_QWORD)v14 - *(_QWORD *)v13];
        v16 = *v14 - v15;
        if ( v16 )
          break;
        ++v14;
      }
      while ( v15 );
      if ( !v16 )
        break;
    }
    v8 = v13;
    v13 = (unsigned __int16 *)*((_QWORD *)v13 + 2);
    if ( !v13 )
      return 0LL;
  }
  *a5 = v8;
  return v13;
}
