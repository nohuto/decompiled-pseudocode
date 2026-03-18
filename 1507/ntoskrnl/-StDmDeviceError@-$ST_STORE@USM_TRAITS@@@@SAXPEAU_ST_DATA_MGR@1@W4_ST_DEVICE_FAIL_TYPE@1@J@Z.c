/*
 * XREFs of ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x140253A44
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x140254F3C (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 * Callees:
 *     ?SmStoreActionNotify@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_ACTION_TYPE@@PEAX@Z @ 0x14014A2B8 (-SmStoreActionNotify@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_S.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmDeviceError(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  bool v9; // zf

  v3 = *(_DWORD **)(a1 + 1080);
  if ( v3
    && (unsigned int)(a3 + 1073741549) > 1
    && a3 != -1073741670
    && a3 != -1073741691
    && a3 != -1073741801
    && a3 != -1073741058
    && ((*(_DWORD *)(a1 + 128) & 0x2000) == 0 || a3 != -2147483626) )
  {
    if ( a2 )
    {
      v8 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) >> 23;
      v9 = *v3 == v3[4];
      v3[4] = *v3;
      if ( !v9 )
        v3[3] = 0;
      v6 = (unsigned int)v3[3];
      if ( !(_DWORD)v6 )
      {
        v3[3] = v8;
        return;
      }
      if ( (unsigned int)(v8 - v6) <= 7 )
        return;
      v7 = 4;
    }
    else
    {
      if ( (++v3[1] & 0xF) != 0 )
        return;
      v6 = (*v3 - v3[2]) & 0xFFFFFFE0;
      v3[2] = *v3;
      if ( (unsigned int)v6 > 0x200 )
        return;
      v7 = 3;
    }
    if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmStoreActionNotify(v6, *(_QWORD *)(a1 + 152), v7) < 0 && !a2 )
      --v3[1];
  }
}
