/*
 * XREFs of ?_Insert_n@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@_KAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002A3A0
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027A80 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027C40 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18002A694 (--$_Uninit_move@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V1.c)
 *     ??$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@V123@@std@@YAXPEAVWeakRef@WRL@Microsoft@@_KPEBV123@AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18002A6C8 (--$_Uninit_fill_n@PEAVWeakRef@WRL@Microsoft@@_KV123@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@V.c)
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180042E78 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180042EC8 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180066F94 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     ??0?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z @ 0x180067068 (--0-$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *std::vector<Microsoft::WRL::WeakRef>::_Insert_n(
        Microsoft::WRL::Details::WeakReferenceImpl *a1,
        _QWORD *a2,
        Microsoft::WRL::Details::WeakReferenceImpl **a3,
        ...)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r13
  Microsoft::WRL::Details::WeakReferenceImpl **i; // r12
  __int64 (__fastcall *v14)(Microsoft::WRL::Details::WeakReferenceImpl *, volatile int *); // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rsi
  int v22; // esi
  Microsoft::WRL::Details::WeakReferenceImpl *v23; // rbx
  __int64 v24; // rcx
  volatile int *v25; // rdx
  Microsoft::WRL::Details::WeakReferenceImpl **v26; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl **v27; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v28; // r12
  Microsoft::WRL::Details::WeakReferenceImpl **v29; // r12
  Microsoft::WRL::Details::WeakReferenceImpl *v30; // rbx
  __int64 v31; // [rsp+30h] [rbp-48h]
  Microsoft::WRL::Details::WeakReferenceImpl *v32; // [rsp+80h] [rbp+8h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl **v33; // [rsp+90h] [rbp+18h]
  Microsoft::WRL::Details::WeakReferenceImpl *v34; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  Microsoft::WRL::Details::WeakReferenceImpl **v36; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v34 = va_arg(va1, Microsoft::WRL::Details::WeakReferenceImpl *);
  v36 = va_arg(va1, Microsoft::WRL::Details::WeakReferenceImpl **);
  v33 = a3;
  v32 = a1;
  v3 = a3;
  v6 = *(_QWORD *)a1;
  v7 = ((__int64)a3 - *(_QWORD *)a1) >> 3;
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_QWORD *)a1 + 1);
  if ( (v8 - v9) >> 3 )
  {
    if ( (v9 - (__int64)a3) >> 3 )
    {
      ATL::CComPtr<CDuckingNotification::CSharedNotificationData>::CComPtr<CDuckingNotification::CSharedNotificationData>(
        &v32,
        v36);
      v26 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
                              v26 - 1,
                              v26,
                              v26);
      v27 = v33;
      while ( v27 != v26 - 1 )
      {
        v28 = *(--v26 - 1);
        if ( *v26 != v28 )
        {
          if ( v28 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 8LL))(*(v26 - 1));
          v34 = *v26;
          *v26 = v28;
          Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease((Microsoft::WRL::Details::WeakReferenceImpl **)va);
          v27 = v33;
        }
      }
      v29 = v27;
      v30 = v32;
      do
      {
        if ( *v29 != v30 )
        {
          if ( v30 )
            (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v30 + 8LL))(v30);
          v34 = *v29;
          *v29 = v30;
          Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease((Microsoft::WRL::Details::WeakReferenceImpl **)va);
          v27 = v33;
        }
        ++v29;
      }
      while ( v29 != v27 + 1 );
      Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v32);
    }
    else
    {
      v34 = *v36;
      v10 = v34;
      if ( v34 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v34 + 8LL))(v34);
        v3 = v33;
      }
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        v3,
        *((_QWORD *)a1 + 1),
        v3 + 1);
      try
      {
        std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
          *((_QWORD *)a1 + 1),
          1 - ((__int64)(*((_QWORD *)a1 + 1) - (_QWORD)v33) >> 3),
          (Microsoft::WRL::Details::WeakReferenceImpl **)va);
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v11, v33 + 1, *((_QWORD *)v32 + 1) + 8LL);
        throw;
      }
      *((_QWORD *)a1 + 1) += 8LL;
      v12 = *((_QWORD *)a1 + 1) - 8LL;
      for ( i = v33; i != (Microsoft::WRL::Details::WeakReferenceImpl **)v12; ++i )
      {
        if ( *i != v10 )
        {
          if ( v10 )
            (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v10 + 8LL))(v10);
          v32 = *i;
          *i = v10;
          Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v32);
        }
      }
      if ( v10 )
      {
        v14 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, volatile int *))(*(_QWORD *)v10 + 16LL);
        if ( v14 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
            v10,
            v25);
        else
          ((void (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl *))v14)(v10);
      }
    }
  }
  else
  {
    v16 = (v9 - v6) >> 3;
    if ( v16 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v17 = (v8 - v6) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v17 >> 1) < v17 )
      v18 = 0LL;
    else
      v18 = (v17 >> 1) + v17;
    if ( v18 < v16 + 1 )
      v18 = v16 + 1;
    v19 = 0LL;
    v34 = 0LL;
    if ( v18 )
    {
      if ( v18 > 0x1FFFFFFFFFFFFFFFLL
        || (v19 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(8 * v18), (v34 = v19) == 0LL) )
      {
        std::_Xbad_alloc();
      }
      v3 = v33;
    }
    v20 = ((__int64)v3 - *(_QWORD *)a1) >> 3;
    v31 = v20;
    LODWORD(v32) = 0;
    try
    {
      std::_Uninit_fill_n<Microsoft::WRL::WeakRef *,unsigned __int64,Microsoft::WRL::WeakRef,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        (char *)v19 + 8 * v20,
        1LL,
        v36);
      LODWORD(v32) = 1;
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        *(_QWORD *)a1,
        v33,
        v19);
      LODWORD(v32) = 2;
      std::_Uninit_move<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef>(
        v33,
        *((_QWORD *)a1 + 1),
        (char *)v19 + 8 * v20 + 8);
    }
    catch ( ... )
    {
      v22 = (int)v32;
      v23 = v34;
      if ( (int)v32 > 1 )
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v24, v34, (char *)v34 + 8 * v31);
      if ( v22 > 0 )
        std::vector<Microsoft::WRL::WeakRef>::_Destroy(v24, (char *)v23 + 8 * v31, (char *)v23 + 8 * v31 + 8);
      operator delete(v23);
      throw;
    }
    v21 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3) + 1;
    if ( *(_QWORD *)a1 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v24, *(_QWORD *)a1, *((_QWORD *)a1 + 1));
      operator delete(*(void **)a1);
    }
    *((_QWORD *)a1 + 2) = (char *)v19 + 8 * v18;
    *((_QWORD *)a1 + 1) = (char *)v19 + 8 * v21;
    *(_QWORD *)a1 = v19;
  }
  *a2 = *(_QWORD *)a1 + 8 * v7;
  return a2;
}
