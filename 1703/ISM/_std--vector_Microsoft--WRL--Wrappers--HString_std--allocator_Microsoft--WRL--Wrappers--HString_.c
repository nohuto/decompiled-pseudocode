/*
 * XREFs of _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$102 @ 0x1800A327A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x18000546C (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A614 (-deallocate@-$_Wrap_alloc@U-$_Wrap_alloc@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U.c)
 *     ??$destroy@VHString@Wrappers@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAXPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18007B914 (--$destroy@VHString@Wrappers@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VHString@Wrappers@WRL@Mi.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch_102(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rbx
  HSTRING *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = (char *)a2[14];
  v4 = (HSTRING *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v3[8 * a2[17]]);
  std::_Wrap_alloc<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
    v5,
    v4);
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
    v6,
    v3,
    a2[16]);
  throw;
}
