/*
 * XREFs of RtlIsDosDeviceName_U @ 0x180070320
 * Callers:
 *     BaseIsThisAConsoleName @ 0x1800F8DC0 (BaseIsThisAConsoleName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180026A90 (RtlpIsDosDeviceName_Ustr.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx((__int64)v2, a1) < 0 )
    return 0LL;
  else
    return RtlpIsDosDeviceName_Ustr((__int64)v2);
}
