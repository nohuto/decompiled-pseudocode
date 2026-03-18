/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x180122F78
 * Callers:
 *     ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x1800F5BC0 (-ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_NXZ @ 0x180123054 (-IsReadyToDraw@CEffectBrush@@QEBA_NXZ.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180123220 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  return __PAIR128__(*((_QWORD *)this + 9), 0LL) != *(_QWORD *)(*((_QWORD *)this + 9) + 48LL);
}
