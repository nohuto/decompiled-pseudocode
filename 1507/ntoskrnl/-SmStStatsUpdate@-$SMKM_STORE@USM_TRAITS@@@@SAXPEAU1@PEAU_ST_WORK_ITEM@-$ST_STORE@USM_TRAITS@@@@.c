/*
 * XREFs of ?SmStStatsUpdate@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1402596F4
 * Callers:
 *     ?SmProcessReadCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140140074 (-SmProcessReadCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM.c)
 * Callees:
 *     StIoCountsMovePeriod @ 0x140256E4C (StIoCountsMovePeriod.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStStatsUpdate(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v4; // rcx
  __int64 *v5; // rcx
  int v6; // r11d
  __int64 v7; // rax

  if ( a3 < 0 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x2000000) != 0 )
      v3 = 2;
    else
      v3 = (a3 != -1073741643) + 3;
  }
  else
  {
    v3 = 1;
  }
  v4 = *(_QWORD *)(a1 + 1160);
  if ( v4 )
  {
    v5 = (__int64 *)(v4 + 24);
    v6 = (unsigned __int8)*(_DWORD *)(a2 + 8);
    v7 = *v5;
    if ( MEMORY[0xFFFFF78000000008] >= (unsigned __int64)v5[2] )
      v7 = StIoCountsMovePeriod((__int64)v5, MEMORY[0xFFFFF78000000008]);
    *(_DWORD *)(v7 + 4LL * v3) += v6;
  }
}
