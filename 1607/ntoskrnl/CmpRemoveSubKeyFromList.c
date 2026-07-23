/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x1404B82D8
 * Callers:
 *     CmpRemoveSubKey @ 0x1404B8258 (CmpRemoveSubKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvpGetCellContextMove @ 0x140171BBC (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpFindSubKeyInRoot @ 0x1404F5850 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeaf @ 0x140609FE4 (CmpFindSubKeyInLeaf.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  char v3; // si
  _WORD *v7; // r14
  __int64 v8; // rax
  char v9; // r13
  bool v10; // r13
  unsigned int v11; // r12d
  _WORD *v12; // rbx
  int SubKeyInRoot; // r15d
  UNICODE_STRING *p_DestinationString; // r9
  UNICODE_STRING *v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  UNICODE_STRING *v18; // r9
  UNICODE_STRING *v19; // r8
  int SubKeyInLeaf; // eax
  bool v21; // zf
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // ax
  size_t v24; // r8
  _WORD *v25; // rdx
  _WORD *v26; // rcx
  unsigned int v27; // eax
  _DWORD v29[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v30[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v31[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int *v34; // [rsp+A8h] [rbp+48h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+58h]

  v34 = a2;
  v3 = 0;
  v31[1] = 0;
  v31[0] = -1;
  v29[0] = -1;
  v30[0] = -1;
  v29[1] = 0;
  v30[1] = 0;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v31);
  if ( !v8 )
    return v3;
  v9 = *(_BYTE *)(v8 + 2);
  v3 = 1;
  DestinationString.Length = *(_WORD *)(v8 + 72);
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = (wchar_t *)(v8 + 76);
  v10 = (v9 & 0x20) != 0;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
  LODWORD(BugCheckParameter3) = *a2;
  v11 = BugCheckParameter3;
  v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   (unsigned int)BugCheckParameter3,
                   v29);
  if ( !v12 )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *v12 != 26994 )
    goto LABEL_12;
  if ( v10 )
  {
    p_DestinationString = &DestinationString;
    LODWORD(v15) = 0;
  }
  else
  {
    LODWORD(p_DestinationString) = 0;
    v15 = &DestinationString;
  }
  SubKeyInRoot = CmpFindSubKeyInRoot(
                   BugCheckParameter2,
                   (_DWORD)v12,
                   (_DWORD)v15,
                   (_DWORD)p_DestinationString,
                   (__int64)&v33);
  if ( SubKeyInRoot < 0 )
    goto LABEL_9;
  v7 = v12;
  HvpGetCellContextMove((__int64)v30, (__int64)v29);
  LODWORD(BugCheckParameter3) = v33;
  v12 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   v33,
                   v29);
  if ( v12 )
  {
LABEL_12:
    if ( v10 )
    {
      v18 = &DestinationString;
      LODWORD(v19) = 0;
    }
    else
    {
      LODWORD(v18) = 0;
      v19 = &DestinationString;
    }
    SubKeyInLeaf = CmpFindSubKeyInLeaf(BugCheckParameter2, (_DWORD)v12, (_DWORD)v19, (_DWORD)v18, (__int64)&v33);
    v17 = (unsigned int)SubKeyInLeaf;
    if ( SubKeyInLeaf < 0 )
    {
LABEL_9:
      v3 = 0;
      goto LABEL_29;
    }
    v21 = v12[1]-- == 1;
    v22 = v12[1];
    if ( v21 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(BugCheckParameter2 + 16))(
        BugCheckParameter2,
        v29,
        v16,
        v17);
      v12 = 0LL;
      HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
      if ( !v7 )
      {
LABEL_20:
        v11 = -1;
LABEL_28:
        *v34 = v11;
LABEL_29:
        if ( v12 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            v29,
            v16,
            v17);
        goto LABEL_31;
      }
      v21 = v7[1]-- == 1;
      v23 = v7[1];
      if ( v21 )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
        v7 = 0LL;
        HvFreeCell(BugCheckParameter2, v11);
        goto LABEL_20;
      }
      if ( SubKeyInRoot >= (unsigned int)v23 )
        goto LABEL_28;
      v24 = 4LL * ((unsigned int)v23 - SubKeyInRoot);
      v25 = &v7[2 * (SubKeyInRoot + 1) + 2];
      v26 = &v7[2 * SubKeyInRoot + 2];
    }
    else
    {
      if ( (unsigned int)v17 >= v22 )
        goto LABEL_28;
      v27 = v22 - (_DWORD)v17;
      if ( *v12 == 26988 )
      {
        v24 = 4LL * v27;
        v25 = &v12[2 * (unsigned int)(v17 + 1) + 2];
        v26 = &v12[2 * (unsigned int)v17 + 2];
      }
      else
      {
        v24 = 8LL * v27;
        v25 = &v12[4 * (unsigned int)(v17 + 1) + 2];
        v26 = &v12[4 * (unsigned int)v17 + 2];
      }
    }
    memmove(v26, v25, v24);
    goto LABEL_28;
  }
  v3 = 0;
LABEL_31:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
  return v3;
}
