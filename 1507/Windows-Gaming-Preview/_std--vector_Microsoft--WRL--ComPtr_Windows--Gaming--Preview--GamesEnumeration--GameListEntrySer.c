/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Reallocate_::_1_::catch$0 @ 0x180027493
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x180002A1C (-deallocate@-$_Wrap_alloc@V-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@G.c)
 *     _CxxThrowException_0 @ 0x1800269DC (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
    a1,
    *(void **)(a2 + 104));
  throw;
}
