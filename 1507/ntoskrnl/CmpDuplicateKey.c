/*
 * XREFs of CmpDuplicateKey @ 0x140656794
 * Callers:
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpDuplicateIndex @ 0x14065AFC8 (CmpDuplicateIndex.c)
 */

__int64 __fastcall CmpDuplicateKey(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  _DWORD *v6; // rsi
  __int64 v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  char v16; // [rsp+28h] [rbp-40h]
  ULONG_PTR v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v18 = -1;
  v19 = -1;
  v4 = a2;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v18);
  v8 = (_DWORD *)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  LODWORD(v17) = 0;
  v10 = CmpCopyKeyPartial(BugCheckParameter2, v4, BugCheckParameter2, *(_DWORD *)(v7 + 16), 6, v16, v17);
  *a3 = v10;
  if ( v10 == -1 )
    goto LABEL_4;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v10, &v19);
  v6 = (_DWORD *)v11;
  if ( !v11 )
  {
LABEL_6:
    CmpFreeKeyByCell(BugCheckParameter2, *a3, 0, v12);
LABEL_4:
    v9 = -1073741670;
    goto LABEL_12;
  }
  if ( v8[7] == -1 )
  {
    *(_DWORD *)(v11 + 28) = -1;
  }
  else
  {
    v13 = CmpDuplicateIndex(BugCheckParameter2);
    v6[7] = v13;
    if ( v13 == -1 )
      goto LABEL_6;
  }
  v6[5] = v8[5];
  v6[8] = v8[8];
  v14 = v8[6];
  v9 = 0;
  v6[6] = v14;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  return v9;
}
