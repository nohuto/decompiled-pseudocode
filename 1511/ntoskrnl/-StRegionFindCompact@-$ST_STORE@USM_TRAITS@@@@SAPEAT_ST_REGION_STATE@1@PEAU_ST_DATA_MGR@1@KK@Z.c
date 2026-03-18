/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@KK@Z @ 0x140107B00
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14010C7AC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned __int16 *v2; // r12
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned __int16 *v6; // r9
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned __int64 v9; // rsi
  unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // r9
  unsigned int v13; // r8d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  _WORD v17[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 *v18; // [rsp+50h] [rbp+8h]

  v2 = v17;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 152) + 5016LL) )
    v4 = 0;
  else
    v4 = (unsigned int)(*(_DWORD *)(a1 + 160) + 1) >> 1;
  v5 = *(unsigned int *)(a1 + 208);
  v6 = *(unsigned __int16 **)(a1 + 472);
  v7 = 0LL;
  v8 = 0;
  v18 = v6;
  v9 = (unsigned __int64)&v6[v5];
  v17[0] ^= (v17[0] ^ (*(_WORD *)(a1 + 168) - *(_WORD *)(a1 + 172) + 1)) & 0x1FFF;
  v10 = v6;
  if ( !(_DWORD)v5 )
    return 0LL;
  while ( 1 )
  {
    if ( (unsigned __int64)v10 >= v9 )
    {
      v10 = v6;
      v7 = 0LL;
    }
    if ( ((*(_DWORD *)(a1 + 128) >> 18) & 1) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 152);
      v12 = (_WORD *)(*(_QWORD *)(v11 + 4680) + 8 * v7);
      if ( (*v12 & 0x7FFF) != 0 || *(_WORD **)(v11 + 5024) == v12 )
        goto LABEL_15;
      v6 = v18;
    }
    v13 = (unsigned __int8)*(_DWORD *)(a1 + 128) ? 0 : *v10 >> 13;
    v14 = *v10;
    if ( (*v10 & 0x1FFFu) < v4 && (v14 & 0x1FFF) != 0 && v13 == a2 )
      break;
    v15 = v14 & 0x1FFF;
    if ( v15 < (unsigned __int16)(*v2 & 0x1FFF)
      && (v13 == a2 || !v15 && v10 != &v6[*(unsigned int *)(a1 + 16LL * v13 + 648)]) )
    {
      v2 = v10;
    }
LABEL_15:
    ++v10;
    ++v8;
    v7 = (unsigned int)(v7 + 1);
    if ( v8 >= (unsigned int)v5 )
      goto LABEL_23;
    v6 = v18;
  }
  v2 = v10;
LABEL_23:
  if ( v2 != v17 )
    return v2;
  return 0LL;
}
