/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1403D9BC0
 * Callers:
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x1404C6074 (CmpSelectLeaf.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1403D9DB0 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v5 = *(unsigned __int16 *)(a2 + 2) - 1;
  v24 = -1;
  v6 = 0;
  while ( 1 )
  {
    v9 = v6 + ((v5 - v6) >> 1);
    v10 = *(_DWORD *)(a2 + 4 * v9 + 4);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v24);
    v12 = v11;
    if ( !v11 )
      goto LABEL_28;
    v13 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v11 + 2) - 1, v11, a4);
    if ( v13 == 2 )
      goto LABEL_27;
    if ( !v13 )
      goto LABEL_18;
    if ( v13 >= 0 )
    {
      v6 += (v5 - v6) >> 1;
    }
    else
    {
      v14 = CmpCompareInIndex(a1, a3, 0LL, v12, a4);
      if ( v14 == 2 )
        goto LABEL_27;
      if ( v14 >= 0 )
        goto LABEL_18;
      v5 = v6 + ((v5 - v6) >> 1);
    }
    if ( v5 - v6 <= 1 )
      break;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
    a2 = v25;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
  v15 = v25;
  v10 = *(_DWORD *)(v25 + 4LL * v6 + 4);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v10, &v24);
  v17 = v16;
  if ( v16 )
  {
    v18 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v16 + 2) - 1, v16, a4);
    if ( v18 == 2 )
      goto LABEL_27;
    if ( !v18 )
    {
      *a4 = v10;
      LODWORD(v9) = v6;
      goto LABEL_19;
    }
    if ( v18 < 0 )
    {
      v19 = CmpCompareInIndex(a1, a3, 0LL, v17, a4);
      if ( v19 != 2 )
      {
        LODWORD(v9) = v6;
        if ( v19 >= 0 )
        {
LABEL_18:
          *a4 = v10;
LABEL_19:
          (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
          return (unsigned int)v9;
        }
        goto LABEL_25;
      }
      goto LABEL_27;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
    v21 = *(_DWORD *)(v15 + 4LL * v5 + 4);
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v21, &v24);
    if ( v22 )
    {
      v23 = CmpCompareInIndex(a1, a3, (unsigned int)*(unsigned __int16 *)(v22 + 2) - 1, v22, a4);
      if ( v23 != 2 )
      {
        if ( v23 <= 0 )
        {
          *a4 = v21;
          LODWORD(v9) = v5;
          goto LABEL_19;
        }
        LODWORD(v9) = v5;
LABEL_25:
        *a4 = -1;
        goto LABEL_19;
      }
LABEL_27:
      LODWORD(v9) = 0x80000000;
      goto LABEL_25;
    }
  }
LABEL_28:
  *a4 = -1;
  return 0x80000000LL;
}
