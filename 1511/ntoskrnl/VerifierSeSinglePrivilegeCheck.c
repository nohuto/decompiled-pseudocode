/*
 * XREFs of VerifierSeSinglePrivilegeCheck @ 0x1406C0CF4
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

BOOLEAN __fastcall VerifierSeSinglePrivilegeCheck(LUID a1, KPROCESSOR_MODE a2)
{
  return pXdvSeSinglePrivilegeCheck(a1, a2);
}
