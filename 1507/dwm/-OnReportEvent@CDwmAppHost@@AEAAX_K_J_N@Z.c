/*
 * XREFs of ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x1400046D0
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001130 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140004778 (-ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004830 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

void __fastcall CDwmAppHost::OnReportEvent(CDwmAppHost *this, int a2, unsigned int a3, char a4)
{
  unsigned int v5; // r8d
  const unsigned __int16 *v6; // [rsp+20h] [rbp-18h]

  v5 = HIWORD(a2) | 0x40000000;
  if ( a4 )
    CDwmAppHost::ReportEventWithDword(this, a2, v5, a3);
  else
    CDwmAppHost::ReportEvent(this, a2, v5, 0LL, v6);
}
