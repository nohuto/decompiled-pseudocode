/*
 * XREFs of CmpFreeIndexByCell @ 0x14060A00C
 * Callers:
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 */

void __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  _WORD *v5; // rsi
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v6 = -1;
  v2 = 0LL;
  v3 = BugCheckParameter3;
  v7 = 0;
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v6);
  if ( *v5 == 26994 && v5[1] )
  {
    do
    {
      HvFreeCell(BugCheckParameter2, *(unsigned int *)&v5[2 * v2 + 2]);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < (unsigned __int16)v5[1] );
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
  HvFreeCell(BugCheckParameter2, v3);
}
