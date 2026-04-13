/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18003C684
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x18003B040 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, char **a2, char *a3, char *a4)
{
  __int64 *v4; // rsi
  char *v5; // rdi
  __int64 *v9; // rbp
  char *v10; // rbp
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbp
  __int64 *i; // rdi
  __int64 v16; // rcx
  char **result; // rax
  __int64 v18; // rcx
  char v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 **)a1;
  v5 = a4;
  if ( a3 == *(char **)a1 && (v9 = *(__int64 **)(a1 + 8), a4 == (char *)v9) )
  {
    while ( v4 != v9 )
    {
      v18 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      ++v4;
    }
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  }
  else if ( a3 != a4 )
  {
    v10 = *(char **)(a1 + 8);
    v11 = (__int64 *)a3;
    if ( a4 != v10 )
    {
      do
      {
        v12 = 0LL;
        if ( &v19 != v5 )
        {
          v12 = *(_QWORD *)v5;
          *(_QWORD *)v5 = 0LL;
        }
        v13 = *v11;
        *v11 = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        ++v11;
        v5 += 8;
      }
      while ( v5 != v10 );
    }
    v14 = *(__int64 **)(a1 + 8);
    for ( i = v11; i != v14; ++i )
    {
      v16 = *i;
      if ( *i )
      {
        *i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    *(_QWORD *)(a1 + 8) = v11;
  }
  result = a2;
  *a2 = a3;
  return result;
}
