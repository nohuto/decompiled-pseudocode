/*
 * XREFs of ?ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001DC0
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400023C0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140004574 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004618 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmAppHost::ReportEvent(CDwmAppHost *this, WORD a2, DWORD a3, const unsigned __int16 *a4)
{
  WORD wNumStrings; // si
  HANDLE v7; // rbx
  signed int LastError; // eax
  bool v9; // sf
  LPCWSTR Strings; // [rsp+50h] [rbp-18h] BYREF

  wNumStrings = 0;
  if ( a4 )
  {
    Strings = a4;
    wNumStrings = 1;
  }
  if ( a3 != dword_14000A150 )
  {
    v7 = RegisterEventSourceW(0LL, L"Desktop Window Manager");
    if ( v7 )
      goto LABEL_17;
    LastError = GetLastError();
    v9 = LastError < 0;
    if ( LastError > 0 )
      v9 = 1;
    if ( !v9 )
    {
LABEL_17:
      if ( !ReportEventW(v7, a2, 0, a3, 0LL, wNumStrings, 0, &Strings, 0LL) )
        GetLastError();
      dword_14000A150 = a3;
    }
    if ( v7 )
      DeregisterEventSource(v7);
  }
}
