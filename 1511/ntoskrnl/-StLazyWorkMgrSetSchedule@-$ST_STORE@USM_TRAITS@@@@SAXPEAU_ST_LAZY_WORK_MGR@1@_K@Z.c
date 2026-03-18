/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401120C8
 * Callers:
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14010C2BC (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140111F54 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140112048 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 UnbiasedInterruptTime; // r8
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r10
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  UnbiasedInterruptTime = a2;
  v3 = a1;
  if ( !a2 )
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v4 = -1LL;
  v5 = (unsigned __int64 *)(v3 + 144);
  v6 = -1LL;
  if ( v3 < v3 + 144 )
  {
    v7 = (unsigned __int64 *)(v3 + 8);
    do
    {
      if ( *v7 != -1LL )
      {
        v9 = UnbiasedInterruptTime - *(_QWORD *)(v3 + 160);
        if ( v7[1] >= v9 )
          v9 = v7[1];
        v10 = *(v7 - 1) + v9;
        if ( v10 < v4 )
          v4 = v10;
        if ( *v7 < v6 )
          v6 = *v7;
      }
      v7 += 3;
    }
    while ( v7 - 1 < v5 );
  }
  if ( v4 < UnbiasedInterruptTime )
    v4 = UnbiasedInterruptTime;
  if ( v6 < UnbiasedInterruptTime )
    v6 = UnbiasedInterruptTime;
  *v5 = v6;
  if ( v6 == -1LL )
  {
    *(_QWORD *)(v3 + 152) = 0LL;
  }
  else
  {
    if ( v6 < v4 )
      *(_QWORD *)(v3 + 152) = v6 - UnbiasedInterruptTime;
    else
      *(_QWORD *)(v3 + 152) = v4 - UnbiasedInterruptTime;
    if ( !*(_QWORD *)(v3 + 152) )
      *(_QWORD *)(v3 + 152) = 1LL;
  }
  result = *(_QWORD *)(v3 - 4200);
  *(_QWORD *)(result + 5040) = -*(_QWORD *)(v3 + 152);
  return result;
}
