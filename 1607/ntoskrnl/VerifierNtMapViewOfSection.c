/*
 * XREFs of VerifierNtMapViewOfSection @ 0x14071C734
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140704240 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierNtMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a10, retaddr);
  return pXdvNtMapViewOfSection(a1, a2, a3, a4);
}
