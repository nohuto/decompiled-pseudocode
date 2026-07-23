/*
 * XREFs of ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021D430
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StAddRemoveRegions(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v5; // rax
  int v6; // r15d
  unsigned int v7; // ebp
  __int64 v8; // r14
  unsigned int v9; // r11d
  int v10; // ecx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned int v15; // r9d
  _QWORD *v16; // r9
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ebp
  struct NP_CONTEXT::NP_CTX *v20; // r14
  unsigned int v21; // esi
  int v22; // eax
  unsigned int v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+70h] [rbp+18h]

  v24 = 0;
  v2 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 7) != 4 )
  {
    v19 = *(_DWORD *)(a2 + 24);
    v20 = (struct NP_CONTEXT::NP_CTX *)(a1 + 80);
    v21 = 0;
    if ( v19 )
    {
      while ( 1 )
      {
        v22 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v20);
        v2 = v22;
        if ( v22 < 0 )
          break;
        ++v21;
        **(_BYTE **)(*(_QWORD *)(a2 + 16) + 8LL) |= 1u;
        if ( v21 >= v19 )
          goto LABEL_28;
      }
      if ( v22 != -1073741818 )
        v2 = 0;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v21;
    return v2;
  }
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 24);
  v25 = v5;
LABEL_3:
  if ( v6 )
  {
    v7 = *(_DWORD *)v5;
    v8 = *(_QWORD *)(v5 + 8);
    v9 = v24 < *(_DWORD *)v5 ? v24 : 0;
    v10 = *(_DWORD *)v5 - 1;
    if ( (v8 & 4) != 0 )
    {
      v11 = 1LL;
      v12 = 32;
    }
    else
    {
      v11 = 0LL;
      v12 = 0;
    }
    v13 = v8 - 4 * v11;
    while ( 1 )
    {
      v14 = v12 + v10;
      if ( v10 - v9 == -1 )
        goto LABEL_9;
      v16 = (_QWORD *)(v13 + 8 * ((unsigned __int64)(v12 + v9) >> 6));
      v17 = ((1LL << ((v12 + v9) & 0x3F)) - 1) | ~*v16;
      if ( v17 == -1 )
        break;
LABEL_13:
      _BitScanForward64((unsigned __int64 *)&v17, ~v17);
      v15 = v17 + ((unsigned int)(((__int64)v16 - v13) >> 3) << 6);
      if ( v15 > v14 )
        goto LABEL_9;
      if ( v15 != -1 )
      {
        v15 -= v12;
LABEL_20:
        *(_BYTE *)(((unsigned __int64)v15 >> 3) + *(_QWORD *)(a1 + 928)) |= 1 << (v15 & 7);
        ++*(_DWORD *)(a1 + 936);
        v24 = v15 + 1;
        --v6;
        v5 = v25;
        goto LABEL_3;
      }
LABEL_15:
      if ( !v9 )
        goto LABEL_20;
      v18 = v24 + 1;
      v9 = 0;
      if ( v24 + 1 > v7 )
        v18 = v7;
      v10 = v18 - 1;
    }
    while ( (unsigned __int64)++v16 <= v13 + 8 * ((unsigned __int64)v14 >> 6) )
    {
      v17 = ~*v16;
      if ( v17 != -1 )
        goto LABEL_13;
    }
LABEL_9:
    v15 = -1;
    goto LABEL_15;
  }
  return 0;
}
