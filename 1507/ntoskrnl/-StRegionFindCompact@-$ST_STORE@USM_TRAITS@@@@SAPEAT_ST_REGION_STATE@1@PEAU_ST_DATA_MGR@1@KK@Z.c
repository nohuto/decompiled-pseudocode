/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@KK@Z @ 0x1401436C0
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140141F44 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned __int16 *v2; // r12
  int v3; // r9d
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned __int16 *v6; // r13
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  _WORD *v11; // r9
  unsigned int v12; // r8d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  _WORD v16[8]; // [rsp+0h] [rbp-48h] BYREF

  v2 = v16;
  v3 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 152) + 5016LL) )
    v4 = 0;
  else
    v4 = (unsigned int)(*(_DWORD *)(a1 + 160) + 1) >> 1;
  v5 = *(unsigned int *)(a1 + 208);
  v6 = *(unsigned __int16 **)(a1 + 472);
  v7 = 0LL;
  v8 = 0;
  v9 = v6;
  v16[0] ^= (v16[0] ^ (*(_WORD *)(a1 + 168) - *(_WORD *)(a1 + 172) + 1)) & 0x1FFF;
  if ( !(_DWORD)v5 )
    return 0LL;
  while ( 1 )
  {
    if ( v9 >= &v6[v5] )
    {
      v9 = v6;
      v7 = 0LL;
    }
    if ( ((*(_DWORD *)(a1 + 128) >> 18) & 1) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 152);
      v11 = (_WORD *)(*(_QWORD *)(v10 + 4680) + 8 * v7);
      if ( (*v11 & 0x7FFF) != 0 || *(_WORD **)(v10 + 5024) == v11 )
        goto LABEL_15;
      v3 = a2;
    }
    v12 = (unsigned __int8)*(_DWORD *)(a1 + 128) ? 0 : *v9 >> 13;
    v13 = *v9;
    if ( (*v9 & 0x1FFFu) < v4 && (v13 & 0x1FFF) != 0 && v12 == v3 )
      break;
    v14 = v13 & 0x1FFF;
    if ( v14 < (unsigned __int16)(*v2 & 0x1FFF)
      && (v12 == v3 || !v14 && v9 != &v6[*(unsigned int *)(a1 + 16LL * v12 + 648)]) )
    {
      v2 = v9;
    }
LABEL_15:
    ++v9;
    ++v8;
    v7 = (unsigned int)(v7 + 1);
    if ( v8 >= (unsigned int)v5 )
      goto LABEL_23;
    v3 = a2;
  }
  v2 = v9;
LABEL_23:
  if ( v2 != v16 )
    return v2;
  return 0LL;
}
