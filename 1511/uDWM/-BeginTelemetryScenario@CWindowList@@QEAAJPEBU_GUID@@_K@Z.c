/*
 * XREFs of ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180032EA0
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18000B760 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180092108 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CWindowList::BeginTelemetryScenario(CWindowList *this, struct _GUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct MIL_CHANNEL__ *v7; // rcx
  int v8; // eax
  int appended; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int16 v15; // [rsp+58h] [rbp-30h]

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
  {
    memset_0(&v13, 0, 0x30uLL);
    v13 = 4198400;
    v14 = a3;
    v15 = 48;
    v7 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v12 = 13;
    v8 = MilChannel_BeginCommand(v7, &v12, 4u, 0x40u);
    v3 = v8;
    if ( v8 >= 0 )
    {
      appended = MilChannel_AppendCommandData(
                   *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                   &v13,
                   0x30u);
      v3 = appended;
      if ( appended >= 0 )
      {
        v10 = MilChannel_AppendCommandData(
                *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a2,
                0x10u);
        v3 = v10;
        if ( v10 >= 0 )
        {
          v11 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
          v3 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xF1Eu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xF1Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0xF1Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xF1Bu);
    }
  }
  return v3;
}
