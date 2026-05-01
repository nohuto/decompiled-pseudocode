/*
 * XREFs of ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000A640
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z @ 0x18000A12C (--R-$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NAEBU_RM_PSM_APP_INSTANCE_ID@@0@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t **a4,
        _QWORD *a5,
        _QWORD *a6)
{
  WCHAR *v9; // rsi
  WCHAR *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  const wchar_t *v17; // rbx
  __int64 *v18; // rsi
  unsigned __int64 v19; // rax
  _QWORD *result; // rax
  WCHAR v21; // [rsp+48h] [rbp+10h]

  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_13;
  v9 = (WCHAR *)(a3 + 232);
  v10 = (WCHAR *)a3;
  v11 = 314159LL;
  if ( a3 < a3 + 232 )
  {
    do
    {
      v21 = RtlUpcaseUnicodeChar(*v10++);
      v11 = HIBYTE(v21) + 37 * ((unsigned __int8)v21 + 37 * v11);
    }
    while ( v10 < v9 );
  }
  v12 = 11LL;
  do
  {
    v13 = *(unsigned __int8 *)v9;
    v9 += 4;
    v11 = *((unsigned __int8 *)v9 - 1)
        + 37
        * (*((unsigned __int8 *)v9 - 2)
         + 37
         * (*((unsigned __int8 *)v9 - 3)
          + 37
          * (*((unsigned __int8 *)v9 - 4)
           + 37
           * (*((unsigned __int8 *)v9 - 5)
            + 37 * (*((unsigned __int8 *)v9 - 6) + 37 * (*((unsigned __int8 *)v9 - 7) + 37 * (v13 + 37 * v11)))))));
    --v12;
  }
  while ( v12 );
  v14 = 32769 * ((9 * v11) ^ ((unsigned __int64)(9 * v11) >> 11));
  v15 = *(unsigned __int8 *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 16) + 16 * (v14 & ((8LL << v15) - 1));
  v17 = *(const wchar_t **)v16;
  if ( *(_QWORD *)v16 && (v18 = **(__int64 ***)(v16 + 8), v17 != (const wchar_t *)v18) )
  {
    while ( 1 )
    {
      v19 = *((_QWORD *)v17 + 2);
      if ( v19 >= v14 )
      {
        if ( v19 > v14 )
          goto LABEL_13;
        if ( utl::equal_to<_RM_PSM_APP_INSTANCE_ID>::operator()(v15, a3, v17 + 12) )
          break;
      }
      v17 = *(const wchar_t **)v17;
      if ( v17 == (const wchar_t *)v18 )
        goto LABEL_13;
    }
    *a4 = v17;
    *a5 = *(_QWORD *)v17;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_13:
    *a4 = (const wchar_t *)a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
