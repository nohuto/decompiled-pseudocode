/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1404F5E50
 * Callers:
 *     CmpAddToLeaf @ 0x14049B1D0 (CmpAddToLeaf.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindSubKeyInLeaf @ 0x140609FE4 (CmpFindSubKeyInLeaf.c)
 * Callees:
 *     CmpDoCompareKeyName @ 0x1404F5740 (CmpDoCompareKeyName.c)
 *     CmpCompareInIndex @ 0x1404F5A90 (CmpCompareInIndex.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(
        __int64 a1,
        __int16 *a2,
        const UNICODE_STRING *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  int v6; // eax
  const UNICODE_STRING *v8; // rdi
  __int16 *v9; // r9
  __int64 v10; // r10
  __int64 v11; // rbp
  unsigned int *v13; // rsi
  __int16 v14; // cx
  __int16 *v15; // rbx
  int v16; // eax
  __int64 v17; // r8
  unsigned int *v18; // rbx
  unsigned int v19; // ecx
  _BYTE *v20; // rax
  unsigned int v21; // r15d
  unsigned int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // r14
  WCHAR v25; // dx
  unsigned int v26; // edi
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // esi
  unsigned int v31; // r14d
  int v32; // eax
  int v33; // ecx
  unsigned int *v34; // rax
  unsigned int v35; // [rsp+30h] [rbp-58h]
  unsigned int v36; // [rsp+34h] [rbp-54h]
  unsigned int *v37; // [rsp+40h] [rbp-48h]

  v6 = (unsigned __int16)a2[1];
  v8 = a3;
  v35 = 0;
  v9 = a2;
  v10 = a1;
  v36 = v6 - 1;
  v11 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v13 = a5;
    v14 = *v9;
    *a5 = -1;
    if ( ((v14 - 26220) & 0xFDFF) != 0 )
    {
      v15 = &v9[2 * v11];
      v16 = CmpDoCompareKeyName(v10, v8, a4, *((_DWORD *)v15 + 1));
      if ( v16 == 2 )
        goto LABEL_55;
      if ( !v16 )
      {
        *a5 = *((_DWORD *)v15 + 1);
        *a6 = v11;
        return 0LL;
      }
      goto LABEL_39;
    }
    v17 = 4 * v11;
    v18 = (unsigned int *)&v9[4 * v11 + 2];
    v37 = v18;
    if ( v14 != 26220 )
      goto LABEL_37;
    v19 = 0;
    v20 = v18 + 1;
    v21 = 4;
    while ( *v20 )
    {
      ++v19;
      ++v20;
      if ( v19 >= 4 )
        goto LABEL_13;
    }
    v21 = v19;
LABEL_13:
    if ( a4 )
      v22 = *a4;
    else
      v22 = v8->Length >> 1;
    if ( v22 < v21 )
      v21 = v22;
    v23 = 0LL;
    if ( !v21 )
    {
LABEL_36:
      v13 = a5;
LABEL_37:
      v16 = CmpDoCompareKeyName(v10, v8, a4, *v18);
      if ( v16 == 2 )
      {
LABEL_55:
        *v13 = -1;
        goto LABEL_56;
      }
      if ( !v16 )
      {
        *v13 = *v18;
        *a6 = v11;
        return 0LL;
      }
LABEL_39:
      if ( v16 < 0 )
        goto LABEL_40;
      goto LABEL_42;
    }
    v24 = 0LL;
    while ( 1 )
    {
      v25 = a4 ? *(unsigned __int8 *)(v23 + *((_QWORD *)a4 + 1)) : v8->Buffer[v24];
      v26 = *((unsigned __int8 *)&v9[v17 + 4] + (unsigned int)v23);
      if ( v25 >= 0x61u )
        v27 = v25 <= 0x7Au ? v25 - 32 : RtlUpcaseUnicodeChar(v25);
      else
        v27 = v25;
      if ( v26 >= 0x61 )
        v28 = v26 <= 0x7A ? v26 - 32 : RtlUpcaseUnicodeChar(v26);
      else
        v28 = v26;
      v8 = a3;
      v29 = v27 - v28;
      if ( v29 )
        break;
      v17 = 4 * v11;
      v23 = (unsigned int)(v23 + 1);
      v9 = a2;
      ++v24;
      if ( (unsigned int)v23 >= v21 )
      {
        v18 = v37;
        v10 = a1;
        goto LABEL_36;
      }
    }
    if ( v29 <= 0 )
    {
LABEL_40:
      v30 = v35;
      v31 = v11;
      v36 = v11;
      goto LABEL_43;
    }
LABEL_42:
    v31 = v36;
    v30 = v11;
    v35 = v11;
LABEL_43:
    if ( v31 - v30 <= 1 )
      break;
    v9 = a2;
    v10 = a1;
    v11 = v30 + ((v31 - v30) >> 1);
  }
  v32 = CmpCompareInIndex(a1, v8, a4, v30, a2, (__int64)a5);
  if ( v32 == 2 )
  {
    *a5 = -1;
LABEL_56:
    v34 = a6;
    goto LABEL_57;
  }
  if ( !v32 )
  {
    *a6 = v30;
    return 0LL;
  }
  if ( v32 < 0 )
  {
    *a6 = v30;
    return 3221225524LL;
  }
  v33 = CmpCompareInIndex(a1, v8, a4, v31, a2, (__int64)a5);
  v34 = a6;
  if ( v33 != 2 )
  {
    *a6 = v31;
    return v33 != 0 ? 0xC0000034 : 0;
  }
  *a5 = -1;
LABEL_57:
  *v34 = 0x80000000;
  return 3221225626LL;
}
