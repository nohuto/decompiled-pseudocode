/*
 * XREFs of CmpAddSubKeyToList @ 0x14049B06C
 * Callers:
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpAddToLeaf @ 0x14049B1D0 (CmpAddToLeaf.c)
 *     CmpSelectLeaf @ 0x14060ADA0 (CmpSelectLeaf.c)
 */

char __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  unsigned int *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  char v7; // di
  unsigned __int16 v8; // r14
  _WORD *v9; // rax
  _WORD *v10; // r15
  unsigned int v11; // r13d
  _WORD *v12; // rax
  unsigned int v13; // eax
  _DWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v16; // [rsp+38h] [rbp-30h] BYREF
  _WORD *v17; // [rsp+40h] [rbp-28h]
  unsigned __int16 v18; // [rsp+48h] [rbp-20h]
  unsigned __int16 v19; // [rsp+4Ah] [rbp-1Eh]
  _WORD *v20; // [rsp+50h] [rbp-18h]
  char v21; // [rsp+B0h] [rbp+48h]
  int v23; // [rsp+C8h] [rbp+60h] BYREF
  int v24; // [rsp+CCh] [rbp+64h]

  v15[0] = -1;
  v23 = -1;
  v15[1] = 0;
  v24 = 0;
  v4 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  v18 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v23);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = 1;
  if ( (*(_BYTE *)(v5 + 2) & 0x20) != 0 )
  {
    v18 = 2 * *(_WORD *)(v5 + 72);
    v8 = v18;
    v19 = v18;
    v9 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(v18, 0LL, 540560707LL);
    v20 = v9;
    v10 = v9;
    if ( !v9 )
    {
      v7 = 0;
LABEL_14:
      if ( v6 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
      return v7;
    }
    v21 = 1;
    CmpCopyCompressedName(v9, v18, (unsigned __int8 *)(v6 + 76), *(unsigned __int16 *)(v6 + 72));
  }
  else
  {
    v21 = 0;
    v10 = (_WORD *)(v5 + 76);
    v8 = *(_WORD *)(v5 + 72);
    v18 = v8;
    v19 = v8;
    v20 = (_WORD *)(v5 + 76);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
  v6 = 0LL;
  v11 = *a2;
  v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   *a2,
                   v15);
  v17 = v12;
  if ( !v12 )
    goto LABEL_19;
  if ( *v12 == 26994 )
  {
    v11 = CmpSelectLeaf(BugCheckParameter2, (__int64)&v16);
    if ( v11 == -1 )
      goto LABEL_19;
    v4 = v16;
  }
  v13 = CmpAddToLeaf(BugCheckParameter2, v11);
  if ( v13 == -1 )
  {
LABEL_19:
    v7 = 0;
    goto LABEL_10;
  }
  if ( v4 )
    *v4 = v13;
  else
    *a2 = v13;
LABEL_10:
  if ( v21 )
    (*(void (__fastcall **)(_WORD *, _QWORD))(BugCheckParameter2 + 32))(v10, v8);
  if ( v17 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
    goto LABEL_14;
  }
  return v7;
}
