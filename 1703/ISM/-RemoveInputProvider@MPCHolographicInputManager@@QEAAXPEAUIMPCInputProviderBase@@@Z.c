/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004B200
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004EF50 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18004B428 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18004D9BC (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  struct IMPCInputProviderBase **v2; // rdi
  char *v3; // r14
  struct IMPCInputProviderBase **i; // rbp
  struct IMPCInputProviderBase *v7; // rbx
  const char *v8; // r9
  struct IMPCInputProviderBase ***v9; // r14
  struct IMPCInputProviderBase *v10; // rdx
  struct IMPCInputProviderBase **v11; // rdi
  struct IMPCInputProviderBase **j; // rbx
  struct IMPCInputProviderBase *v13; // rcx
  struct IMPCInputProviderBase **v14; // rdi
  struct IMPCInputProviderBase **k; // r15
  struct IMPCInputProviderBase *v16; // rbx
  __int64 *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 265);
  v3 = (char *)this + 2112;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 264); i != v2; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( a2 == v7 )
      break;
  }
  if ( i != *((struct IMPCInputProviderBase ***)this + 265) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 208LL))(a2) )
    {
      v9 = (struct IMPCInputProviderBase ***)((char *)this + 2360);
      if ( ((*((_QWORD *)this + 296) - *((_QWORD *)this + 295)) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v10 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 269);
        if ( v10 )
        {
          MPCHolographicInputManager::SetProviderPrimary(this, v10);
        }
        else
        {
          v11 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 296);
          for ( j = *v9; j != v11; ++j )
          {
            v13 = *j;
            if ( *j )
            {
              *j = 0LL;
              (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v13 + 16LL))(v13);
            }
          }
          *((_QWORD *)this + 296) = *((_QWORD *)this + 295);
        }
      }
      else
      {
        v14 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 296);
        for ( k = *v9; k != v14; ++k )
        {
          v16 = *k;
          if ( *k )
            (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v16 + 8LL))(*k);
          if ( v16 )
            (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v16 + 16LL))(v16);
          if ( a2 == v16 )
            break;
        }
        if ( k == *((struct IMPCInputProviderBase ***)this + 296) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xFB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v8);
          __debugbreak();
        }
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 2360, &v23, k);
      }
      v3 = (char *)this + 2112;
    }
    v17 = (__int64 *)*((_QWORD *)this + 272);
    if ( v17 )
    {
      v18 = *v17;
      v19 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
      v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v18 + 96))(v17, v19);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x103,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v20);
        JUMPOUT(0x18004B426LL);
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v23, i);
  }
  if ( a2 == *((struct IMPCInputProviderBase **)this + 269) )
  {
    v21 = *((_QWORD *)this + 269);
    if ( v21 )
    {
      *((_QWORD *)this + 269) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
}
