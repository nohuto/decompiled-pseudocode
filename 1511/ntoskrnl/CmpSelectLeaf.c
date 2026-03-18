/*
 * XREFs of CmpSelectLeaf @ 0x1404C6074
 * Callers:
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 * Callees:
 *     CmpFindSubKeyInRoot @ 0x1403D9BC0 (CmpFindSubKeyInRoot.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpDoCompareKeyName @ 0x1403FBB80 (CmpDoCompareKeyName.c)
 *     CmpSplitLeaf @ 0x1405E4300 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        const UNICODE_STRING *a3,
        int a4,
        __int64 *a5)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 i; // rdx
  int SubKeyInRoot; // eax
  unsigned int v13; // esi
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  unsigned int v26; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v27[3]; // [rsp+24h] [rbp-Ch] BYREF
  int v28; // [rsp+78h] [rbp+48h] BYREF
  int v29; // [rsp+88h] [rbp+58h]

  v29 = a4;
  v27[0] = -1;
  v28 = -1;
  v8 = a4;
  if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 4LL * a4 + 28), 0) )
    return 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(a2 + 4 * v8 + 28),
         v27);
  v10 = v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  for ( i = v9; ; i = v10 )
  {
    SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter2, i, (__int64)a3, &v26);
    v13 = SubKeyInRoot;
    if ( SubKeyInRoot < 0 )
      goto LABEL_34;
    v14 = v26;
    if ( v26 != -1 )
    {
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v26,
              &v28);
      if ( !v15 )
        goto LABEL_34;
      if ( *(_WORD *)(v15 + 2) < 0x3F5u )
      {
        *a5 = v10 + 4 * (v13 + 1LL);
        goto LABEL_9;
      }
      goto LABEL_28;
    }
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v10 + 4LL * (unsigned int)SubKeyInRoot + 4),
            &v28);
    if ( !v17 )
      goto LABEL_34;
    v18 = CmpDoCompareKeyName(BugCheckParameter2, a3, *(_DWORD *)(v17 + 4));
    if ( v18 == 2 )
      break;
    if ( v18 >= 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
      v26 = *(_DWORD *)(v10 + 4LL * v13 + 4);
      v14 = v26;
      v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v26,
              &v28);
      if ( !v23 )
        goto LABEL_34;
      if ( *(_WORD *)(v23 + 2) < 0x3F5u )
      {
        v22 = v10 + 4 * (v13 + 1LL);
        goto LABEL_32;
      }
      if ( v13 < (unsigned int)*(unsigned __int16 *)(v10 + 2) - 1 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
        v26 = *(_DWORD *)(v10 + 4LL * (v13 + 1) + 4);
        v14 = v26;
        v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                &v28);
        if ( !v24 )
          goto LABEL_34;
        if ( *(_WORD *)(v24 + 2) < 0x3F5u )
        {
          v20 = v13 + 1;
LABEL_18:
          *a5 = v10 + 4 * (v20 + 1);
LABEL_9:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
          return v14;
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
      if ( v13 )
      {
        v26 = *(_DWORD *)(v10 + 4LL * (v13 - 1) + 4);
        v14 = v26;
        v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                &v28);
        if ( !v19 )
          goto LABEL_34;
        if ( *(_WORD *)(v19 + 2) < 0x3F5u )
        {
          v20 = v13 - 1;
          goto LABEL_18;
        }
      }
      else
      {
        v26 = *(_DWORD *)(v10 + 4);
        v14 = v26;
        v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v26,
                &v28);
        if ( !v21 )
          goto LABEL_34;
        if ( *(_WORD *)(v21 + 2) < 0x3F5u )
        {
          v22 = v10 + 4;
LABEL_32:
          *a5 = v22;
          goto LABEL_9;
        }
      }
    }
LABEL_28:
    v25 = CmpSplitLeaf(BugCheckParameter2, *(unsigned int *)(a2 + 4 * v8 + 28));
    if ( v25 == -1 )
      break;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
    *(_DWORD *)(a2 + 4 * v8 + 28) = v25;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v25,
            v27);
    if ( !v10 )
      break;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
LABEL_34:
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  return 0xFFFFFFFFLL;
}
