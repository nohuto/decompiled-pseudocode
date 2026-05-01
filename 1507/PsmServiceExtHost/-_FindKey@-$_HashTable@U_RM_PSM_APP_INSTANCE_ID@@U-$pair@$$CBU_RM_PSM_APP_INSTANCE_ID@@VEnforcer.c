/*
 * XREFs of ?_FindKey@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@AEBU_RM_PSM_APP_INSTANCE_ID@@_KPEAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000A92C
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000AAB0 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnfo.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z @ 0x18000A12C (--R-$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z.c)
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_FindKey(
        __int64 a1,
        __int64 *a2,
        const wchar_t *a3,
        unsigned __int64 a4,
        __int64 **a5)
{
  char v5; // di
  __int64 *i; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // rsi
  char result; // al
  void *v16; // rax

  v5 = 0;
  i = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 8LL << *(_BYTE *)(a1 + 32);
  v12 = a4 & (v11 - 1);
  if ( v10 )
  {
    v13 = 2 * v12;
    if ( *(_QWORD *)(v10 + 16 * v12) )
    {
      if ( a2 && a2 != (__int64 *)a1 && ((v11 - 1) & a2[2]) == v12 )
      {
        for ( i = a2; i != *(__int64 **)(v10 + 16 * v12); i = (__int64 *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(__int64 **)(v10 + 16 * v12);
      }
      v14 = **(__int64 ***)(v10 + 16 * v12 + 8);
      while ( i != v14 )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          if ( utl::equal_to<_RM_PSM_APP_INSTANCE_ID>::operator()(v13, a3, (const wchar_t *)i + 12) )
            goto LABEL_16;
        }
        i = (__int64 *)*i;
      }
    }
  }
  else
  {
    if ( v11 > 0xFFFFFFFFFFFFFFFLL )
      v16 = 0LL;
    else
      v16 = operator new(16 * v11, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)(a1 + 16) = v16;
    if ( v16 )
      utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets(a1);
    else
LABEL_16:
      v5 = 1;
  }
  result = v5;
  *a5 = i;
  return result;
}
