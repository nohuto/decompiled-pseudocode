/*
 * XREFs of wWinMain @ 0x140001C10
 * Callers:
 *     __wmainCRTStartup @ 0x140002E50 (__wmainCRTStartup.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001B60 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister @ 0x140001DA0 (McGenEventRegister.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002310 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400023C0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002B30 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     IsImmDisableIMEPresent @ 0x140003C64 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x140003D60 (IsCreateAppChromePresent.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  HANDLE CurrentProcess; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  CDwmAppHost *v10; // rcx
  int v11; // eax
  int v12; // eax
  CDwmAppHost *v13; // rcx
  int v14; // eax
  CDwmAppHost *v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  signed int LastError; // eax
  signed int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_14000A8A0 & 1) == 0 )
  {
    dword_14000A164 = -2147024348;
    dword_14000A8A0 |= 1u;
  }
  ProcessInformation[0] = 1;
  CurrentProcess = GetCurrentProcess();
  SetPriorityClass(CurrentProcess, 0x80u);
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, ProcessInformation, 4u);
  if ( (unsigned __int8)IsImmDisableIMEPresent() )
  {
    SetLastError(0);
    if ( !ImmDisableIME(0xFFFFFFFF) )
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      v21 = 107;
      if ( v6 >= 0 )
        v6 = -2003304445;
      goto LABEL_29;
    }
  }
  SetErrorMode(0xC001u);
  v6 = WerSetFlags(0x28u);
  if ( v6 == -2147467263 )
    v6 = 0;
  if ( v6 < 0 )
  {
    v21 = 128;
LABEL_29:
    v17 = v6;
    goto LABEL_14;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v20 = GetLastError();
    v6 = v20;
    if ( v20 > 0 )
      v6 = (unsigned __int16)v20 | 0x80070000;
    v21 = 140;
    if ( v6 >= 0 )
      v6 = -2003304445;
    goto LABEL_29;
  }
  McGenEventRegister(
    &Microsoft_Windows_Dwm_Dwm_Provider,
    v7,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context,
    &Microsoft_Windows_Dwm_DwmHandle);
  McGenEventRegister(
    &Microsoft_Windows_Dwm_Udwm_Provider,
    v8,
    &Microsoft_Windows_Dwm_Udwm_Provider_Context,
    &Microsoft_Windows_Dwm_UdwmHandle);
  McGenEventRegister(
    &WERSVC_TRIGGER_PROVIDER_GUID,
    v9,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context,
    &Microsoft_Windows_Feedback_Service_TriggerProviderHandle);
  if ( !(unsigned __int8)IsCreateAppChromePresent() )
  {
    v11 = CheckForDwmGroupSid();
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_14000A158, 4u, v11, 0x9Au);
      goto LABEL_15;
    }
  }
  v12 = CDwmAppHost::Initialize(v10, hInstance);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_14000A158, 4u, v12, 0x9Du);
    goto LABEL_15;
  }
  v14 = CDwmAppHost::Run(v13);
  v6 = v14;
  if ( v14 < 0 )
  {
    v21 = 159;
    v17 = v14;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, &dword_14000A158, 4u, v17, v21);
  }
LABEL_15:
  CDwmAppHost::Shutdown(v15, (unsigned int)v6, v16);
  return v6;
}
