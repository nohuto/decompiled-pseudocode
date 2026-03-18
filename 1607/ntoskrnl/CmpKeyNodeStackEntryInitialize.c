/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x140581850
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A1B8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BC84 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStack @ 0x14060BF6C (CmpStartKeyNodeStack.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(_DWORD *a1)
{
  memset(a1, 0, 0x20uLL);
  a1[2] = -1;
  return HvpGetCellContextReinitialize((__int64)(a1 + 6));
}
