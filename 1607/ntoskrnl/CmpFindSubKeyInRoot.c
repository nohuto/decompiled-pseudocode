/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1404F5850
 * Callers:
 *     CmpRemoveSubKeyFromList @ 0x1404B82D8 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x14060ADA0 (CmpSelectLeaf.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1404F5A90 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned int *v6; // r15
  unsigned int v7; // r14d
  __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rsi
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
  int v27; // [rsp+74h] [rbp+Ch]
  __int64 v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+80h] [rbp+18h]

  v29 = a3;
  v28 = a2;
  v5 = 0;
  v6 = a5;
  v7 = *(unsigned __int16 *)(a2 + 2) - 1;
  v27 = 0;
  v26 = -1;
  while ( 1 )
  {
    v10 = v5 + ((v7 - v5) >> 1);
    v11 = *(_DWORD *)(a2 + 4 * v10 + 4);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v26);
    v13 = v12;
    if ( !v12 )
      goto LABEL_28;
    v14 = CmpCompareInIndex(a1, v29, a4, (unsigned int)*(unsigned __int16 *)(v12 + 2) - 1, v12, v6);
    if ( v14 == 2 )
      goto LABEL_27;
    if ( !v14 )
      goto LABEL_18;
    if ( v14 >= 0 )
    {
      v15 = v29;
      v5 += (v7 - v5) >> 1;
    }
    else
    {
      v25 = v13;
      v15 = v29;
      v16 = CmpCompareInIndex(a1, v29, a4, 0LL, v25, v6);
      if ( v16 == 2 )
        goto LABEL_27;
      if ( v16 >= 0 )
        goto LABEL_18;
      v7 = v5 + ((v7 - v5) >> 1);
    }
    if ( v7 - v5 <= 1 )
      break;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
    a2 = v28;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
  v11 = *(_DWORD *)(v28 + 4LL * v5 + 4);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v11, &v26);
  v18 = v17;
  if ( v17 )
  {
    v19 = CmpCompareInIndex(a1, v15, a4, (unsigned int)*(unsigned __int16 *)(v17 + 2) - 1, v17, v6);
    if ( v19 == 2 )
      goto LABEL_27;
    if ( !v19 )
    {
      *v6 = v11;
      LODWORD(v10) = v5;
      goto LABEL_19;
    }
    if ( v19 < 0 )
    {
      v20 = CmpCompareInIndex(a1, v15, a4, 0LL, v18, v6);
      if ( v20 != 2 )
      {
        LODWORD(v10) = v5;
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
    v22 = *(_DWORD *)(v28 + 4LL * v7 + 4);
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v22, &v26);
    if ( v23 )
    {
      v24 = CmpCompareInIndex(a1, v15, a4, (unsigned int)*(unsigned __int16 *)(v23 + 2) - 1, v23, v6);
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
