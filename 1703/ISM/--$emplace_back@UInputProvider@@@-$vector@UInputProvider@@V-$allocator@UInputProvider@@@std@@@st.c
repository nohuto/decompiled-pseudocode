/*
 * XREFs of ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x18002C5A4
 * Callers:
 *     ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C3EC (-CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002C78C (--$_Uninitialized_copy_al_unchecked1@PEAUInputProvider@@PEAU1@V-$allocator@UInputProvider@@@std@.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<InputProvider>::emplace_back<InputProvider>(char **a1, __int64 a2)
{
  char *v4; // r8
  char *v5; // rcx
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rdi
  size_t v12; // rcx
  void *v13; // rax
  char *v14; // rcx
  char *v15; // r14
  char *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) / 24;
    if ( v6 == 0xAAAAAAAAAAAAAAALL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *a1) / 24;
    v9 = v8 >> 1;
    if ( v8 <= 0xAAAAAAAAAAAAAAALL - (v8 >> 1) )
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
      if ( v10 > 0xAAAAAAAAAAAAAAALL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 24 * v10;
      if ( 24 * v10 < 0x1000 )
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
      v14 = &v11[24 * v6];
      if ( v14 )
      {
        *(_OWORD *)v14 = *(_OWORD *)a2;
        *((_QWORD *)v14 + 2) = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 16) = 0LL;
      }
      std::_Uninitialized_copy_al_unchecked1<InputProvider *,InputProvider *,std::allocator<InputProvider>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v18 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v11[24 * v6]);
      std::_Wrap_alloc<std::allocator<InputProvider>>::destroy<InputProvider>(v19, v18);
      std::_Wrap_alloc<std::allocator<InputProvider>>::deallocate(v20, v11, v10);
      throw;
    }
    v15 = *a1;
    if ( *a1 )
    {
      v16 = a1[1];
      while ( v15 != v16 )
      {
        v17 = *((_QWORD *)v15 + 2);
        *((_QWORD *)v15 + 2) = 0LL;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v15 += 24;
      }
      std::_Deallocate(*a1, (a1[2] - *a1) / 24, 0x18uLL);
    }
    *a1 = v11;
    a1[1] = &v11[24 * v7];
    a1[2] = &v11[24 * v10];
  }
  else
  {
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)a2;
      *((_QWORD *)v5 + 2) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = 0LL;
    }
    a1[1] += 24;
  }
}
