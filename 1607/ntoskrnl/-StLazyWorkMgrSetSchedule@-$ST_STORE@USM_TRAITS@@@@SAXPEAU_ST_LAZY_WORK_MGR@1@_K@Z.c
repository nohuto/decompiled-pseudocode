/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401159F4
 * Callers:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140115888 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140115974 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
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
  v5 = (unsigned __int64 *)(v3 + 120);
  v6 = -1LL;
  if ( v3 < v3 + 120 )
  {
    v7 = (unsigned __int64 *)(v3 + 8);
    do
    {
      if ( *v7 != -1LL )
      {
        v9 = UnbiasedInterruptTime - *(_QWORD *)(v3 + 136);
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
    *(_QWORD *)(v3 + 128) = 0LL;
  }
  else
  {
    if ( v6 < v4 )
      *(_QWORD *)(v3 + 128) = v6 - UnbiasedInterruptTime;
    else
      *(_QWORD *)(v3 + 128) = v4 - UnbiasedInterruptTime;
    if ( !*(_QWORD *)(v3 + 128) )
      *(_QWORD *)(v3 + 128) = 1LL;
  }
  result = *(_QWORD *)(v3 - 5608);
  *(_QWORD *)(result + 6440) = -*(_QWORD *)(v3 + 128);
  return result;
}
