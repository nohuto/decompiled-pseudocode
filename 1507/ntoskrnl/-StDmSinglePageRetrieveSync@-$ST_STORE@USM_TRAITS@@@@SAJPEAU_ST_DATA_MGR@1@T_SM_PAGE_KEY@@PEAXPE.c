/*
 * XREFs of ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@T_SM_PAGE_KEY@@PEAXPEAU_ST_PAGE_ENTRY@1@@Z @ 0x140255A54
 * Callers:
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402530B8 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140256020 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 * Callees:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140140D78 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14025354C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1402537EC (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmWaitForSyncIo @ 0x140259ECC (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-38h]
  _QWORD v14[3]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v15[4]; // [rsp+58h] [rbp-18h] BYREF

  v14[1] = a3;
  v14[2] = a2;
  v14[0] = 0LL;
  if ( a4 )
    v7 = a4 | 1;
  else
    v7 = 0LL;
  result = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, a1 + 368, (__int64)v14, v7, (__int64)v15);
  if ( (int)result >= 1 )
  {
    v9 = (__int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, v15, 1u, a3);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 28) |= 4u;
      v11 = *(_DWORD *)(v9 + 28) | 8;
      *(_DWORD *)(v9 + 28) = v11;
      *(_DWORD *)(v9 + 28) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(16 * (a4 != 0))) & 0x10;
      v13 = &v12;
      v12 = 0LL;
      *(_QWORD *)v9 = *(_DWORD *)v9 & 7 | 8LL;
      *v13 = v9 | *(_DWORD *)v13 & 7;
      v13 = (__int64 *)v9;
      if ( (int)ST_STORE<SM_TRAITS>::StDeviceIoIssue(a1, &v12) >= 0 )
        SmWaitForSyncIo(*(_QWORD *)(a1 + 152));
      result = ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v10);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
