/*
 * XREFs of CmpDuplicateKey @ 0x1405E0AE4
 * Callers:
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpDuplicateIndex @ 0x1405E3E4C (CmpDuplicateIndex.c)
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
  int v12; // eax
  int v13; // eax
  char v15; // [rsp+28h] [rbp-40h]
  ULONG_PTR v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = -1;
  v18 = -1;
  v4 = a2;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v17);
  v8 = (_DWORD *)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  LODWORD(v16) = 0;
  v10 = CmpCopyKeyPartial(BugCheckParameter2, v4, BugCheckParameter2, *(_DWORD *)(v7 + 16), 6, v15, v16);
  *a3 = v10;
  if ( v10 == -1 )
    goto LABEL_4;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v10, &v18);
  v6 = (_DWORD *)v11;
  if ( !v11 )
  {
LABEL_6:
    CmpFreeKeyByCell(BugCheckParameter2, *a3, 0);
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
    v12 = CmpDuplicateIndex(BugCheckParameter2);
    v6[7] = v12;
    if ( v12 == -1 )
      goto LABEL_6;
  }
  v6[5] = v8[5];
  v6[8] = v8[8];
  v13 = v8[6];
  v9 = 0;
  v6[6] = v13;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
  return v9;
}
