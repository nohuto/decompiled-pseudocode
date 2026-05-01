/*
 * XREFs of ??$As@UITileInfoCache@@@?$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITileInfoCache@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800244FC
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022874 (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_7de8aa66cbcd57b5275686df45c342f0_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x1800249F0 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_7de8aa66cbcd57b5275686df45c342f0_@@$0A@@wistd@@.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ITileInfo>::As<ITileInfoCache>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_e0cae81b_625e_400d_9ded_4e4956f6fb9d,
           a2);
}
