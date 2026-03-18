/*
 * XREFs of VerifierSeSinglePrivilegeCheck @ 0x140742534
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 */

BOOLEAN __fastcall VerifierSeSinglePrivilegeCheck(LUID a1, KPROCESSOR_MODE a2)
{
  return pXdvSeSinglePrivilegeCheck(a1, a2);
}
