/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180027850
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027C40 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18002A2A0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18002A614 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180066F94 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     _lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator() @ 0x1800683F0 (_lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_--operator().c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  struct IInspectable **v2; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl **v3; // rbx
  __int64 (__fastcall *v4)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v5; // rsi
  struct IInspectable *v6; // r12
  __int64 (__fastcall *v7)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // r12
  int v8; // eax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rsi
  __int64 (__fastcall *v10)(Microsoft::WRL::Details::WeakReferenceImpl *); // r12
  char v11; // r13
  struct IInspectable **v12; // rsi
  __int64 v13; // rcx
  int v14; // r15d
  char *v15; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl **v16; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **v17; // r14
  Microsoft::WRL::Details::WeakReferenceImpl **v18; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl **v19; // r12
  Microsoft::WRL::Details::WeakReferenceImpl *v20; // rsi
  struct IInspectable *v21; // r12
  __int64 (__fastcall *v22)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // r12
  int v23; // eax
  bool v24; // r13
  struct IInspectable **v25; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v26; // r14
  struct IInspectable **v27; // rdx
  struct IInspectable *v28; // rcx
  struct IInspectable *v29; // rax
  struct IInspectable **v30; // rdx
  struct IInspectable *v31; // rcx
  struct IInspectable *v32; // rax
  struct IInspectable *v33; // [rsp+60h] [rbp+40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+48h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  v2 = (struct IInspectable **)*((_QWORD *)this + 8);
  v3 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 7);
  if ( v3 != (Microsoft::WRL::Details::WeakReferenceImpl **)v2 )
  {
    v4 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve;
    while ( 1 )
    {
      v5 = *v3;
      v6 = 0LL;
      v33 = 0LL;
      if ( !v5 )
        goto LABEL_14;
      v7 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v5 + 24LL);
      v8 = v7 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
         ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v33)
         : v7(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v33);
      v6 = v33;
      if ( v8 < 0 )
        break;
      if ( !v33 )
      {
        v9 = *v3;
        if ( *v3 )
        {
          *v3 = (Microsoft::WRL::Details::WeakReferenceImpl *)v33;
          v10 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v9 + 16LL);
          if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
          else
            v10(v9);
          v6 = v33;
        }
        if ( !v6 )
          break;
      }
      v11 = 0;
      v4 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve;
LABEL_15:
      if ( v6 )
      {
        v33 = 0LL;
        ((void (__fastcall *)(struct IInspectable *))v6->lpVtbl->Release)(v6);
        v4 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve;
      }
      if ( v11 )
      {
        if ( v3 != (Microsoft::WRL::Details::WeakReferenceImpl **)v2 )
        {
          v12 = (struct IInspectable **)(v3 + 1);
          if ( v3 + 1 != (Microsoft::WRL::Details::WeakReferenceImpl **)v2 )
          {
            do
            {
              if ( !(unsigned __int8)lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(v4, v12) )
              {
                v27 = (struct IInspectable **)v3++;
                v28 = 0LL;
                if ( &v33 != v12 )
                {
                  v28 = *v12;
                  *v12 = 0LL;
                }
                v29 = *v27;
                *v27 = v28;
                v33 = v29;
                Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v33);
              }
              ++v12;
            }
            while ( v12 != v2 );
          }
        }
        goto LABEL_20;
      }
      if ( ++v3 == (Microsoft::WRL::Details::WeakReferenceImpl **)v2 )
        goto LABEL_20;
    }
    v4 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve;
LABEL_14:
    v11 = 1;
    goto LABEL_15;
  }
LABEL_20:
  std::vector<Microsoft::WRL::WeakRef>::erase((char *)this + 56, &v33, v3, *((_QWORD *)this + 8));
  v14 = 0;
  v15 = (char *)this + 80;
  do
  {
    v16 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)v15 + 1);
    v17 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)v15;
    if ( *(Microsoft::WRL::Details::WeakReferenceImpl ***)v15 != v16 )
    {
      while ( 1 )
      {
        v20 = *v17;
        v21 = 0LL;
        v33 = 0LL;
        v24 = 1;
        if ( v20 )
        {
          v22 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v20 + 24LL);
          v23 = v22 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
              ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
                  v20,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v33)
              : v22(v20, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v33);
          v21 = v33;
          if ( v23 >= 0 )
          {
            if ( v33 || (Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(v17), (v21 = v33) != 0LL) )
              v24 = 0;
          }
        }
        if ( v21 )
        {
          v33 = 0LL;
          ((void (__fastcall *)(struct IInspectable *))v21->lpVtbl->Release)(v21);
        }
        if ( v24 )
          break;
        if ( ++v17 == v16 )
          goto LABEL_22;
      }
      if ( v17 != v16 )
      {
        v25 = (struct IInspectable **)(v17 + 1);
        if ( v17 + 1 != v16 )
        {
          do
          {
            if ( !(unsigned __int8)lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(v13, v25) )
            {
              v30 = (struct IInspectable **)v17++;
              v31 = 0LL;
              if ( &v33 != v25 )
              {
                v31 = *v25;
                *v25 = 0LL;
              }
              v32 = *v30;
              *v30 = v31;
              v33 = v32;
              Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v33);
            }
            ++v25;
          }
          while ( v25 != (struct IInspectable **)v16 );
        }
      }
    }
LABEL_22:
    v18 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)v15;
    v19 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)v15 + 1);
    if ( v17 == *(Microsoft::WRL::Details::WeakReferenceImpl ***)v15 )
    {
      for ( ; v18 != v19; ++v18 )
      {
        v26 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      *((_QWORD *)v15 + 1) = *(_QWORD *)v15;
    }
    else if ( v17 != v19 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v13, v17, *((_QWORD *)v15 + 1));
      *((_QWORD *)v15 + 1) = v17;
    }
    ++v14;
    v15 += 24;
  }
  while ( (unsigned __int64)v14 < 4 );
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
