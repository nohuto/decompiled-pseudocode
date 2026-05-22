/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAXAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x180008598
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180007820 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAV?$function@$$A6AX_N@Z@std@@PEAV12@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180008DFC (--$_Uninitialized_copy_al_unchecked1@PEAV-$function@$$A6AX_N@Z@std@@PEAV12@V-$allocator@V-$funct.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        char **a1,
        __int64 a2)
{
  char *v4; // rcx
  char *v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, char *); // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  char *v12; // r14
  size_t v13; // rcx
  void *v14; // rax
  char *v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, char *); // rcx
  __int64 v17; // rdx
  char *v18; // rbx
  char *v19; // r12
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-58h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) >> 6;
    v24 = v7;
    if ( v7 == 0x3FFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v8 = v7 + 1;
    v9 = (v4 - *a1) >> 6;
    v10 = v9 >> 1;
    if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0x3FFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v13 = v11 << 6;
      if ( v11 << 6 < 0x1000 )
      {
        v12 = (char *)operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v14 = operator new(v13 + 39);
        v12 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = &v12[64 * v7];
      if ( v15 )
      {
        *((_QWORD *)v15 + 7) = 0LL;
        v16 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
        if ( v16 )
          *((_QWORD *)v15 + 7) = (**v16)(v16, v15);
      }
      std::_Uninitialized_copy_al_unchecked1<std::function<void (bool)> *,std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v21 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[64 * v24]);
      std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::destroy<std::function<void (bool)>>(v22, v21);
      std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::deallocate(v23, v12, v11);
      throw;
    }
    v18 = *a1;
    if ( *a1 )
    {
      v19 = a1[1];
      while ( v18 != v19 )
      {
        v20 = (char *)*((_QWORD *)v18 + 7);
        if ( v20 )
        {
          LOBYTE(v17) = v20 != v18;
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v20 + 32LL))(v20, v17);
          *((_QWORD *)v18 + 7) = 0LL;
        }
        v18 += 64;
      }
      std::_Deallocate(*a1, (a1[2] - *a1) >> 6, 0x40uLL);
    }
    *a1 = v12;
    a1[1] = &v12[64 * v8];
    a1[2] = &v12[64 * v11];
  }
  else
  {
    if ( v5 )
    {
      *((_QWORD *)v5 + 7) = 0LL;
      v6 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
      if ( v6 )
        *((_QWORD *)v5 + 7) = (**v6)(v6, v5);
    }
    a1[1] += 64;
  }
}
