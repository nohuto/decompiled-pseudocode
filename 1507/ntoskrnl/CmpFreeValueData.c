/*
 * XREFs of CmpFreeValueData @ 0x1404A0954
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 * Callees:
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rax
  unsigned __int16 v8; // di
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  ULONG_PTR v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = BugCheckParameter3;
  if ( (unsigned int)a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || (unsigned int)(a3 - 16345) > 0x7FFFC026 )
  {
LABEL_6:
    HvFreeCell(BugCheckParameter2, v4, a3, a4);
    return 1;
  }
  v17 = -1;
  v18 = -1;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v17);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    v10 = *(unsigned int *)(v7 + 4);
    if ( (_DWORD)v10 == -1 )
    {
LABEL_15:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
      goto LABEL_6;
    }
    v13 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v10, &v18);
    if ( v13 )
    {
      while ( v8 < *(_WORD *)(v9 + 2) )
      {
        v14 = *(unsigned int *)(v13 + 4LL * v8);
        if ( (_DWORD)v14 != -1 )
          HvFreeCell(BugCheckParameter2, v14, v11, v12);
        ++v8;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v9 + 4), v15, v16);
      goto LABEL_15;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  }
  return 0;
}
