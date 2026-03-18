/*
 * XREFs of ?MetricGetIDLocalized@@YAHIH@Z @ 0x1C00B9DF0
 * Callers:
 *     SetIconMetrics @ 0x1C00B9BDC (SetIconMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall MetricGetIDLocalized(__int64 a1, int a2)
{
  ULONG Value; // [rsp+20h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D0h] BYREF
  WCHAR SourceString[80]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (unsigned int)RtlLoadStringOrError(a1, SourceString, 80LL) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
    a2 = Value;
  }
  else
  {
    Value = a2;
  }
  if ( a2 < 0 )
    return (unsigned int)((720 - a2 * *(unsigned __int16 *)(gpsi + 8678LL)) / 1440);
  return (unsigned int)a2;
}
