/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140144AA0
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402530B8 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r13
  unsigned __int16 **v7; // r8
  unsigned __int16 **v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  int v13; // edi
  unsigned __int16 *v14; // r12
  unsigned __int16 v15; // ax
  unsigned int v16; // ecx
  unsigned __int16 **v17; // rbx
  unsigned int v19; // ebx
  __int64 v20; // r11
  int v21; // r9d
  unsigned int v22; // ecx
  __int64 v23; // rax
  int v24; // r10d
  __int64 v25; // r11
  unsigned int v26; // r12d
  _QWORD *v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  __int16 v31; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int16 **v32; // [rsp+78h] [rbp+10h]
  unsigned int v33; // [rsp+80h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v4 = a3;
  v31 |= 0x1FFFu;
  v7 = a2;
  v8 = a2;
  v9 = (unsigned __int64)&a2[v4];
  v10 = 0LL;
  v11 = (unsigned __int64)(8 * v4 + 7) >> 3;
  if ( (unsigned __int64)a2 > v9 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      ++v10;
      *v8++ = &v31;
    }
    while ( v10 < v11 );
  }
  v12 = 0;
  v13 = -1;
LABEL_6:
  while ( 2 )
  {
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
    {
      ++v13;
      goto LABEL_8;
    }
    v19 = *(_DWORD *)(a1 + 192);
    v20 = *(_QWORD *)(a1 + 200);
    v21 = v13 + 1 < v19 ? v13 + 1 : 0;
    v22 = v19 - 1;
    if ( (v20 & 4) != 0 )
    {
      v23 = 1LL;
      v24 = 32;
    }
    else
    {
      v23 = 0LL;
      v24 = 0;
    }
    v25 = v20 - 4 * v23;
    while ( 1 )
    {
      v26 = v24 + v22;
      if ( v22 - v21 != -1 )
      {
        v27 = (_QWORD *)(v25 + 8 * ((unsigned __int64)(unsigned int)(v24 + v21) >> 6));
        v28 = ((1LL << ((v24 + v21) & 0x3F)) - 1) | ~*v27;
        if ( v28 == -1 )
        {
          do
          {
            if ( (unsigned __int64)++v27 > v25 + 8 * ((unsigned __int64)v26 >> 6) )
              goto LABEL_36;
            v28 = ~*v27;
          }
          while ( !*v27 );
        }
        _BitScanForward64((unsigned __int64 *)&v28, ~v28);
        v29 = v28 + ((unsigned int)(((__int64)v27 - v25) >> 3) << 6);
        if ( v29 <= v26 )
          break;
      }
LABEL_36:
      v29 = -1;
LABEL_37:
      if ( !v21 )
        goto LABEL_33;
      v30 = v13 + 2;
      if ( v13 + 2 > v19 )
        v30 = *(_DWORD *)(a1 + 192);
      v22 = v30 - 1;
      v21 = 0;
    }
    if ( v29 == -1 )
      goto LABEL_37;
    v29 -= v24;
LABEL_33:
    if ( v29 <= v13 )
      v29 = *(_DWORD *)(a1 + 140);
    v7 = v32;
    v13 = v29;
    LODWORD(v4) = v33;
LABEL_8:
    if ( v13 != *(_DWORD *)(a1 + 140) )
    {
      v14 = (unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2LL * (unsigned int)v13);
      v15 = *v14;
      if ( (*v14 & 0x1FFF) != 0 && (v15 & 0x1FFFu) <= a4 )
      {
        v16 = (unsigned __int8)*(_DWORD *)(a1 + 128) ? 0 : v15 >> 13;
        if ( v13 != *(_DWORD *)(a1 + 16LL * v16 + 648) )
        {
          v17 = v7;
          if ( (unsigned __int64)v7 < v9 )
          {
            while ( (unsigned __int16)(*v14 & 0x1FFF) >= (unsigned __int16)(**v17 & 0x1FFF) )
            {
              if ( (unsigned __int64)++v17 >= v9 )
                goto LABEL_6;
            }
            memmove(v17 + 1, v17, v9 - (_QWORD)v17 - 8);
            *v17 = v14;
            if ( v12 >= (unsigned int)v4 || (v7 = v32, ++v12, v12 >= (unsigned int)v4) )
            {
              v7 = v32;
              a4 = (**(_WORD **)(v9 - 8) & 0x1FFF) - 1;
            }
          }
        }
      }
      continue;
    }
    return v12;
  }
}
