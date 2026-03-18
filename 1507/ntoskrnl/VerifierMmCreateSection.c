/*
 * XREFs of VerifierMmCreateSection @ 0x14075372C
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmCreateSection(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        void *a8)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  return pXdvMmCreateSection(a1, a2, a3, a4, a5, a6, a7, a8);
}
