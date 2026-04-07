/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180041B98
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18001EEA4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180047864 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800397A0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  unsigned int v2; // ebx
  BOOL IsLogonDesktop; // edi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v7)(_QWORD, __int64, char *); // rsi
  int v8; // eax
  int v9; // eax
  char v10; // [rsp+58h] [rbp+10h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  IsLogonDesktop = 0;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 0;
  if ( GetSystemMetrics(4096) )
  {
    v10 = 0;
    v11 = 0;
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64, char *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                                 + 7)
                                                                                              + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
    v8 = (**v7)(v7, 1LL, &v10);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD5u);
      return v5;
    }
    v9 = (**v7)(v7, 2LL, &v11);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD6u);
      return v5;
    }
    if ( v10 )
    {
      v2 = 3;
      IsLogonDesktop = CDesktopManager::IsLogonDesktop(a1);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 1;
    }
    else
    {
      v2 = (v11 != 0) + 1;
    }
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, BOOL))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                       + 240LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
         v2,
         IsLogonDesktop);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE9u);
  return v5;
}
