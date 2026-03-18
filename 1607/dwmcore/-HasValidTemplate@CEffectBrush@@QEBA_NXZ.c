/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x18013C134
 * Callers:
 *     ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x18010D43C (-ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18013BBCC (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z @ 0x18013C050 (-HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z @ 0x18013C254 (-IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013C440 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  return __PAIR128__(*((_QWORD *)this + 17), 0LL) != *(_QWORD *)(*((_QWORD *)this + 17) + 128LL);
}
