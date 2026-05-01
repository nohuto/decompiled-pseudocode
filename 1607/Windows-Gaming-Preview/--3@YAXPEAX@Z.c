/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180026834
 * Callers:
 *     ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800060E0 (-_Reallocate@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@W.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x18000637C (-deallocate@-$_Wrap_alloc@V-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@G.c)
 *     ??1?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000D2CC (--1-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microso.c)
 *     ?_Delete_this@?$_Func_impl@V_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_@@V?$allocator@H@std@@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@EEAAX_N@Z @ 0x18000D540 (-_Delete_this@-$_Func_impl@V_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_@@V-$allocator@H@std@@JW4_V.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180021550 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18002410C (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_e1b339e4d47a023791f0fa855a6997d9_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x180024660 (--_E-$_Func_impl@U-$_Callable_obj@V_lambda_e1b339e4d47a023791f0fa855a6997d9_@@$0A@@wistd@@V-$fun.c)
 *     ??_E?$CTaskWrapper@AEAV_lambda_1386917c2b0eefcf92d5aaca6b176d86_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180024EF0 (--_E-$CTaskWrapper@AEAV_lambda_1386917c2b0eefcf92d5aaca6b176d86_@@@ComTaskPool@Internal@Windows@.c)
 *     ??_ETileDataLayerProvider@OneCoreDataHelpers@@UEAAPEAXI@Z @ 0x180025B80 (--_ETileDataLayerProvider@OneCoreDataHelpers@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITileDataLayerProvider@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180025C10 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UITileDataLayerProvider@@VNil@Details.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1800267A0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180026ED0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
