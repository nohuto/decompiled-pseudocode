/*
 * XREFs of VerifierNtCreateSection @ 0x14071C6D4
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140704240 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierNtCreateSection(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  return pXdvNtCreateSection(a1, a2, a3, a4);
}
