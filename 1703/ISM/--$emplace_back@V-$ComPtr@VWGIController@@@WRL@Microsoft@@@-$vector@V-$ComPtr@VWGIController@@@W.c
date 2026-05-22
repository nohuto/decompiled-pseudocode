/*
 * XREFs of ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@Z @ 0x180061894
 * Callers:
 *     ?OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180060FC0 (-OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationCont.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIGipGameControllerInputSinkPrivate@Internal@Input@Gaming@Windows@@U?$InterfaceList@UIHidGameControllerInputSink@Custom@Input@Gaming@Windows@@U?$InterfaceList@UIXusbGameControllerInputSink@Custom@Input@Gaming@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061730 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180061C90 (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@V-$all.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<WGIController>>::emplace_back<Microsoft::WRL::ComPtr<WGIController>>(
        char **a1,
        char *a2)
{
  char *v4; // rcx
  char *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  char *v11; // r14
  size_t v12; // rcx
  void *v13; // rax
  char *v14; // rcx
  volatile signed __int64 **v15; // rdi
  volatile signed __int64 **v16; // r12
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
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
        v11 = (char *)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (char *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[8 * v6];
      if ( v14 )
      {
        *(_QWORD *)v14 = 0LL;
        if ( v14 != a2 )
        {
          *(_QWORD *)v14 = *(_QWORD *)a2;
          *(_QWORD *)a2 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<WGIController> *,Microsoft::WRL::ComPtr<WGIController> *,std::allocator<Microsoft::WRL::ComPtr<WGIController>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v18 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[8 * v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<WGIController>>>::destroy<Microsoft::WRL::ComPtr<WGIController>>(
        v19,
        v18);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v20,
        v11,
        v10);
      throw;
    }
    v15 = (volatile signed __int64 **)*a1;
    if ( *a1 )
    {
      v16 = (volatile signed __int64 **)a1[1];
      while ( v15 != v16 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          *v15 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v17);
        }
        ++v15;
      }
      std::_Deallocate(*a1, (a1[2] - *a1) >> 3, 8uLL);
    }
    *a1 = v11;
    a1[1] = &v11[8 * v7];
    a1[2] = &v11[8 * v10];
  }
  else
  {
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      if ( v5 != a2 )
      {
        *(_QWORD *)v5 = *(_QWORD *)a2;
        *(_QWORD *)a2 = 0LL;
      }
    }
    a1[1] += 8;
  }
}
