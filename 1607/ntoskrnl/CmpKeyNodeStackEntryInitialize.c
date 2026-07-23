/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x140581D00
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A26C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BD38 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStack @ 0x14060C020 (CmpStartKeyNodeStack.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(_DWORD *a1)
{
  memset(a1, 0, 0x20uLL);
  a1[2] = -1;
  return HvpGetCellContextReinitialize((__int64)(a1 + 6));
}
