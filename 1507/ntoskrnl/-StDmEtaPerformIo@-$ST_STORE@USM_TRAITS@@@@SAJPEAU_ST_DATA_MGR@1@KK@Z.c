/*
 * XREFs of ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402542F0
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140254470 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14025354C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1402537EC (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmWaitForSyncIo @ 0x140259ECC (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtaPerformIo(__int64 a1, int a2, __int16 a3)
{
  int v4; // edx
  __int16 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-40h]
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2 << *(_DWORD *)(a1 + 164);
  v13[0] = 0LL;
  v5 = a3 - *(_WORD *)(a1 + 176);
  v13[1] = 0LL;
  LODWORD(v13[0]) = v4;
  WORD2(v13[0]) = v5;
  v6 = (__int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, v13, 1u, 57005LL);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 28) |= 0xCu;
    v11 = 0LL;
    v12 = &v11;
    *(_QWORD *)v6 = *(_DWORD *)v6 & 7 | 8LL;
    *v12 = v6 | *(_DWORD *)v12 & 7;
    v12 = (__int64 *)v6;
    if ( (int)ST_STORE<SM_TRAITS>::StDeviceIoIssue(a1, &v11) >= 0 )
      SmWaitForSyncIo(*(_QWORD *)(a1 + 152));
    if ( (*(_DWORD *)(v8 + 28) & 1) == 0 )
    {
      *(_DWORD *)(v8 + 28) |= 1u;
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
        *(_DWORD *)(v9 + 4) = -1073741691;
      else
        *(_DWORD *)(v8 + 8) = -1073741691;
    }
    ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
