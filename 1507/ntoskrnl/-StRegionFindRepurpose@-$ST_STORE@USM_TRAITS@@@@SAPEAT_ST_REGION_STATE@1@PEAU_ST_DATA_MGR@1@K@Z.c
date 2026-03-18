/*
 * XREFs of ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14025618C
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140141F44 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140255918 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindRepurpose(__int64 a1, int a2)
{
  __int16 *v2; // r9
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int16 v9; // ax
  char *v10; // r8
  unsigned int v11; // ebp
  __int64 v12; // r14
  int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // r14
  unsigned int v18; // r15d
  int v19; // ecx
  _QWORD *v20; // rcx
  __int64 i; // rax
  unsigned int v22; // ecx
  _WORD *v23; // rdx
  unsigned __int16 v24; // cx
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // al
  __int16 v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+8h] [rbp-50h]
  unsigned int v30; // [rsp+60h] [rbp+8h]
  char v31; // [rsp+68h] [rbp+10h] BYREF
  char *v32; // [rsp+70h] [rbp+18h]
  __int64 v33; // [rsp+78h] [rbp+20h]

  v2 = &v28;
  v31 = -1;
  v4 = *(_DWORD *)(a1 + 208);
  v5 = a2 - 1;
  v30 = v4;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 472);
  v8 = *(_QWORD *)(a1 + 488);
  v9 = (v28 ^ *(_WORD *)(a1 + 168)) & 0x1FFF ^ v28;
  v33 = v7;
  v10 = &v31;
  v29 = v8;
  v32 = &v31;
  v28 = v9;
  while ( 2 )
  {
    if ( v6 >= v4 )
      goto LABEL_37;
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    {
      ++v5;
      goto LABEL_26;
    }
    v11 = *(_DWORD *)(a1 + 192);
    v12 = *(_QWORD *)(a1 + 200);
    v13 = v5 + 1 < v11 ? v5 + 1 : 0;
    v14 = v11 - 1;
    if ( (v12 & 4) != 0 )
    {
      v15 = 1LL;
      v16 = 32;
    }
    else
    {
      v15 = 0LL;
      v16 = 0;
    }
    v17 = v12 - 4 * v15;
    while ( 1 )
    {
      v18 = v16 + v14;
      if ( v14 - v13 == -1 )
        goto LABEL_10;
      v20 = (_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned int)(v16 + v13) >> 6));
      for ( i = ((1LL << ((v16 + v13) & 0x3F)) - 1) | ~*v20; i == -1; i = ~*v20 )
      {
        if ( (unsigned __int64)++v20 > v17 + 8 * ((unsigned __int64)v18 >> 6) )
          goto LABEL_10;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v19 = i + ((unsigned int)(((__int64)v20 - v17) >> 3) << 6);
      if ( v19 > v18 )
      {
LABEL_10:
        v19 = -1;
        goto LABEL_17;
      }
      if ( v19 != -1 )
        break;
LABEL_17:
      if ( !v13 )
        goto LABEL_23;
      v22 = v5 + 2;
      v13 = 0;
      if ( v5 + 2 > v11 )
        v22 = *(_DWORD *)(a1 + 192);
      v14 = v22 - 1;
    }
    v19 -= v16;
LABEL_23:
    if ( v19 <= (int)v5 )
      v19 = *(_DWORD *)(a1 + 140);
    v10 = v32;
    v5 = v19;
    v7 = v33;
    v8 = v29;
LABEL_26:
    if ( v5 == *(_DWORD *)(a1 + 140) )
    {
      v5 = -1;
      --v6;
      goto LABEL_35;
    }
    v23 = (_WORD *)(v7 + 2LL * v5);
    if ( (*v23 & 0xC000) != 0 )
    {
LABEL_35:
      v4 = v30;
      ++v6;
      v7 = v33;
      continue;
    }
    break;
  }
  v24 = *v23 & 0x1FFF;
  if ( v24 )
  {
    v25 = *v10;
    v26 = *(_BYTE *)(v5 + v8);
    if ( v26 > v25 || v26 >= v25 && v24 > (unsigned __int16)(*v2 & 0x1FFF) )
    {
      v10 = v32;
    }
    else
    {
      v10 = (char *)(v5 + v8);
      v32 = v10;
      v2 = (__int16 *)(v7 + 2LL * v5);
    }
    goto LABEL_35;
  }
  v2 = (__int16 *)(v7 + 2LL * v5);
LABEL_37:
  if ( v2 == &v28 )
    return 0LL;
  return v2;
}
