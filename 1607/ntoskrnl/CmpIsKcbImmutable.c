/*
 * XREFs of CmpIsKcbImmutable @ 0x140403768
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 144LL) & 0x100000) != 0;
}
