/*
 * XREFs of ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001ACD0
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800360C0 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 * Callees:
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
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
  WCHAR *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rbx
  __int64 *v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *result; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]
  WCHAR v23; // [rsp+68h] [rbp+10h]

  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_14;
  v9 = (WCHAR *)(a3 + 232);
  v10 = (WCHAR *)a3;
  v11 = 314159LL;
  if ( a3 < a3 + 232 )
  {
    do
    {
      v23 = RtlUpcaseUnicodeChar(*v10++);
      v11 = HIBYTE(v23) + 37 * ((unsigned __int8)v23 + 37 * v11);
    }
    while ( v10 < v9 );
  }
  v12 = v9;
  v13 = 11LL;
  do
  {
    v14 = *(unsigned __int8 *)v12;
    v12 += 4;
    v15 = *((unsigned __int8 *)v12 - 2)
        + 37
        * (*((unsigned __int8 *)v12 - 3)
         + 37
         * (*((unsigned __int8 *)v12 - 4)
          + 37
          * (*((unsigned __int8 *)v12 - 5)
           + 37 * (*((unsigned __int8 *)v12 - 6) + 37 * (*((unsigned __int8 *)v12 - 7) + 37 * (v14 + 37 * v11))))));
    v16 = *((unsigned __int8 *)v12 - 1);
    v11 = v16 + 37 * v15;
    --v13;
  }
  while ( v13 );
  v22 = v16 + 37 * v15;
  LODWORD(v22) = 32769 * (((unsigned int)(9 * v11) >> 11) ^ (9 * v11));
  v17 = *(_QWORD *)(a1 + 16) + 16 * (v22 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
  v18 = *(const wchar_t **)v17;
  if ( *(_QWORD *)v17 && (v19 = **(__int64 ***)(v17 + 8), v18 != (const wchar_t *)v19) )
  {
    while ( 1 )
    {
      v20 = *((_QWORD *)v18 + 2);
      if ( v20 >= v22 )
      {
        if ( v20 > v22 )
          goto LABEL_14;
        if ( !_wcsicmp(a3, v18 + 12) && !memcmp_0(v9, v18 + 244, 0x58uLL) )
          break;
      }
      v18 = *(const wchar_t **)v18;
      if ( v18 == (const wchar_t *)v19 )
        goto LABEL_14;
    }
    *a4 = v18;
    *a5 = *(_QWORD *)v18;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_14:
    *a4 = (const wchar_t *)a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
