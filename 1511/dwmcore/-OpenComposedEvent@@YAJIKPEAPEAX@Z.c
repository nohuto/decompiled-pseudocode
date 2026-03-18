/*
 * XREFs of ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800AF2B4
 * Callers:
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800A3F70 (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AF354 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall OpenComposedEvent(int a1, __int64 a2, void **a3)
{
  unsigned int v4; // ebx
  HANDLE v5; // rax
  WCHAR Name[28]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  if ( (int)StringCchPrintfW(Name, 0x1AuLL, L"%s%x", L"DwmComposedEvent_", a1) >= 0 )
  {
    v5 = OpenEventW(2u, 0, Name);
    *a3 = v5;
    if ( !v5 )
    {
      v4 = -2144980991;
      MilInstrumentationCheckHR(0x14u, &dword_1801740A0, 1u, -2144980991, 0x2Eu);
    }
  }
  return v4;
}
