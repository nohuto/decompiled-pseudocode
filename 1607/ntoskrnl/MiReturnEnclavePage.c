/*
 * XREFs of MiReturnEnclavePage @ 0x1401F06EC
 * Callers:
 *     MiAddPagesToEnclave @ 0x14065E1EC (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x14065F89C (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = (unsigned __int8)MiLockPageInline(v2);
  *(_QWORD *)(v2 + 24) &= 0xFFFFFFF000000000uLL;
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 256);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v3);
  return result;
}
