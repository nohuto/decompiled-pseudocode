/*
 * XREFs of ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140256020
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x140255A54 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPE.c)
 *     StEtaIoTimeout @ 0x140256DD0 (StEtaIoTimeout.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafPageIn(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3 & 0xFFFFFFFC;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  while ( 1 )
  {
    result = ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(v6, v3, a2, 0LL);
    if ( (int)result >= 0 )
      break;
    if ( (*(_DWORD *)(v6 + 128) & 0x2000) == 0 || (_DWORD)result != -2147483626 || v5 >= 0x1C9C380 )
      return result;
    v5 += 500000LL;
    StEtaIoTimeout(*(_QWORD *)(v6 + 440), v8, v9, v5);
    Interval.QuadPart = 500000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
