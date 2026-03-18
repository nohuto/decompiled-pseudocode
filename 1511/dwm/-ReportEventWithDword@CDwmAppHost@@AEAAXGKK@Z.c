/*
 * XREFs of ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x1400048B0
 * Callers:
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001A30 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140004754 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003130 (__security_check_cookie.c)
 *     ?ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x1400047F8 (-ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140004928 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall CDwmAppHost::ReportEventWithDword(CDwmAppHost *this, unsigned __int16 a2, unsigned int a3)
{
  CDwmAppHost *v5; // rcx
  wchar_t Buffer; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+32h] [rbp-26h]
  __int64 v8; // [rsp+3Ah] [rbp-1Eh]
  int v9; // [rsp+42h] [rbp-16h]

  Buffer = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  StringCchPrintfW(&Buffer, 0xBuLL, L"0x%x");
  CDwmAppHost::ReportEvent(v5, a2, a3, &Buffer);
}
