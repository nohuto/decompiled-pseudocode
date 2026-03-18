/*
 * XREFs of MiReturnEnclavePage @ 0x1401DFE5C
 * Callers:
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x14062A128 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = (unsigned __int8)MiLockPageInline(v2);
  *(_QWORD *)(v2 + 24) &= 0xFFFFFFF000000000uLL;
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 0x100uLL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v3);
  return result;
}
