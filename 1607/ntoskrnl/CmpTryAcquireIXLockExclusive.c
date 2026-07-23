/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x140401F50
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
