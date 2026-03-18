/*
 * XREFs of SepAppendAdminAceToTokenAcl @ 0x1404F12F0
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepAppendAdminAceToTokenAcl(__int64 a1)
{
  return SepAppendAceToTokenObjectAcl(a1, 8, SeAliasAdminsSid);
}
