/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x18000C5D0
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C930 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D700 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     _lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator() @ 0x18003876C (_lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_--operator().c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180065874 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  struct _GUID *v2; // rcx
  struct _GUID *v3; // rbx
  __int64 v4; // r14
  struct _GUID *i; // r15
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64); // r14
  int v11; // r15d
  struct _GUID **v12; // rsi
  struct _GUID *v13; // rbx
  struct _GUID *v14; // r14
  struct _GUID *v15; // rbx
  struct _GUID *v16; // rbp
  struct _GUID *j; // r12
  __int64 v18; // rdi
  void (__fastcall *v19)(__int64); // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+8h] BYREF
  struct _GUID v25; // [rsp+68h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  v3 = (struct _GUID *)*((_QWORD *)this + 8);
  v4 = *((_QWORD *)this + 7);
  if ( (struct _GUID *)v4 != v3 )
  {
    while ( !(unsigned __int8)lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(v2, v4) )
    {
      v4 += 8LL;
      if ( (struct _GUID *)v4 == v3 )
        goto LABEL_5;
    }
    if ( (struct _GUID *)v4 != v3 )
    {
      for ( i = (struct _GUID *)(v4 + 8); i != v3; i = (struct _GUID *)((char *)i + 8) )
      {
        if ( !(unsigned __int8)lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(v2, i) )
        {
          v2 = (struct _GUID *)v4;
          v4 += 8LL;
          v20 = 0LL;
          if ( &v25 != i )
          {
            v20 = *(_QWORD *)&i->Data1;
            *(_QWORD *)&i->Data1 = 0LL;
          }
          v21 = *(_QWORD *)&v2->Data1;
          *(_QWORD *)&v2->Data1 = v20;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
  }
LABEL_5:
  v6 = (__int64 *)*((_QWORD *)this + 7);
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( (__int64 *)v4 == v6 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 8);
    if ( v6 != v7 )
    {
      do
      {
        v9 = *v6;
        if ( *v6 )
        {
          *v6 = 0LL;
          v10 = *(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL);
          if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
          else
            v10(v9);
        }
        ++v6;
      }
      while ( v6 != v8 );
    }
    *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  }
  else if ( (__int64 *)v4 != v7 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(v2, v4, *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = v4;
  }
  v11 = 0;
  v12 = (struct _GUID **)((char *)this + 80);
  do
  {
    v13 = v12[1];
    v14 = *v12;
    if ( *v12 != v13 )
    {
      while ( !(unsigned __int8)lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(v2, v14) )
      {
        v14 = (struct _GUID *)((char *)v14 + 8);
        if ( v14 == v13 )
          goto LABEL_14;
      }
      if ( v14 != v13 )
      {
        for ( j = (struct _GUID *)v14->Data4; j != v13; j = (struct _GUID *)((char *)j + 8) )
        {
          if ( !(unsigned __int8)lambda_f9fdf02b90e6ddf717af0a8edf5bb4ee_::operator()(v2, j) )
          {
            v2 = v14;
            v14 = (struct _GUID *)((char *)v14 + 8);
            v22 = 0LL;
            if ( &v25 != j )
            {
              v22 = *(_QWORD *)&j->Data1;
              *(_QWORD *)&j->Data1 = 0LL;
            }
            v23 = *(_QWORD *)&v2->Data1;
            *(_QWORD *)&v2->Data1 = v22;
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
    }
LABEL_14:
    v15 = *v12;
    v16 = v12[1];
    if ( v14 == *v12 )
    {
      for ( ; v15 != v16; v15 = (struct _GUID *)((char *)v15 + 8) )
      {
        v18 = *(_QWORD *)&v15->Data1;
        if ( *(_QWORD *)&v15->Data1 )
        {
          *(_QWORD *)&v15->Data1 = 0LL;
          v19 = *(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL);
          if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
          else
            v19(v18);
        }
      }
      v12[1] = *v12;
    }
    else if ( v14 != v16 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v2, v14, v12[1]);
      v12[1] = v14;
    }
    ++v11;
    v12 += 3;
  }
  while ( (unsigned __int64)v11 < 4 );
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
