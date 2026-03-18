/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14014481C
 * Callers:
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1401419B8 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1401446A0 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140144790 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r9
  unsigned __int64 *v6; // r11
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx

  if ( !a2 )
    a2 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v3 = -1LL;
  v4 = (unsigned __int64 *)(a1 + 144);
  v5 = -1LL;
  if ( a1 < a1 + 144 )
  {
    v6 = (unsigned __int64 *)(a1 + 8);
    do
    {
      if ( *v6 != -1LL )
      {
        v8 = a2 - *(_QWORD *)(a1 + 160);
        if ( v6[1] >= v8 )
          v8 = v6[1];
        v9 = *(v6 - 1) + v8;
        if ( v9 < v3 )
          v3 = v9;
        if ( *v6 < v5 )
          v5 = *v6;
      }
      v6 += 3;
    }
    while ( v6 - 1 < v4 );
  }
  if ( v3 < a2 )
    v3 = a2;
  if ( v5 < a2 )
    v5 = a2;
  *v4 = v5;
  if ( v5 == -1LL )
  {
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  else
  {
    if ( v5 < v3 )
      *(_QWORD *)(a1 + 152) = v5 - a2;
    else
      *(_QWORD *)(a1 + 152) = v3 - a2;
    if ( !*(_QWORD *)(a1 + 152) )
      *(_QWORD *)(a1 + 152) = 1LL;
  }
  result = *(_QWORD *)(a1 - 4200);
  *(_QWORD *)(result + 5040) = -*(_QWORD *)(a1 + 152);
  return result;
}
