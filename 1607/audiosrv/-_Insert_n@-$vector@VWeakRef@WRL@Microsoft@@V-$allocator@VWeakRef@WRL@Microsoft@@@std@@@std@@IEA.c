/*
 * XREFs of ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180027EBC
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021C60 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021E00 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180028180 (--$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V1.c)
 *     ??$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAXPEAVWeakRef@WRL@Microsoft@@_KPEBV123@AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800281B4 (--$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18004FEF0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV012@@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180051154 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::vector<Microsoft::WRL::WeakRef>::_Insert_n(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        char *a4,
        struct Microsoft::WRL::WeakRef *a5)
{
  __int64 *v5; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  char *v15; // rax
  char *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r15
  char *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 *v23; // rsi
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // esi
  char *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  void (*v30)(void); // rax
  void **v31; // rbx
  __int64 *i; // rax
  void *v33; // rax
  __int64 v34; // rcx
  void (*v35)(void); // rax
  __int64 *v36; // rsi
  __int64 v37; // rcx
  void (*v38)(void); // rax
  unsigned __int64 v39; // [rsp+38h] [rbp-50h]
  _QWORD *v40; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp+18h]
  char *v42; // [rsp+A8h] [rbp+20h] BYREF

  v42 = a4;
  v41 = a3;
  v40 = a1;
  v5 = a3;
  v8 = ((__int64)a3 - *a1) >> 3;
  v9 = a1[2];
  v10 = a1[1];
  if ( (v9 - v10) >> 3 )
  {
    if ( (v10 - (__int64)a3) >> 3 )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v40, a5);
      v31 = (void **)(a1[1] - 8LL);
      a1[1] = std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
                v31,
                a1[1],
                a1[1]);
      for ( i = v41; v41 != (__int64 *)v31; i = v41 )
      {
        --v31;
        v33 = 0LL;
        if ( &v42 != (char **)v31 )
        {
          v33 = *v31;
          *v31 = 0LL;
        }
        v34 = (__int64)v31[1];
        v31[1] = v33;
        if ( v34 )
        {
          v35 = *(void (**)(void))(*(_QWORD *)v34 + 16LL);
          if ( (char *)v35 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v34);
          else
            v35();
        }
      }
      v36 = i;
      v24 = (__int64)v40;
      do
      {
        if ( *v36 != v24 )
        {
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          v37 = *v36;
          *v36 = v24;
          if ( v37 )
          {
            v38 = *(void (**)(void))(*(_QWORD *)v37 + 16LL);
            if ( (char *)v38 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v37);
            else
              v38();
          }
          i = v41;
        }
        ++v36;
      }
      while ( v36 != i + 1 );
    }
    else
    {
      v20 = *(char **)a5;
      v42 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 8LL))(v20);
        v5 = v41;
      }
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        v5,
        a1[1],
        v5 + 1);
      try
      {
        std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
          a1[1],
          1 - ((__int64)(a1[1] - (_QWORD)v41) >> 3),
          &v42);
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v21, v41 + 1, v40[1] + 8LL);
        throw;
      }
      a1[1] += 8LL;
      v22 = a1[1] - 8LL;
      v23 = v41;
      v24 = (__int64)v42;
      while ( v23 != (__int64 *)v22 )
      {
        if ( *v23 != v24 )
        {
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          v29 = *v23;
          *v23 = v24;
          if ( v29 )
          {
            v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
            if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v29);
            else
              v30();
          }
        }
        ++v23;
      }
    }
    if ( v24 )
    {
      v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL);
      if ( v25 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v24);
      else
        v25(v24);
    }
  }
  else
  {
    v11 = (v10 - *a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL == v11 )
      std::_Xlength_error("vector<T> too long");
    v12 = v11 + 1;
    v13 = (v9 - *a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v13 >> 1) < v13 )
      v14 = 0LL;
    else
      v14 = (v13 >> 1) + v13;
    if ( v14 < v12 )
      v14 = v12;
    v39 = v14;
    v15 = (char *)std::_Allocate(v14, 8uLL, 0);
    v16 = v15;
    v42 = v15;
    v17 = ((__int64)v41 - *a1) >> 3;
    LODWORD(v40) = 0;
    try
    {
      std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        &v15[8 * v17],
        1LL,
        a5);
      LODWORD(v40) = 1;
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        *a1,
        v41,
        v16);
      LODWORD(v40) = 2;
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        v41,
        a1[1],
        &v16[8 * v17 + 8]);
    }
    catch ( ... )
    {
      v26 = (int)v40;
      v27 = v42;
      if ( (int)v40 > 1 )
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v28, v42, &v42[8 * v17]);
      if ( v26 > 0 )
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v28, &v27[8 * v17], &v27[8 * v17 + 8]);
      std::_Deallocate(v27, v39, 8uLL);
      throw;
    }
    v18 = ((__int64)(a1[1] - *a1) >> 3) + 1;
    if ( *a1 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v28, *a1, a1[1]);
      std::_Deallocate((void *)*a1, (__int64)(a1[2] - *a1) >> 3, 8uLL);
    }
    a1[2] = &v16[8 * v14];
    a1[1] = &v16[8 * v18];
    *a1 = v16;
  }
  *a2 = *a1 + 8 * v8;
  return a2;
}
