/*
 * XREFs of ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x14021DCD4
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x14021EB48 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140003118 (SmKmStoreReference.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140221B70 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmDeviceError(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // r11d
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rax
  bool v10; // zf
  int v11; // ecx

  v3 = *(_DWORD **)(a1 + 1784);
  v4 = a3;
  if ( v3
    && a3 + 1073741549 > 1
    && a3 != -1073741670
    && a3 != -1073741691
    && a3 != -1073741801
    && a3 != -1073741058
    && ((*(_DWORD *)(a1 + 776) & 0x2000) == 0 || a3 != -2147483626) )
  {
    if ( a2 )
    {
      v9 = (unsigned __int64)KiQueryUnbiasedInterruptTime() >> 23;
      v10 = *v3 == v3[4];
      v3[4] = *v3;
      if ( !v10 )
        v3[3] = 0;
      v11 = v3[3];
      if ( !v11 )
      {
        v3[3] = v9;
        return;
      }
      if ( (unsigned int)(v9 - v11) <= 7 )
        return;
      v8 = 4;
    }
    else
    {
      if ( (++v3[1] & 0xF) != 0 )
        return;
      v7 = (*v3 - v3[2]) & 0xFFFFFFE0;
      v3[2] = *v3;
      if ( v7 > 0x200 )
        return;
      v8 = 3;
    }
    if ( ((unsigned int)(v8 - 3) > 1
       || (int)SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(&SmGlobals, *(_QWORD *)(a1 + 800), v8 != 3, v4) < 0)
      && !a2 )
    {
      --v3[1];
    }
  }
}
