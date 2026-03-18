/*
 * XREFs of CmpSetValueKeyNew @ 0x1404A10D0
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        int a5,
        void *a6,
        size_t a7,
        unsigned int a8)
{
  __int64 v8; // rsi
  unsigned int v11; // edi
  size_t Size; // [rsp+20h] [rbp-18h]

  v8 = a2 + 36;
  if ( *(_DWORD *)(a2 + 36) && !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0, 0LL) )
    return 3221225853LL;
  LODWORD(Size) = a7;
  v11 = CmpAddValueKeyNew(BugCheckParameter2, a3, a5, a6, Size, a8);
  if ( v11 != -1 )
  {
    if ( (int)CmpAddValueToListEx(BugCheckParameter2, v8, 1) >= 0 )
      return 0LL;
    CmpFreeValue(BugCheckParameter2, v11);
  }
  return 3221225626LL;
}
