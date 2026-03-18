/*
 * XREFs of MiLockSetPfnPriority @ 0x1400E8410
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 result; // rax

  v3 = a2;
  MiLockPageAtDpcInline(a1, a2, a3);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(a1 + 35) ^= (*(_BYTE *)(a1 + 35) ^ v3) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
