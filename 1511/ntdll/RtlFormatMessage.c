/*
 * XREFs of RtlFormatMessage @ 0x1800E52C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x18004A8C0 (RtlFormatMessageEx.c)
 */

__int64 __fastcall RtlFormatMessage(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        _QWORD *a6,
        unsigned __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  return RtlFormatMessageEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL);
}
