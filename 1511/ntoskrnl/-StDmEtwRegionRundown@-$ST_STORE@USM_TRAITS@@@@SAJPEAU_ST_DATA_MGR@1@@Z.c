/*
 * XREFs of ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14020545C
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140206B18 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     SmEtwLogRegionOp @ 0x14020800C (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(__int64 a1)
{
  ULONGLONG *v2; // rax
  unsigned int v3; // ebx
  int v4; // r12d
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r11
  int v9; // r9d
  unsigned int v10; // ecx
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // r11
  unsigned int v14; // r14d
  int v15; // ecx
  _QWORD *v16; // rcx
  __int64 i; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // dl

  v2 = SmEtwEnabled(3);
  v3 = 0;
  v4 = (int)v2;
  if ( !v2 )
    return (unsigned int)-1073741637;
  v6 = -1;
  while ( 2 )
  {
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    {
      ++v6;
      goto LABEL_27;
    }
    v7 = *(_DWORD *)(a1 + 192);
    v8 = *(_QWORD *)(a1 + 200);
    v9 = v6 + 1 < v7 ? v6 + 1 : 0;
    v10 = v7 - 1;
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
        goto LABEL_12;
      v16 = (_QWORD *)(v13 + 8 * ((unsigned __int64)(unsigned int)(v12 + v9) >> 6));
      for ( i = ((1LL << ((v12 + v9) & 0x3F)) - 1) | ~*v16; i == -1; i = ~*v16 )
      {
        if ( (unsigned __int64)++v16 > v13 + 8 * ((unsigned __int64)v14 >> 6) )
          goto LABEL_12;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v15 = i + ((unsigned int)(((__int64)v16 - v13) >> 3) << 6);
      if ( v15 > v14 )
      {
LABEL_12:
        v15 = -1;
        goto LABEL_19;
      }
      if ( v15 != -1 )
        break;
LABEL_19:
      if ( !v9 )
        goto LABEL_24;
      v18 = v6 + 2;
      v9 = 0;
      if ( v6 + 2 > v7 )
        v18 = *(_DWORD *)(a1 + 192);
      v10 = v18 - 1;
    }
    v15 -= v12;
LABEL_24:
    if ( v15 <= (int)v6 )
      v15 = *(_DWORD *)(a1 + 140);
    v6 = v15;
LABEL_27:
    if ( v6 != *(_DWORD *)(a1 + 140) )
    {
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * v6) & 0x1FFF) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 488);
        if ( v19 )
          v20 = *(_BYTE *)(v19 + v6);
        else
          v20 = 0;
        SmEtwLogRegionOp(v4, 10, a1, v6, 0, *(_BYTE *)(*(_QWORD *)(a1 + 472) + 2LL * v6), v20);
      }
      continue;
    }
    return v3;
  }
}
