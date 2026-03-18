/*
 * XREFs of MiIncrementPfn @ 0x140123184
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140122D08 (MiDeleteSessionAddressSpace.c)
 *     MxRelocatePageTables @ 0x14078F670 (MxRelocatePageTables.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 */

__int64 __fastcall MiIncrementPfn(__int64 a1)
{
  __int64 result; // rax

  LOBYTE(result) = MiLockPageInline(a1);
  ++*(_WORD *)(a1 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
