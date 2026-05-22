/*
 * XREFs of ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18007B270
 * Callers:
 *     EnumerateDevices @ 0x180076FD8 (EnumerateDevices.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@00AEAU?$_Wrap_alloc@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18007BD04 (--$_Uninitialized_move_al_unchecked1@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V-$allocator@V.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::emplace_back<Microsoft::WRL::Wrappers::HString>(
        char **a1,
        _QWORD *a2)
{
  char *v4; // rcx
  char *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  char *v11; // rsi
  size_t v12; // rcx
  void *v13; // rax
  char *v14; // rax
  HSTRING *v15; // rdi
  HSTRING *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx

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
        *(_QWORD *)v14 = *a2;
        *a2 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,std::allocator<Microsoft::WRL::Wrappers::HString>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v17 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[8 * v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
        v18,
        v17);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v19,
        v11,
        v10);
      throw;
    }
    v15 = (HSTRING *)*a1;
    if ( *a1 )
    {
      v16 = (HSTRING *)a1[1];
      while ( v15 != v16 )
      {
        WindowsDeleteString(*v15);
        *v15++ = 0LL;
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
      *(_QWORD *)v5 = *a2;
      *a2 = 0LL;
    }
    a1[1] += 8;
  }
}
