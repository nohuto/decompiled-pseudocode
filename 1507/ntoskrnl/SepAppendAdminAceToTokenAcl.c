/*
 * XREFs of SepAppendAdminAceToTokenAcl @ 0x14055A978
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepAppendAdminAceToTokenAcl(__int64 a1)
{
  return SepAppendAceToTokenObjectAcl(a1, 8, SeAliasAdminsSid);
}
