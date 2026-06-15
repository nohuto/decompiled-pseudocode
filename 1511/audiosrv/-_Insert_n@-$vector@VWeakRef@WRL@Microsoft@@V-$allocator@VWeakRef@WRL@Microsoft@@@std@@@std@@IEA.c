/*
 * XREFs of ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18000D920
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C750 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C930 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D700 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000DBB0 (--$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V1.c)
 *     ??$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAXPEAVWeakRef@WRL@Microsoft@@_KPEBV123@AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000DBE4 (--$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180046DB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180046E08 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180065874 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     ??0?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z @ 0x1800658AC (--0-$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *std::vector<Microsoft::WRL::WeakRef>::_Insert_n(
        volatile signed __int32 **a1,
        _QWORD *a2,
        volatile signed __int32 **a3,
        ...)
{
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v6; // rdx
  __int64 v7; // r12
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 **i; // r13
  __int64 (__fastcall *v14)(volatile signed __int32 *); // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  volatile signed __int32 *v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rdi
  int v22; // esi
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rdi
  __int64 *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rbx
  volatile signed __int32 **v29; // r13
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // [rsp+80h] [rbp+8h] BYREF
  volatile signed __int32 **v32; // [rsp+90h] [rbp+18h]
  volatile signed __int32 *v33; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  volatile signed __int32 **v35; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v33 = va_arg(va1, volatile signed __int32 *);
  v35 = va_arg(va1, volatile signed __int32 **);
  v32 = a3;
  v31 = (volatile signed __int32 *)a1;
  v3 = a3;
  v6 = *a1;
  v7 = ((char *)a3 - (char *)*a1) >> 3;
  v8 = a1[2];
  v9 = a1[1];
  if ( ((char *)v8 - (char *)v9) >> 3 )
  {
    if ( ((char *)v9 - (char *)a3) >> 3 )
    {
      ATL::CComPtr<CDuckingNotification::CSharedNotificationData>::CComPtr<CDuckingNotification::CSharedNotificationData>(
        &v31,
        v35);
      v26 = (__int64 *)a1[1];
      a1[1] = (volatile signed __int32 *)std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
                                           v26 - 1,
                                           v26,
                                           v26);
      while ( v32 != (volatile signed __int32 **)(v26 - 1) )
      {
        v27 = *(--v26 - 1);
        if ( *v26 != v27 )
        {
          if ( v27 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 8LL))(*(v26 - 1));
          v28 = *v26;
          *v26 = v27;
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      v29 = v32;
      v10 = v31;
      do
      {
        if ( *v29 != v10 )
        {
          if ( v10 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          v30 = *v29;
          *v29 = v10;
          if ( v30 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        ++v29;
      }
      while ( v29 != v32 + 1 );
      if ( v10 )
      {
        v14 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL);
        goto LABEL_50;
      }
    }
    else
    {
      v33 = *v35;
      v10 = v33;
      if ( v33 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        v3 = v32;
      }
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        v3,
        a1[1],
        v3 + 1);
      try
      {
        std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
          a1[1],
          1 - (((char *)a1[1] - (char *)v32) >> 3),
          (volatile signed __int32 **)va);
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v11, v32 + 1, *((_QWORD *)v31 + 1) + 8LL);
        throw;
      }
      a1[1] += 2;
      v12 = (__int64)(a1[1] - 2);
      v31 = (volatile signed __int32 *)v12;
      for ( i = v32; i != (volatile signed __int32 **)v12; ++i )
      {
        if ( *i != v10 )
        {
          if ( v10 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
            v12 = (__int64)v31;
          }
          v25 = *i;
          *i = v10;
          if ( v25 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
            v12 = (__int64)v31;
          }
        }
      }
      if ( v10 )
      {
        v14 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL);
        if ( v14 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        {
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
          goto LABEL_10;
        }
LABEL_50:
        v14(v10);
      }
    }
  }
  else
  {
    v16 = ((char *)v9 - (char *)v6) >> 3;
    if ( v16 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v17 = ((char *)v8 - (char *)v6) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v17 >> 1) < v17 )
      v18 = 0LL;
    else
      v18 = (v17 >> 1) + v17;
    if ( v18 < v16 + 1 )
      v18 = v16 + 1;
    v19 = 0LL;
    v33 = 0LL;
    if ( v18 )
    {
      if ( v18 > 0x1FFFFFFFFFFFFFFFLL || (v19 = (volatile signed __int32 *)operator new(8 * v18), (v33 = v19) == 0LL) )
        std::_Xbad_alloc();
      v3 = v32;
    }
    v20 = ((char *)v3 - (char *)*a1) >> 3;
    LODWORD(v31) = 0;
    try
    {
      std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        &v19[2 * v20],
        1LL,
        v35);
      LODWORD(v31) = 1;
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        *a1,
        v32,
        v19);
      LODWORD(v31) = 2;
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        v32,
        a1[1],
        &v19[2 * v20 + 2]);
    }
    catch ( ... )
    {
      v22 = (int)v31;
      v23 = v33;
      if ( (int)v31 > 1 )
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v24, v33, &v33[2 * v20]);
      if ( v22 > 0 )
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v24, &v23[2 * v20], &v23[2 * v20 + 2]);
      operator delete((void *)v23);
      throw;
    }
    v21 = ((char *)a1[1] - (char *)*a1) >> 3;
    if ( *a1 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v24, *a1, a1[1]);
      operator delete((void *)*a1);
    }
    a1[2] = &v19[2 * v18];
    a1[1] = &v19[2 * v21 + 2];
    *a1 = v19;
  }
LABEL_10:
  *a2 = &(*a1)[2 * v7];
  return a2;
}
