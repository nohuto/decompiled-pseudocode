/*
 * XREFs of CmpFreeValueData @ 0x1404008CC
 * Callers:
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 * Callees:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v4; // ebp
  unsigned __int16 v6; // di
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r14
  ULONG_PTR v11; // rdx
  _DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v4 = BugCheckParameter3;
  if ( a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_6:
    HvFreeCell(BugCheckParameter2, v4);
    return 1;
  }
  v6 = 0;
  v13 = -1;
  v14 = 0;
  v12[1] = 0;
  v12[0] = -1;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v13);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(unsigned int *)(v7 + 4);
    if ( (_DWORD)v9 == -1 )
    {
LABEL_15:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v9,
            v12);
    if ( v10 )
    {
      while ( v6 < *(_WORD *)(v8 + 2) )
      {
        v11 = *(unsigned int *)(v10 + 4LL * v6);
        if ( (_DWORD)v11 != -1 )
          HvFreeCell(BugCheckParameter2, v11);
        ++v6;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v12);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v8 + 4));
      goto LABEL_15;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
  }
  return 0;
}
