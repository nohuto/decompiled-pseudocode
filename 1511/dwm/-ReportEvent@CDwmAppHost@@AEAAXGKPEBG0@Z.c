/*
 * XREFs of ?ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x1400047F8
 * Callers:
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140004754 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x1400048B0 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     ?Report@CEventLogHandle@@QEAAJGKGPEAPEBG@Z @ 0x1400058A8 (-Report@CEventLogHandle@@QEAAJGKGPEAPEBG@Z.c)
 */

void __fastcall CDwmAppHost::ReportEvent(CDwmAppHost *this, unsigned __int16 a2, unsigned int a3, unsigned __int16 *a4)
{
  unsigned __int16 v4; // si
  CDwmAppHost *v7; // rbx
  signed int LastError; // eax
  bool v9; // sf
  unsigned __int16 *v10; // [rsp+30h] [rbp-18h] BYREF
  CDwmAppHost *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = this;
  v4 = 0;
  if ( a4 )
  {
    v10 = a4;
    v4 = 1;
  }
  if ( a3 != dword_14000A138 )
  {
    v11 = (CDwmAppHost *)RegisterEventSourceW(0LL, L"Desktop Window Manager");
    v7 = v11;
    if ( v11 )
      goto LABEL_8;
    LastError = GetLastError();
    v9 = LastError < 0;
    if ( LastError > 0 )
      v9 = 1;
    if ( !v9 )
    {
LABEL_8:
      CEventLogHandle::Report((CEventLogHandle *)&v11, a2, a3, v4, (const unsigned __int16 **)&v10);
      dword_14000A138 = a3;
    }
    if ( v7 )
      DeregisterEventSource(v7);
  }
}
