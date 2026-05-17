/*
 * XREFs of RtlIsDosDeviceName_U @ 0x180010180
 * Callers:
 *     BaseIsThisAConsoleName @ 0x18010312C (BaseIsThisAConsoleName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E290 (RtlpIsDosDeviceName_Ustr.c)
 */

__int64 __fastcall RtlIsDosDeviceName_U(__int64 a1)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)RtlInitUnicodeStringEx(v2, a1) < 0 )
    return 0LL;
  else
    return RtlpIsDosDeviceName_Ustr(v2);
}
