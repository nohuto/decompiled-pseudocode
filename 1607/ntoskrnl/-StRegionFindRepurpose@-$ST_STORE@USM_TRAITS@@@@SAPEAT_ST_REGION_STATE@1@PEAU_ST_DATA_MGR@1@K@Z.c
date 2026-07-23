/*
 * XREFs of ?StRegionFindRepurpose@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14021F8C4
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindRepurpose(__int64 a1, int a2)
{
  _WORD *v2; // r9
  char *v3; // rsi
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r15
  __int16 v7; // ax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // edi
  __int16 v12; // r10
  unsigned __int16 v13; // r10
  unsigned __int8 v14; // al
  _WORD v16[28]; // [rsp+0h] [rbp-38h] BYREF
  char v17; // [rsp+48h] [rbp+10h] BYREF

  v2 = v16;
  v3 = &v17;
  v4 = *(_DWORD *)(a1 + 856);
  v5 = *(_QWORD *)(a1 + 1016);
  v6 = *(_QWORD *)(a1 + 1032);
  v7 = (v16[0] ^ *(_WORD *)(a1 + 816)) & 0x1FFF ^ v16[0];
  v17 = -1;
  v16[0] = v7;
  LODWORD(v9) = a2 - 1;
  v10 = 0;
  if ( !v4 )
    return 0LL;
  v11 = *(_DWORD *)(a1 + 788);
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (_DWORD)v9 != v11 )
      break;
    LODWORD(v9) = -1;
    --v10;
LABEL_11:
    if ( ++v10 >= v4 )
      goto LABEL_14;
  }
  v12 = *(_WORD *)(v5 + 2 * v9);
  if ( (v12 & 0xC000) != 0 )
    goto LABEL_11;
  v13 = v12 & 0x1FFF;
  if ( v13 )
  {
    v14 = *(_BYTE *)(v9 + v6);
    if ( v14 <= (unsigned __int8)*v3 && (v14 < (unsigned __int8)*v3 || v13 <= (unsigned __int16)(*v2 & 0x1FFF)) )
    {
      v3 = (char *)(v9 + v6);
      v2 = (_WORD *)(v5 + 2 * v9);
    }
    goto LABEL_11;
  }
  v2 = (_WORD *)(v5 + 2 * v9);
LABEL_14:
  if ( v2 != v16 )
    return v2;
  return 0LL;
}
