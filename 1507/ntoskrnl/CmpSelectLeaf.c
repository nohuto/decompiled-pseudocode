/*
 * XREFs of CmpSelectLeaf @ 0x140533CC8
 * Callers:
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 * Callees:
 *     CmpSplitLeaf @ 0x140409E3C (CmpSplitLeaf.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyInRoot @ 0x1404CAD00 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1404CB110 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpSelectLeaf(ULONG_PTR a1, __int64 a2, const UNICODE_STRING *a3, signed int a4, __int64 *a5)
{
  __int64 v8; // r12
  __int64 v9; // rdi
  int SubKeyInRoot; // eax
  unsigned int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v25[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+58h]

  v27 = a4;
  v25[0] = -1;
  v26 = -1;
  v8 = a4;
  if ( !HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 4LL * a4 + 28), 0, 0LL) )
    return 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(a2 + 4 * v8 + 28), v25);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    SubKeyInRoot = CmpFindSubKeyInRoot(a1, v9, (__int64)a3, 0, &v24);
    v11 = SubKeyInRoot;
    if ( SubKeyInRoot < 0 )
      goto LABEL_33;
    v12 = v24;
    if ( v24 != -1 )
    {
      v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v24, &v26);
      if ( !v13 )
        goto LABEL_33;
      if ( *(_WORD *)(v13 + 2) < 0x3F5u )
      {
        *a5 = v9 + 4 * (v11 + 1LL);
        goto LABEL_8;
      }
      goto LABEL_9;
    }
    v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(
            a1,
            *(unsigned int *)(v9 + 4LL * (unsigned int)SubKeyInRoot + 4),
            &v26);
    if ( !v16 )
      goto LABEL_33;
    v17 = CmpDoCompareKeyName(a1, a3, 0LL, *(_DWORD *)(v16 + 4));
    if ( v17 == 2 )
      break;
    if ( v17 >= 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v26);
      v24 = *(_DWORD *)(v9 + 4LL * v11 + 4);
      v12 = v24;
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v24, &v26);
      if ( !v22 )
        goto LABEL_33;
      if ( *(_WORD *)(v22 + 2) < 0x3F5u )
      {
        v21 = v9 + 4 * (v11 + 1LL);
        goto LABEL_31;
      }
      if ( v11 < (unsigned int)*(unsigned __int16 *)(v9 + 2) - 1 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v26);
        v24 = *(_DWORD *)(v9 + 4LL * (v11 + 1) + 4);
        v12 = v24;
        v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v24, &v26);
        if ( !v23 )
          goto LABEL_33;
        if ( *(_WORD *)(v23 + 2) < 0x3F5u )
        {
          v19 = v11 + 1;
LABEL_29:
          *a5 = v9 + 4 * (v19 + 1);
LABEL_8:
          (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v26);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v25);
          return v12;
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v26);
      if ( v11 )
      {
        v24 = *(_DWORD *)(v9 + 4LL * (v11 - 1) + 4);
        v12 = v24;
        v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v24, &v26);
        if ( !v18 )
          goto LABEL_33;
        if ( *(_WORD *)(v18 + 2) < 0x3F5u )
        {
          v19 = v11 - 1;
          goto LABEL_29;
        }
      }
      else
      {
        v24 = *(_DWORD *)(v9 + 4);
        v12 = v24;
        v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v24, &v26);
        if ( !v20 )
          goto LABEL_33;
        if ( *(_WORD *)(v20 + 2) < 0x3F5u )
        {
          v21 = v9 + 4;
LABEL_31:
          *a5 = v21;
          goto LABEL_8;
        }
      }
    }
LABEL_9:
    v15 = CmpSplitLeaf(a1, *(unsigned int *)(a2 + 4 * v8 + 28), v11, v27);
    if ( v15 == -1 )
      break;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v25);
    *(_DWORD *)(a2 + 4 * v8 + 28) = v15;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v15, v25);
    if ( !v9 )
      break;
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v26);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v26);
LABEL_33:
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v25);
  return 0xFFFFFFFFLL;
}
