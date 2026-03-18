/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022B0
 * Callers:
 *     wWinMain @ 0x140001B70 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1400019F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020B0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002880 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140003B54 (IsDWMGhostHandleGhostMsgPresent.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  CDwmAppHost *v4; // rcx
  int v5; // eax
  int v6; // eax
  signed int LastError; // eax

  if ( (dword_14000A898 & 1) == 0 )
  {
    dword_14000A808 = -2147024348;
    dword_14000A898 |= 1u;
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_14000A820) = GetCurrentThreadId();
  v2 = DwmVersionCheck(1398215484LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v2, 0x1Cu);
    return v3;
  }
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)&qword_14000A848);
  v5 = CDwmAppHost::InitializeWindow(v4);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v5, 0x22u);
    return v3;
  }
  v6 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_14000A828);
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v6, 0x25u);
    return v3;
  }
  SetLastError(0);
  if ( !(unsigned int)RegisterSessionPort(*(&g_dwmAppHost + 1)) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR(0x14u, &dword_14000A808, 1u, v3, 0x28u);
    return v3;
  }
  if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
  {
    DWMGhostInitialize();
    *(&uExitCode + 1) = 1;
  }
  return 0LL;
}
