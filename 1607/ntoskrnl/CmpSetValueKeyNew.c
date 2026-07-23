/*
 * XREFs of CmpSetValueKeyNew @ 0x1404009D0
 * Callers:
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        size_t a7,
        int a8)
{
  unsigned int *v8; // rsi
  int v11; // eax
  unsigned int v12; // edi
  size_t Size; // [rsp+20h] [rbp-18h]

  v8 = (unsigned int *)(a2 + 36);
  if ( *(_DWORD *)(a2 + 36) && !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40)) )
    return 3221225853LL;
  LODWORD(Size) = a7;
  v11 = CmpAddValueKeyNew(BugCheckParameter2, Size, a8);
  v12 = v11;
  if ( v11 != -1 )
  {
    if ( (int)CmpAddValueToListEx(BugCheckParameter2, v11, a4, a8, v8, 1) >= 0 )
      return 0LL;
    CmpFreeValue(BugCheckParameter2, v12);
  }
  return 3221225626LL;
}
