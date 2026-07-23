/*
 * XREFs of CmpSelectLeaf @ 0x14060ADA0
 * Callers:
 *     CmpAddSubKeyToList @ 0x14049B06C (CmpAddSubKeyToList.c)
 * Callees:
 *     CmpDoCompareKeyName @ 0x1404F5740 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1404F5850 (CmpFindSubKeyInRoot.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpSplitLeaf @ 0x14060B068 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        __int64 a4,
        __int64 *a5)
{
  ULONG_PTR v7; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // esi
  int SubKeyInRoot; // eax
  unsigned int v22; // esi
  _DWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v25[2]; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+38h] BYREF

  v25[0] = -1;
  v24[0] = -1;
  v7 = *a2;
  v25[1] = 0;
  v24[1] = 0;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v7, 0) )
    return 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v25);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (__int64)a3, 0LL, &v26);
    v22 = SubKeyInRoot;
    if ( SubKeyInRoot < 0 )
      goto LABEL_29;
    v10 = v26;
    if ( v26 != -1 )
    {
      v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v26,
              v24);
      if ( !v19 )
        goto LABEL_29;
      if ( *(_WORD *)(v19 + 2) < 0x3F5u )
      {
        *a5 = v9 + 4 * (v22 + 1LL);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v9 + 4LL * (unsigned int)SubKeyInRoot + 4),
            v24);
    if ( !v11 )
      goto LABEL_29;
    v12 = CmpDoCompareKeyName(BugCheckParameter2, a3, 0LL, *(_DWORD *)(v11 + 4));
    if ( v12 == 2 )
      break;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
      v26 = *(_DWORD *)(v9 + 4LL * v22 + 4);
      v10 = v26;
      v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v26,
              v24);
      if ( !v17 )
        goto LABEL_29;
      if ( *(_WORD *)(v17 + 2) < 0x3F5u )
      {
        v16 = v9 + 4 * (v22 + 1LL);
        goto LABEL_16;
      }
      if ( v22 < (unsigned int)*(unsigned __int16 *)(v9 + 2) - 1 )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
        v26 = *(_DWORD *)(v9 + 4LL * (v22 + 1) + 4);
        v10 = v26;
        v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                v24);
        if ( !v18 )
          goto LABEL_29;
        if ( *(_WORD *)(v18 + 2) < 0x3F5u )
        {
          v14 = v22 + 1;
LABEL_12:
          *a5 = v9 + 4 * (v14 + 1);
LABEL_35:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
          return v10;
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
      if ( v22 )
      {
        v26 = *(_DWORD *)(v9 + 4LL * (v22 - 1) + 4);
        v10 = v26;
        v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                v24);
        if ( !v13 )
          goto LABEL_29;
        if ( *(_WORD *)(v13 + 2) < 0x3F5u )
        {
          v14 = v22 - 1;
          goto LABEL_12;
        }
      }
      else
      {
        v26 = *(_DWORD *)(v9 + 4);
        v10 = v26;
        v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                v24);
        if ( !v15 )
          goto LABEL_29;
        if ( *(_WORD *)(v15 + 2) < 0x3F5u )
        {
          v16 = v9 + 4;
LABEL_16:
          *a5 = v16;
          goto LABEL_35;
        }
      }
    }
LABEL_25:
    v20 = CmpSplitLeaf(BugCheckParameter2, *a2);
    if ( v20 == -1 )
      break;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
    *a2 = v20;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v20, v25);
    if ( !v9 )
      break;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
LABEL_29:
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
  return 0xFFFFFFFFLL;
}
