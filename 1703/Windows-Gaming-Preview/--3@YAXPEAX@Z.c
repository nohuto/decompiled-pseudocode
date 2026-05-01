/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18002954C
 * Callers:
 *     ??$emplace_back@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180007044 (--$emplace_back@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x180007994 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@G.c)
 *     ??1?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000CEA8 (--1-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microso.c)
 *     std::_Func_impl__lambda_7b6d028ca7e5065436294691f7ceefcc__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_ITileChangeEvent_____ptr64_::_Delete_this @ 0x18000D180 (std--_Func_impl__lambda_7b6d028ca7e5065436294691f7ceefcc__std--allocator_int__long_enum__VISUALE.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18001FFC0 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026670 (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_154c5b1f890d5c3087fe5f2f075becc9_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x180026FE0 (--_E-$_Func_impl@U-$_Callable_obj@V_lambda_154c5b1f890d5c3087fe5f2f075becc9_@@$0A@@wistd@@V-$fun.c)
 *     ??_E?$CTaskWrapper@AEAV_lambda_3deb4ce6cabefd1711534afb604daca8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800279F0 (--_E-$CTaskWrapper@AEAV_lambda_3deb4ce6cabefd1711534afb604daca8_@@@ComTaskPool@Internal@Windows@.c)
 *     ??_ETileDataLayerProvider@OneCoreDataHelpers@@UEAAPEAXI@Z @ 0x180028620 (--_ETileDataLayerProvider@OneCoreDataHelpers@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITileDataLayerProvider@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800286B0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UITileDataLayerProvider@@VNil@Details.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180029190 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180029B50 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
