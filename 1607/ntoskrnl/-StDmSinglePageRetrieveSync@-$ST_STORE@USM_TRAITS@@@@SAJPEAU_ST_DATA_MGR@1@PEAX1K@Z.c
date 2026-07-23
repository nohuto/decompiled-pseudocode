/*
 * XREFs of ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14021F160
 * Callers:
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14021F6F8 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 * Callees:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011D340 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14021D850 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14021DAA0 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmWaitForSyncIo @ 0x140222250 (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  int v6; // esi
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-38h]
  _QWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v14; // [rsp+50h] [rbp-20h]
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v13[1] = a3;
  v13[0] = 0LL;
  v14 = 0LL;
  v6 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v14 = a2;
  else
    LODWORD(v14) = *a2;
  result = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, a1 + 912, (__int64)v13, a4, (__int64)&v15);
  if ( (int)result >= 1 )
  {
    v9 = (__int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, &v15, v8, a3);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 28) |= 0xCu;
      *(_DWORD *)(v9 + 28) ^= (*(_DWORD *)(v9 + 28) ^ (16 * (v6 != 0))) & 0x10;
      v12 = &v11;
      v11 = 0LL;
      *(_QWORD *)v9 = *(_DWORD *)v9 & 7 | 8LL;
      *v12 = v9 | *(_DWORD *)v12 & 7;
      v12 = (__int64 *)v9;
      if ( (int)ST_STORE<SM_TRAITS>::StDeviceIoIssue(a1, &v11) >= 0 )
        SmWaitForSyncIo(*(_QWORD *)(a1 + 800));
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
