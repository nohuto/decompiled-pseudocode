/*
 * XREFs of SeTokenImpersonationLevel @ 0x1405A75F8
 * Callers:
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
