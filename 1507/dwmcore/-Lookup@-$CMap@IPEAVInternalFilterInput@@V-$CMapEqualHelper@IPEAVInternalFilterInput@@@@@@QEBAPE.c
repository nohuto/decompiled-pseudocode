/*
 * XREFs of ?Lookup@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPEAVInternalFilterInput@@AEBI@Z @ 0x180111E24
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z @ 0x18011318C (-GetPropertyStorage@CCompiledEffect@@AEAAJIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAXPEA_N@Z.c)
 *     ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574 (-ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEI.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129F2C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

__int64 CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Lookup()
{
  int Key; // eax
  __int64 v1; // r10

  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey();
  if ( Key == -1 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8LL * Key);
}
