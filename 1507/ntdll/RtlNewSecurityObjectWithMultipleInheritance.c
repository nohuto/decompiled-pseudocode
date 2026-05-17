/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x180048C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObjectWithMultipleInheritance(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  return RtlpNewSecurityObject(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL);
}
