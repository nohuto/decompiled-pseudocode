/*
 * XREFs of MiLockSetPfnPriority @ 0x1400AA598
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, char a2)
{
  __int64 result; // rax

  MiLockPageAtDpcInline(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(a1 + 35) ^= (*(_BYTE *)(a1 + 35) ^ a2) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
