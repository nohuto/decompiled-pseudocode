/*
 * XREFs of ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180016210
 * Callers:
 *     ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x180015CC0 (-RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x180016090 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x180017F30 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::hash<_RM_PSM_HOST_INFO>::operator()(__int64 a1, unsigned __int64 a2)
{
  WCHAR *v2; // rsi
  WCHAR *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  WCHAR v11; // [rsp+30h] [rbp+8h]

  v2 = (WCHAR *)(a2 + 464);
  v3 = (WCHAR *)a2;
  v4 = 314159LL;
  if ( a2 < a2 + 464 )
  {
    do
    {
      v11 = RtlUpcaseUnicodeChar(*v3++);
      v4 = HIBYTE(v11) + 37 * ((unsigned __int8)v11 + 37 * v4);
    }
    while ( v3 < v2 );
  }
  v5 = 11LL;
  do
  {
    v6 = *(unsigned __int8 *)v2;
    v2 += 4;
    v7 = *((unsigned __int8 *)v2 - 3)
       + 37
       * (*((unsigned __int8 *)v2 - 4)
        + 37
        * (*((unsigned __int8 *)v2 - 5)
         + 37 * (*((unsigned __int8 *)v2 - 6) + 37 * (*((unsigned __int8 *)v2 - 7) + 37 * (v6 + 37 * v4)))));
    v8 = *((unsigned __int8 *)v2 - 2);
    v9 = *((unsigned __int8 *)v2 - 1);
    v4 = v9 + 37 * (v8 + 37 * v7);
    --v5;
  }
  while ( v5 );
  return v9 + 37 * (v8 + 37 * v7);
}
