/*
 * XREFs of ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180015CE0
 * Callers:
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000A60C (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000ACD8 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18001613C (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  WCHAR *v9; // rsi
  WCHAR *v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD *result; // rax
  WCHAR v20; // [rsp+48h] [rbp+10h]

  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_13;
  v9 = (WCHAR *)(a3 + 464);
  v10 = (WCHAR *)a3;
  v11 = 314159LL;
  if ( a3 < a3 + 464 )
  {
    do
    {
      v20 = RtlUpcaseUnicodeChar(*v10++);
      v11 = HIBYTE(v20) + 37 * ((unsigned __int8)v20 + 37 * v11);
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
  v14 = *(unsigned __int8 *)(a1 + 32);
  v15 = *(_QWORD *)(a1 + 16) + 16 * (v11 & ((8LL << v14) - 1));
  v16 = *(_QWORD **)v15;
  if ( *(_QWORD *)v15 && (v17 = **(_QWORD ***)(v15 + 8), v16 != v17) )
  {
    while ( 1 )
    {
      v18 = v16[2];
      if ( v18 >= v11 )
      {
        if ( v18 > v11 )
          goto LABEL_13;
        if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v14, a3, v16 + 3) )
          break;
      }
      v16 = (_QWORD *)*v16;
      if ( v16 == v17 )
        goto LABEL_13;
    }
    *a4 = v16;
    *a5 = *v16;
    result = a6;
    *a6 = 1LL;
  }
  else
  {
LABEL_13:
    *a4 = a1;
    *a5 = a1;
    result = a6;
    *a6 = 0LL;
  }
  return result;
}
