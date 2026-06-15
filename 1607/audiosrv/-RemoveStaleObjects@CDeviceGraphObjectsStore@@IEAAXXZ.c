/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180021AA0
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021E00 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x180025B84 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180028104 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x18002822C (--$destroy@VWeakRef@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180051154 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  __int64 v2; // rcx
  char *v3; // rdi
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // ebp
  char **v7; // rdi
  char *v8; // rbx
  char *v9; // rsi
  char *v10; // r14
  char *v11; // rbx
  char *i; // r15
  char *j; // r14
  __int64 *v14; // rdx
  __int64 v15; // rax
  void (*v16)(void); // rax
  __int64 *v17; // rdx
  __int64 v18; // rax
  void (*v19)(void); // rax
  LPCRITICAL_SECTION v20; // [rsp+50h] [rbp+8h] BYREF
  char v21; // [rsp+58h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&v20);
  v3 = (char *)*((_QWORD *)this + 8);
  v4 = (char *)*((_QWORD *)this + 7);
  if ( v4 != v3 )
  {
    while ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, v4) )
    {
      v4 += 8;
      if ( v4 == v3 )
        goto LABEL_2;
    }
    if ( v4 != v3 )
    {
      for ( i = v4 + 8; i != v3; i += 8 )
      {
        if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v2, i) )
        {
          v14 = (__int64 *)v4;
          v4 += 8;
          v15 = 0LL;
          if ( &v21 != i )
          {
            v15 = *(_QWORD *)i;
            *(_QWORD *)i = 0LL;
          }
          v2 = *v14;
          *v14 = v15;
          if ( v2 )
          {
            v16 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
            if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
            else
              v16();
          }
        }
      }
    }
  }
LABEL_2:
  std::vector<Microsoft::WRL::WeakRef>::erase((char *)this + 56, &v21, v4, *((_QWORD *)this + 8));
  v6 = 0;
  v7 = (char **)((char *)this + 80);
  do
  {
    v8 = v7[1];
    v9 = *v7;
    if ( *v7 != v8 )
    {
      while ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v5, v9) )
      {
        v9 += 8;
        if ( v9 == v8 )
          goto LABEL_4;
      }
      if ( v9 != v8 )
      {
        for ( j = v9 + 8; j != v8; j += 8 )
        {
          if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v5, j) )
          {
            v17 = (__int64 *)v9;
            v9 += 8;
            v18 = 0LL;
            if ( &v21 != j )
            {
              v18 = *(_QWORD *)j;
              *(_QWORD *)j = 0LL;
            }
            v5 = *v17;
            *v17 = v18;
            if ( v5 )
            {
              v19 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
              if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
              else
                v19();
            }
          }
        }
      }
    }
LABEL_4:
    v10 = *v7;
    v11 = v7[1];
    if ( v9 == *v7 )
    {
      for ( ; v10 != v11; v10 += 8 )
        std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(v5, v10);
      v7[1] = *v7;
    }
    else if ( v9 != v11 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v5, v9, v7[1]);
      v7[1] = v9;
    }
    ++v6;
    v7 += 3;
  }
  while ( (unsigned __int64)v6 < 4 );
  if ( v20 )
    LeaveCriticalSection(v20);
}
