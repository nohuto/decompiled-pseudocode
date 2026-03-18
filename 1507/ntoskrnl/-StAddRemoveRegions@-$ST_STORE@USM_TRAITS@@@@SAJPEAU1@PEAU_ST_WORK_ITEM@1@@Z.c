/*
 * XREFs of ?StAddRemoveRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140252D28
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140255918 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StAddRemoveRegions(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int v3; // r10d
  __int64 v6; // rax
  int v7; // r15d
  unsigned int v8; // ebp
  int v9; // r13d
  __int64 v10; // r14
  int v11; // r11d
  int v12; // ecx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // r9d
  _QWORD *v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  __int64 v22; // r14
  unsigned int v23; // esi
  int v24; // eax
  unsigned __int64 v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h]

  v2 = *(_DWORD *)(a2 + 8) & 7;
  LODWORD(v26) = 0;
  v3 = -1;
  if ( v2 != 4 )
  {
    v21 = *(_DWORD *)(a2 + 24);
    v22 = a1 + 80;
    v23 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        v24 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v22, &v26);
        v3 = v24;
        if ( v24 < 0 )
          break;
        ++v23;
        *(_BYTE *)(((unsigned __int64)(unsigned int)v26 >> 3) + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) |= 1 << (v26 & 7);
        if ( v23 >= v21 )
          goto LABEL_28;
      }
      if ( v24 != -1073741818 )
        v3 = 0;
    }
LABEL_28:
    *(_DWORD *)(a2 + 24) = v23;
    return v3;
  }
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 24);
  v27 = v6;
LABEL_3:
  if ( v7 )
  {
    v8 = *(_DWORD *)v6;
    v9 = v26;
    v10 = *(_QWORD *)(v6 + 8);
    v11 = (unsigned int)v26 < *(_DWORD *)v6 ? v26 : 0;
    v12 = *(_DWORD *)v6 - 1;
    if ( (v10 & 4) != 0 )
    {
      v13 = 1LL;
      v14 = 32;
    }
    else
    {
      v13 = 0LL;
      v14 = 0;
    }
    v15 = v10 - 4 * v13;
    while ( 1 )
    {
      v16 = v14 + v12;
      if ( v12 - v11 == -1 )
        goto LABEL_9;
      v26 = v15 + 8 * ((unsigned __int64)v16 >> 6);
      v18 = (_QWORD *)(v15 + 8 * ((unsigned __int64)(unsigned int)(v14 + v11) >> 6));
      v19 = ((1LL << ((v14 + v11) & 0x3F)) - 1) | ~*v18;
      if ( v19 == -1 )
        break;
LABEL_13:
      _BitScanForward64((unsigned __int64 *)&v19, ~v19);
      v17 = v19 + ((unsigned int)(((__int64)v18 - v15) >> 3) << 6);
      if ( v17 > v16 )
        goto LABEL_9;
      if ( v17 != -1 )
      {
        v17 -= v14;
LABEL_20:
        *(_BYTE *)(((unsigned __int64)v17 >> 3) + *(_QWORD *)(a1 + 280)) |= 1 << (v17 & 7);
        ++*(_DWORD *)(a1 + 288);
        LODWORD(v26) = v17 + 1;
        --v7;
        v6 = v27;
        goto LABEL_3;
      }
LABEL_15:
      if ( !v11 )
        goto LABEL_20;
      v20 = v9 + 1;
      v11 = 0;
      if ( v9 + 1 > v8 )
        v20 = v8;
      v12 = v20 - 1;
    }
    while ( (unsigned __int64)++v18 <= v26 )
    {
      v19 = ~*v18;
      if ( v19 != -1 )
        goto LABEL_13;
    }
LABEL_9:
    v17 = -1;
    goto LABEL_15;
  }
  return 0;
}
