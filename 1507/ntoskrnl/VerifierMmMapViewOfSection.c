/*
 * XREFs of VerifierMmMapViewOfSection @ 0x140753B88
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmMapViewOfSection(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  return pXdvMmMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
