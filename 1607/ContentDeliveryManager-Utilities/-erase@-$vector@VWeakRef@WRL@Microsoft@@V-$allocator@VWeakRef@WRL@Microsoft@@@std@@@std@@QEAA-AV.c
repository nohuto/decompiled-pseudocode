/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800370D8
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800358C0 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, char **a2, char *a3, char *a4)
{
  __int64 *v4; // rdi
  char *v5; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rcx
  char *v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // rcx
  char **result; // rax
  char v18; // [rsp+40h] [rbp+8h] BYREF
  char *v19; // [rsp+50h] [rbp+18h]

  v19 = a3;
  v4 = *(__int64 **)a1;
  v5 = a4;
  if ( a3 == *(char **)a1 && (v8 = *(__int64 **)(a1 + 8), a4 == (char *)v8) )
  {
    if ( v4 != v8 )
    {
      do
      {
        v9 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++v4;
      }
      while ( v4 != v8 );
      a3 = v19;
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
        if ( &v18 != v5 )
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
      a3 = v19;
    }
    v14 = *(__int64 **)(a1 + 8);
    v15 = v11;
    if ( v11 != v14 )
    {
      do
      {
        v16 = *v15;
        if ( *v15 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        ++v15;
      }
      while ( v15 != v14 );
      a3 = v19;
    }
    *(_QWORD *)(a1 + 8) = v11;
  }
  result = a2;
  *a2 = a3;
  return result;
}
