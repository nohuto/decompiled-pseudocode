/*
 * XREFs of GetBootSystemTime @ 0x1407E73E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14011A0F8 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalGetInterruptTranslator @ 0x140553ADC (xHalGetInterruptTranslator.c)
 */

BOOLEAN __fastcall GetBootSystemTime(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  int v7; // ecx
  unsigned __int64 v8; // r9
  __int64 QuadPart; // rbx
  bool v10; // zf
  BOOLEAN result; // al
  LARGE_INTEGER Time; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-28h]
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 2248);
  if ( (*(_BYTE *)(a1 + 2272) & 1) == 0 && !ExpRealTimeIsUniversal )
    v3 += ExpTimeZoneBias;
  v5 = off_1403219B0() - *(_QWORD *)(a1 + 2256);
  v6 = 10000000 * v5;
  if ( is_mul_ok(v5, 0x989680uLL) )
  {
    v7 = 0;
  }
  else
  {
    v6 = -1LL;
    v7 = -1073741675;
  }
  v8 = v6 / v13;
  if ( v7 < 0 )
    v8 = 10000000 * (v5 / v13) + 10000000 * (v5 % v13) / v13;
  QuadPart = v8 + v3;
  v10 = (*(_BYTE *)(a1 + 2272) & 2) == 0;
  Time.QuadPart = QuadPart;
  if ( v10 )
  {
    if ( !ExpRealTimeIsUniversal )
      Time.QuadPart = QuadPart - ExpTimeZoneBias;
    RtlTimeToTimeFields(&Time, &TimeFields);
    result = HalSetRealTimeClock(&TimeFields);
  }
  else
  {
    result = HalQueryRealTimeClock(&TimeFields);
    if ( result )
    {
      result = RtlTimeFieldsToTime(&TimeFields, &Time);
      if ( !result || ExpRealTimeIsUniversal )
        QuadPart = Time.QuadPart;
      else
        QuadPart = ExpTimeZoneBias + Time.QuadPart;
    }
  }
  *a2 = QuadPart;
  return result;
}
