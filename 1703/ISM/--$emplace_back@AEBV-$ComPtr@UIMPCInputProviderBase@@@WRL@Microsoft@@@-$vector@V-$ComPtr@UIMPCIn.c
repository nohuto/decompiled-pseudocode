/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004DBE8
 * Callers:
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004C17C (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18001992C (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@UIHolographicDisplayInternal@Internal@Holograp.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@_K1@Z @ 0x18004DD44 (-_Change_array@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase> const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rdi
  size_t v12; // rcx
  void *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v8 = v4 - *a1;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 8 * v10;
      if ( 8 * v10 < 0x1000 )
      {
        v11 = (__int64 *)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (__int64 *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = (__int64)v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[v7];
      if ( v14 )
      {
        v15 = *a2;
        *v14 = *a2;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> *,Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v16 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[v7]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>::destroy<Microsoft::WRL::ComPtr<IInputTarget>>(
        v17,
        v16);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v18,
        (char *)v11,
        v10);
      throw;
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Change_array(a1, v11, v7 + 1, v10);
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    ++a1[1];
  }
}
