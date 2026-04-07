/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003F790
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180021C48 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002CF00 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800464F4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003C544 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 (__fastcall ***v5)(_QWORD, __int64, char *); // rdi
  int v6; // eax
  int v7; // eax
  char v8; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v9[7]; // [rsp+31h] [rbp-1Fh] BYREF
  int v10; // [rsp+38h] [rbp-18h] BYREF
  int v11; // [rsp+3Ch] [rbp-14h]
  BOOL IsLogonDesktop; // [rsp+40h] [rbp-10h]

  v11 = 0;
  IsLogonDesktop = 0;
  v10 = 16;
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 0;
  if ( GetSystemMetrics(4096) )
  {
    v9[0] = 0;
    v8 = 0;
    v5 = (__int64 (__fastcall ***)(_QWORD, __int64, char *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                                 + 7)
                                                                                              + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
    v6 = (**v5)(v5, 1LL, v9);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xE2u);
      return v3;
    }
    v7 = (**v5)(v5, 2LL, &v8);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xE3u);
      return v3;
    }
    if ( v9[0] )
    {
      v11 = 3;
      IsLogonDesktop = CDesktopManager::IsLogonDesktop(a1);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) = 1;
    }
    else
    {
      v11 = (v8 != 0) + 1;
    }
  }
  v2 = MilResource_SendCommand(&v10, 0xCu, *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xF6u);
  return v3;
}
