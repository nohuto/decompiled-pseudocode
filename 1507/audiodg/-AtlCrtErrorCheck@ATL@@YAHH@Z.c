/*
 * XREFs of ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140029F28
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x1400020C0 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14001155C (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14002A2CC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?RemoveAt@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAHH@Z @ 0x140032ACC (-RemoveAt@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInst.c)
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x14003618C (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140036A00 (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140037C14 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140038654 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::AtlCrtErrorCheck(unsigned int a1)
{
  if ( a1 )
  {
    if ( a1 == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( a1 == 22 || a1 == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( a1 != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  return a1;
}
