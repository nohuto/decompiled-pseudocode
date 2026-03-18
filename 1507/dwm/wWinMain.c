/*
 * XREFs of wWinMain @ 0x140001B70
 * Callers:
 *     __wmainCRTStartup @ 0x140002DD0 (__wmainCRTStartup.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1400019F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001AC0 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister @ 0x140001D70 (McGenEventRegister.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022B0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002AB0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     IsImmDisableIMEPresent @ 0x140003CA4 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x140003DA0 (IsCreateAppChromePresent.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  int v7; // ebx
  int v8; // r9d
  CDwmAppHost *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  signed int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  CDwmAppHost *v15; // rcx
  int v16; // eax
  CDwmAppHost *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_14000A8A0 & 1) == 0 )
  {
    dword_14000A094 = -2147024348;
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
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v19 = 107;
      if ( v7 >= 0 )
        v7 = -2003304445;
      v8 = v7;
      goto LABEL_28;
    }
  }
  SetErrorMode(0xC001u);
  v7 = WerSetFlags(0x28u);
  if ( v7 == -2147467263 )
    v7 = 0;
  if ( v7 >= 0 )
  {
    SetLastError(0);
    if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
    {
      v12 = GetLastError();
      v7 = v12;
      if ( v12 > 0 )
        v7 = (unsigned __int16)v12 | 0x80070000;
      v19 = 140;
      if ( v7 >= 0 )
        v7 = -2003304445;
      v8 = v7;
      goto LABEL_28;
    }
    McGenEventRegister(
      &Microsoft_Windows_Dwm_Dwm_Provider,
      v11,
      &Microsoft_Windows_Dwm_Dwm_Provider_Context,
      &Microsoft_Windows_Dwm_DwmHandle);
    McGenEventRegister(
      &Microsoft_Windows_Dwm_Udwm_Provider,
      v13,
      &Microsoft_Windows_Dwm_Udwm_Provider_Context,
      &Microsoft_Windows_Dwm_UdwmHandle);
    McGenEventRegister(
      &WERSVC_TRIGGER_PROVIDER_GUID,
      v14,
      &WERSVC_TRIGGER_PROVIDER_GUID_Context,
      &Microsoft_Windows_Feedback_Service_TriggerProviderHandle);
    if ( (unsigned __int8)IsCreateAppChromePresent() || (v16 = CheckForDwmGroupSid(), v7 = v16, v16 >= 0) )
    {
      v16 = CDwmAppHost::Initialize(v15, hInstance);
      v7 = v16;
      if ( v16 >= 0 )
      {
        v16 = CDwmAppHost::Run(v17);
        v7 = v16;
        if ( v16 >= 0 )
          goto LABEL_29;
        v19 = 182;
      }
      else
      {
        v19 = 180;
      }
    }
    else
    {
      v19 = 177;
    }
    v8 = v16;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, &dword_14000A088, 4u, v8, v19);
    goto LABEL_29;
  }
  MilInstrumentationCheckHR(0x14u, &dword_14000A088, 4u, v7, 0x80u);
LABEL_29:
  CDwmAppHost::Shutdown(v9, (unsigned int)v7, v10);
  return v7;
}
