/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400023C0
 * Callers:
 *     wWinMain @ 0x140001C10 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001DC0 (-ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400021C0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002900 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140003B14 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004618 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2)
{
  CDwmAppHost *v2; // rcx
  int v3; // eax
  int v4; // ebx
  CDwmAppHost *v5; // rcx
  signed int LastError; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( (dword_14000A898 & 1) == 0 )
  {
    dword_14000A808 = -2147024348;
    dword_14000A898 |= 1u;
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_14000A820) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)&qword_14000A848);
  v3 = CDwmAppHost::InitializeWindow(v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 30;
    goto LABEL_18;
  }
  v3 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_14000A828);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 33;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v3, v8);
    return (unsigned int)v4;
  }
  SetLastError(0);
  if ( !(unsigned int)RegisterSessionPort(*(&g_dwmAppHost + 1)) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v4, 0x24u);
  }
  if ( v4 < 0 )
  {
    CDwmAppHost::ReportEventWithDword(v5, 1u, 0xC0002344, v4);
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v4, 0x30u);
    return (unsigned int)v4;
  }
  CDwmAppHost::ReportEvent(v5, 4u, 0x40002343u, 0LL);
  if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
  {
    DWMGhostInitialize();
    *(&uExitCode + 1) = 1;
  }
  return 0LL;
}
