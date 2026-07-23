/*
 * XREFs of VerifierMmProtectMdlSystemAddress @ 0x14071C404
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140704240 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmProtectMdlSystemAddress(__int64 a1, unsigned int a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPageProtection(a2, retaddr);
  return pXdvMmProtectMdlSystemAddress(a1, a2);
}
