/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1404CAD00
 * Callers:
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x140533CC8 (CmpSelectLeaf.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1404CAF30 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5)
{
  unsigned int *v6; // r15
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  unsigned int v22; // ebx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h]
  __int64 v28; // [rsp+80h] [rbp+18h]

  v28 = a3;
  v27 = a2;
  v6 = a5;
  v7 = *(unsigned __int16 *)(a2 + 2) - 1;
  v8 = 0;
  v26 = -1;
  while ( 1 )
  {
    v10 = v8 + ((v7 - v8) >> 1);
    v11 = *(_DWORD *)(a2 + 4 * v10 + 4);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v26);
    v13 = v12;
    if ( !v12 )
      goto LABEL_28;
    v14 = CmpCompareInIndex(a1, v28, a4, (unsigned int)*(unsigned __int16 *)(v12 + 2) - 1, v12, (__int64)v6);
    if ( v14 == 2 )
      goto LABEL_27;
    if ( !v14 )
      goto LABEL_18;
    if ( v14 >= 0 )
    {
      v15 = v28;
      v8 += (v7 - v8) >> 1;
    }
    else
    {
      v25 = v13;
      v15 = v28;
      v16 = CmpCompareInIndex(a1, v28, a4, 0, v25, (__int64)v6);
      if ( v16 == 2 )
        goto LABEL_27;
      if ( v16 >= 0 )
        goto LABEL_18;
      v7 = v8 + ((v7 - v8) >> 1);
    }
    if ( v7 - v8 <= 1 )
      break;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
    a2 = v27;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
  v11 = *(_DWORD *)(v27 + 4LL * v8 + 4);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v26);
  v18 = v17;
  if ( v17 )
  {
    v19 = CmpCompareInIndex(a1, v15, a4, (unsigned int)*(unsigned __int16 *)(v17 + 2) - 1, v17, (__int64)v6);
    if ( v19 == 2 )
      goto LABEL_27;
    if ( !v19 )
    {
      *v6 = v11;
      LODWORD(v10) = v8;
      goto LABEL_19;
    }
    if ( v19 < 0 )
    {
      v20 = CmpCompareInIndex(a1, v15, a4, 0, v18, (__int64)v6);
      if ( v20 != 2 )
      {
        LODWORD(v10) = v8;
        if ( v20 >= 0 )
        {
LABEL_18:
          *v6 = v11;
LABEL_19:
          (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
          return (unsigned int)v10;
        }
        goto LABEL_25;
      }
      goto LABEL_27;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
    v22 = *(_DWORD *)(v27 + 4LL * v7 + 4);
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v22, &v26);
    if ( v23 )
    {
      v24 = CmpCompareInIndex(a1, v15, a4, (unsigned int)*(unsigned __int16 *)(v23 + 2) - 1, v23, (__int64)v6);
      if ( v24 != 2 )
      {
        if ( v24 <= 0 )
        {
          *v6 = v22;
          LODWORD(v10) = v7;
          goto LABEL_19;
        }
        LODWORD(v10) = v7;
LABEL_25:
        *v6 = -1;
        goto LABEL_19;
      }
LABEL_27:
      LODWORD(v10) = 0x80000000;
      goto LABEL_25;
    }
  }
LABEL_28:
  *v6 = -1;
  return 0x80000000LL;
}
