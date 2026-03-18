/*
 * XREFs of CmpFreeValueData @ 0x1403D96C0
 * Callers:
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x14050F7B0 (CmpCopyValue.c)
 * Callees:
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rax
  unsigned __int16 v7; // di
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r14
  ULONG_PTR v11; // rdx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = BugCheckParameter3;
  if ( a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_6:
    HvFreeCell(BugCheckParameter2, v3);
    return 1;
  }
  v12 = -1;
  v13 = -1;
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v12);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    v9 = *(unsigned int *)(v6 + 4);
    if ( (_DWORD)v9 == -1 )
    {
LABEL_15:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v12);
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v9, &v13);
    if ( v10 )
    {
      while ( v7 < *(_WORD *)(v8 + 2) )
      {
        v11 = *(unsigned int *)(v10 + 4LL * v7);
        if ( (_DWORD)v11 != -1 )
          HvFreeCell(BugCheckParameter2, v11);
        ++v7;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v8 + 4));
      goto LABEL_15;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v12);
  }
  return 0;
}
