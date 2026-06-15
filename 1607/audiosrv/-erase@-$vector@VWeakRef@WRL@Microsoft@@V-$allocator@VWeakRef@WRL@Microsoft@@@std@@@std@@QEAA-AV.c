/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180028104
 * Callers:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180021AA0 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x18002822C (--$destroy@VWeakRef@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180051154 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

char **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(char **a1, char **a2, char *a3, char *a4)
{
  char *v4; // rbp
  char *v5; // rdi
  char *v6; // rbx
  char **v8; // rsi
  char *v9; // r14
  char *v11; // rbp
  _QWORD *v12; // rax
  void (*v13)(void); // rax
  char v14; // [rsp+50h] [rbp+8h] BYREF
  char *v15; // [rsp+60h] [rbp+18h]

  v15 = a3;
  v4 = *a1;
  v5 = a4;
  v6 = a3;
  v8 = a1;
  if ( a3 == *a1 && (v9 = a1[1], a4 == v9) )
  {
    if ( v4 != v9 )
    {
      do
      {
        std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(a1, v4);
        v4 += 8;
      }
      while ( v4 != v9 );
      v6 = v15;
    }
    v8[1] = *v8;
  }
  else if ( a3 != a4 )
  {
    v11 = a1[1];
    if ( a4 != v11 )
    {
      do
      {
        v12 = 0LL;
        if ( &v14 != v5 )
        {
          v12 = *(_QWORD **)v5;
          *(_QWORD *)v5 = 0LL;
        }
        a1 = *(char ***)v6;
        *(_QWORD *)v6 = v12;
        if ( a1 )
        {
          v13 = (void (*)(void))*((_QWORD *)*a1 + 2);
          if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)a1);
          else
            v13();
        }
        v6 += 8;
        v5 += 8;
      }
      while ( v5 != v11 );
    }
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, v6, v8[1]);
    v8[1] = v6;
    v6 = v15;
  }
  *a2 = v6;
  return a2;
}
