/*
 * XREFs of CmpRemoveSubKey @ 0x1403D7AB8
 * Callers:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvpGetCellContextMove @ 0x140166DBC (HvpGetCellContextMove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1403D9A84 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1403D9BC0 (CmpFindSubKeyInRoot.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  _WORD *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // di
  unsigned __int16 v9; // r14
  _BYTE *v10; // r15
  __int64 v11; // rax
  _WORD *v12; // rsi
  int SubKeyInRoot; // r12d
  __int64 v14; // r9
  bool v15; // zf
  unsigned __int16 v16; // ax
  unsigned int v17; // eax
  size_t v18; // r8
  _WORD *v19; // rdx
  _WORD *v20; // rcx
  unsigned __int16 v21; // ax
  char v23; // [rsp+30h] [rbp-99h]
  int v24; // [rsp+34h] [rbp-95h] BYREF
  int v25; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v27; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-85h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-81h]
  _QWORD v30[2]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-69h]
  int v32; // [rsp+64h] [rbp-65h] BYREF
  __int64 v33; // [rsp+68h] [rbp-61h]
  _BYTE P[112]; // [rsp+70h] [rbp-59h] BYREF

  v26 = a2;
  v25 = -1;
  v24 = -1;
  v31 = -1;
  v27 = -1;
  memset(v30, 0, sizeof(v30));
  v5 = 0LL;
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v25);
  v7 = v6;
  if ( !v6 )
    return v6;
  v8 = 1;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v9 = 2 * *(_WORD *)(v6 + 72);
    v23 = 1;
    LOWORD(v30[0]) = v9;
    WORD1(v30[0]) = v9;
    if ( v9 > 0x64u )
    {
      v30[1] = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
      v10 = (_BYTE *)v30[1];
      if ( !v30[1] )
        goto LABEL_28;
    }
    else
    {
      v10 = P;
      v30[1] = P;
    }
    CmpCopyCompressedName(v10, v9, v7 + 76, *(unsigned __int16 *)(v7 + 72));
  }
  else
  {
    v23 = 0;
    v10 = (_BYTE *)(v6 + 76);
    v9 = *(_WORD *)(v6 + 72);
    LOWORD(v30[0]) = v9;
    WORD1(v30[0]) = v9;
    v30[1] = v6 + 76;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v26, &v25);
  v33 = v11;
  if ( v11 )
  {
    v28 = a3 >> 31;
    LODWORD(BugCheckParameter3) = *(_DWORD *)(v11 + 4LL * (a3 >> 31) + 28);
    v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     (unsigned int)BugCheckParameter3,
                     &v24);
    if ( v12 )
    {
      SubKeyInRoot = 0x80000000;
      if ( *v12 == 26994 )
      {
        SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter2, v12, v30, &v26);
        if ( SubKeyInRoot < 0 )
        {
          v8 = 0;
LABEL_17:
          if ( v12 )
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
          goto LABEL_19;
        }
        v31 = BugCheckParameter3;
        v5 = v12;
        HvpGetCellContextMove(&v27, &v24);
        LODWORD(BugCheckParameter3) = v26;
        v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                         BugCheckParameter2,
                         v26,
                         &v24);
        if ( !v12 )
          goto LABEL_35;
      }
      CmpFindSubKeyInLeafWithStatus(
        BugCheckParameter2,
        (_DWORD)v12,
        (unsigned int)v30,
        (unsigned int)&v26,
        (__int64)&v32);
      v14 = (unsigned int)v32;
      if ( v32 < 0 )
      {
LABEL_35:
        v8 = 0;
      }
      else
      {
        --*(_DWORD *)(v33 + 4LL * v28 + 20);
        v15 = v12[1]-- == 1;
        v16 = v12[1];
        if ( !v15 )
        {
          if ( (unsigned int)v14 >= v16 )
            goto LABEL_15;
          v17 = v16 - (_DWORD)v14;
          if ( *v12 == 26988 )
          {
            v18 = 4LL * v17;
            v19 = &v12[2 * (unsigned int)(v14 + 1) + 2];
            v20 = &v12[2 * v14 + 2];
          }
          else
          {
            v18 = 8LL * v17;
            v19 = &v12[4 * (unsigned int)(v14 + 1) + 2];
            v20 = &v12[4 * v14 + 2];
          }
          goto LABEL_14;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
        v12 = 0LL;
        HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
        if ( !v5 )
          goto LABEL_26;
        v15 = v5[1]-- == 1;
        v21 = v5[1];
        if ( v15 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
          v5 = 0LL;
          HvFreeCell(BugCheckParameter2, v31);
LABEL_26:
          *(_DWORD *)(v33 + 4LL * v28 + 28) = -1;
          goto LABEL_15;
        }
        if ( SubKeyInRoot < (unsigned int)v21 )
        {
          v18 = 4LL * ((unsigned int)v21 - SubKeyInRoot);
          v19 = &v5[2 * (SubKeyInRoot + 1) + 2];
          v20 = &v5[2 * SubKeyInRoot + 2];
LABEL_14:
          memmove(v20, v19, v18);
        }
      }
LABEL_15:
      if ( v5 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      goto LABEL_17;
    }
LABEL_28:
    v8 = 0;
LABEL_19:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
    goto LABEL_20;
  }
  v8 = 0;
LABEL_20:
  if ( v23 && v10 && v9 > 0x64u )
    ExFreePoolWithTag(v10, 0);
  LOBYTE(v6) = v8;
  return v6;
}
