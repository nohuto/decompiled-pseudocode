/*
 * XREFs of ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402546E4
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140255D74 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwLogRegionOp @ 0x1402572A0 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ebp
  __int64 v6; // r11
  int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // r10d
  __int64 v11; // r11
  unsigned int v12; // r14d
  int v13; // ecx
  _QWORD *v14; // rcx
  __int64 i; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  char v18; // dl

  if ( (dword_140353094 & 0x80u) == 0 )
    return (unsigned int)-1073741637;
  v4 = -1;
  v2 = 0;
  while ( 2 )
  {
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    {
      ++v4;
      goto LABEL_27;
    }
    v5 = *(_DWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 200);
    v7 = v4 + 1 < v5 ? v4 + 1 : 0;
    v8 = v5 - 1;
    if ( (v6 & 4) != 0 )
    {
      v9 = 1LL;
      v10 = 32;
    }
    else
    {
      v9 = 0LL;
      v10 = 0;
    }
    v11 = v6 - 4 * v9;
    while ( 1 )
    {
      v12 = v10 + v8;
      if ( v8 - v7 == -1 )
        goto LABEL_12;
      v14 = (_QWORD *)(v11 + 8 * ((unsigned __int64)(unsigned int)(v10 + v7) >> 6));
      for ( i = ((1LL << ((v10 + v7) & 0x3F)) - 1) | ~*v14; i == -1; i = ~*v14 )
      {
        if ( (unsigned __int64)++v14 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
          goto LABEL_12;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v13 = i + ((unsigned int)(((__int64)v14 - v11) >> 3) << 6);
      if ( v13 > v12 )
      {
LABEL_12:
        v13 = -1;
        goto LABEL_19;
      }
      if ( v13 != -1 )
        break;
LABEL_19:
      if ( !v7 )
        goto LABEL_24;
      v16 = v4 + 2;
      v7 = 0;
      if ( v4 + 2 > v5 )
        v16 = *(_DWORD *)(a1 + 192);
      v8 = v16 - 1;
    }
    v13 -= v10;
LABEL_24:
    if ( v13 <= (int)v4 )
      v13 = *(_DWORD *)(a1 + 140);
    v4 = v13;
LABEL_27:
    if ( v4 != *(_DWORD *)(a1 + 140) )
    {
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * v4) & 0x1FFF) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 488);
        if ( v17 )
          v18 = *(_BYTE *)(v17 + v4);
        else
          v18 = 0;
        SmEtwLogRegionOp(
          (unsigned int)&qword_140353088,
          10,
          a1,
          v4,
          0,
          *(_BYTE *)(*(_QWORD *)(a1 + 472) + 2LL * v4),
          v18);
      }
      continue;
    }
    return v2;
  }
}
