/*
 * XREFs of ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004DA98
 * Callers:
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18004B428 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004E98C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18001992C (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@UIHolographicDisplayInternal@Internal@Holograp.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@_K1@Z @ 0x18004DD44 (-_Change_array@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // rdi
  size_t v11; // rcx
  void *v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v7 = v4 - *a1;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    if ( v9 )
    {
      if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v11 = 8 * v9;
      if ( 8 * v9 < 0x1000 )
      {
        v10 = (__int64 *)operator new(v11);
      }
      else
      {
        if ( v11 + 39 < v11 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v12 = operator new(v11 + 39);
        v10 = (__int64 *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v10 - 1) = (__int64)v12;
      }
    }
    else
    {
      v10 = 0LL;
    }
    try
    {
      v13 = &v10[v6];
      if ( v13 )
      {
        *v13 = 0LL;
        if ( v13 != a2 )
        {
          *v13 = *a2;
          *a2 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> *,Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
        *a1,
        a1[1],
        v10);
    }
    catch ( ... )
    {
      v14 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v10[v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>::destroy<Microsoft::WRL::ComPtr<IInputTarget>>(
        v15,
        v14);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v16,
        (char *)v10,
        v9);
      throw;
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Change_array(a1, v10, v6 + 1, v9);
  }
  else
  {
    if ( v5 )
    {
      *v5 = 0LL;
      if ( v5 != a2 )
      {
        *v5 = *a2;
        *a2 = 0LL;
      }
    }
    ++a1[1];
  }
}
