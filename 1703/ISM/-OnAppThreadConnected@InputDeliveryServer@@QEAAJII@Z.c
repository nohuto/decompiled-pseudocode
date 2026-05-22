/*
 * XREFs of ?OnAppThreadConnected@InputDeliveryServer@@QEAAJII@Z @ 0x180069754
 * Callers:
 *     ?OnPeerConnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIIPEAPEAX@Z @ 0x18006B700 (-OnPeerConnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x18006AFF0 (--$_Insert@AEAU-$pair@$$CBIV-$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V-$_List_unchecked_iter.c)
 *     ??$_Buynode@AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@Z @ 0x18006B600 (--$_Buynode@AEAIAEAV-$ComPtr@VInputThread@@@WRL@Microsoft@@@-$_List_buy@U-$pair@$$CBIV-$ComPtr@V.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputDeliveryServer::OnAppThreadConnected(
        InputDeliveryServer *this,
        unsigned int a2,
        unsigned int a3)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  _DWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _DWORD *v15; // rcx
  char v17[24]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  _QWORD *v19; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+50h] BYREF
  _DWORD *v21; // [rsp+C8h] [rbp+58h]

  v20 = a3;
  v21 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = -2147024882;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &InputQueue::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_QWORD *)v6 + 13) = 0LL;
    v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v6 + 32LL))(
           v6,
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      v21 = v6;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      v8 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v8 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1C3,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v8);
  v9 = v21;
  v19 = 0LL;
  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 3) = 1;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v11 = &InputThread::`vftable';
    v11[3] = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _DWORD *))(*v11 + 32LL))(v11, a3, a2, v9);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v19 = v11;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v12 = **((_QWORD **)this + 50);
  v13 = std::_List_buy<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::_Buynode<unsigned int &,Microsoft::WRL::ComPtr<InputThread> &>(
          (_DWORD)retaddr,
          v12,
          *(_QWORD *)(v12 + 8),
          (unsigned int)&v20,
          (__int64)&v19);
  if ( *((_QWORD *)this + 51) == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  ++*((_QWORD *)this + 51);
  *(_QWORD *)(v12 + 8) = v13;
  **(_QWORD **)(v13 + 8) = v13;
  std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::_Insert<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>>>>(
    (char *)this + 392,
    v17,
    **((_QWORD **)this + 50) + 16LL,
    **((_QWORD **)this + 50));
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
