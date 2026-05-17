/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18007B230
 * Callers:
 *     BaseIsThisAConsoleName @ 0x1800F8798 (BaseIsThisAConsoleName.c)
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180017960 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  __m128i v2; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)&v2, a1) < 0 )
    return 0LL;
  else
    return RtlpIsDosDeviceName_Ustr(&v2);
}
