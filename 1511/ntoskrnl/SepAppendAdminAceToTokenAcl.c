/*
 * XREFs of SepAppendAdminAceToTokenAcl @ 0x1404C5FA8
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepAppendAdminAceToTokenAcl(__int64 a1)
{
  return SepAppendAceToTokenObjectAcl(a1, 8, SeAliasAdminsSid);
}
