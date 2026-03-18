/*
 * XREFs of SeTokenImpersonationLevel @ 0x14054CA50
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
