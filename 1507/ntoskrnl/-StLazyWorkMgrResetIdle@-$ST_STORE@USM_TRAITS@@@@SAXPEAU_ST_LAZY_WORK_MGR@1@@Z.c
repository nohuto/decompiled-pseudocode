/*
 * XREFs of ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1401419B8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( *(_QWORD *)(a1 + 144) != -1LL )
  {
    result = MEMORY[0xFFFFF780000003B0];
    if ( *(_QWORD *)(a1 + 144) <= MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] )
    {
      return ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(
               a1,
               MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
    }
    else if ( v1 )
    {
      return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule();
    }
  }
  return result;
}
