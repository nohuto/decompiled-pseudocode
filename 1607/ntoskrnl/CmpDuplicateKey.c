/*
 * XREFs of CmpDuplicateKey @ 0x1405FECC0
 * Callers:
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpDuplicateIndex @ 0x140609E24 (CmpDuplicateIndex.c)
 */

__int64 __fastcall CmpDuplicateKey(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int *a3)
{
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  __int64 v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+74h] [rbp+Ch]
  int v18; // [rsp+88h] [rbp+20h] BYREF
  int v19; // [rsp+8Ch] [rbp+24h]

  v17 = 0;
  v16 = -1;
  v18 = -1;
  v4 = 0LL;
  v19 = 0;
  v5 = a2;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v16);
  v8 = (_DWORD *)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  v10 = CmpCopyKeyPartial(BugCheckParameter2, v5, BugCheckParameter2, *(_DWORD *)(v7 + 16), 6, v15, 0);
  *a3 = v10;
  if ( v10 == -1 )
    goto LABEL_4;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v10, &v18);
  v4 = (_DWORD *)v11;
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
    v4[7] = v12;
    if ( v12 == -1 )
      goto LABEL_6;
  }
  v4[5] = v8[5];
  v4[8] = v8[8];
  v13 = v8[6];
  v9 = 0;
  v4[6] = v13;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
  return v9;
}
