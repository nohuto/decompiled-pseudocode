/*
 * XREFs of ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180042AD4
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180079FF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall OpenComposedEvent(int a1, __int64 a2, void **a3)
{
  unsigned int v4; // ebx
  HANDLE v5; // rax
  WCHAR Name[28]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  if ( (int)StringCchPrintfW(Name, 0x1AuLL, L"%s%x", L"DwmComposedEvent_", a1) >= 0 )
  {
    v5 = OpenEventW(0x100000u, 0, Name);
    *a3 = v5;
    if ( !v5 )
    {
      v4 = -2144980991;
      MilInstrumentationCheckHR(0x14u, &dword_1800A3984, 1LL, -2144980991, 0x2Eu);
    }
  }
  return v4;
}
