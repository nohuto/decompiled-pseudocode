/*
 * XREFs of CmpRemoveValueFromList @ 0x1404F0AAC
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 * Callees:
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rdx
  ULONG_PTR v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2;
  v7 = *a3 - 1;
  if ( *a3 == 1 )
  {
    HvFreeCell(BugCheckParameter2, a3[1], (__int64)a3, a4);
    a3[1] = -1;
LABEL_7:
    *a3 = v7;
    return 0LL;
  }
  v8 = a3[1];
  LODWORD(v14) = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v8, &v14);
  if ( v9 )
  {
    if ( (unsigned int)v5 < v7 )
    {
      v10 = (_DWORD *)(v9 + 4 * v5);
      do
      {
        v5 = (unsigned int)(v5 + 1);
        *v10++ = *(_DWORD *)(v9 + 4 * v5);
      }
      while ( (unsigned int)v5 < v7 );
    }
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    v11 = a3[1];
    v15 = 0LL;
    v12 = HvReallocateCell(BugCheckParameter2, v11, 4 * v7, 1, &v15, &v14);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    a3[1] = v12;
    goto LABEL_7;
  }
  return 3221225626LL;
}
