/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x18008B430
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObjectWithMultipleInheritance(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        void *a8,
        __int64 a9)
{
  return RtlpNewSecurityObject(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL);
}
