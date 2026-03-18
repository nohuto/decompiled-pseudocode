/*
 * XREFs of ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140112048
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140111678 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140206A98 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401120C8 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v9 = UnbiasedInterruptTime;
  if ( (_DWORD)v5 == -1 )
  {
    *(_QWORD *)(a1 + 24 * v8) = -1LL;
    *(_QWORD *)(a1 + 24 * v8 + 8) = -1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24 * v8 + 16) = UnbiasedInterruptTime;
    *(_QWORD *)(a1 + 24 * v8) = 10000 * v6;
    *(_QWORD *)(a1 + 24 * v8 + 8) = UnbiasedInterruptTime + 10000 * v5;
  }
  result = *(unsigned int *)(a1 + 200);
  if ( (result & 1) == 0 )
    return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(a1, v9);
  return result;
}
