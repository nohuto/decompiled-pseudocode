/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x1800330E8
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001E10 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18003375C (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this)
{
  void *v2; // rcx
  unsigned int v3; // ebx
  void *v4; // rax
  DWORD v5; // eax
  signed int LastError; // eax
  TraceLoggingHProvider v8; // rcx
  HANDLE v9[3]; // [rsp+30h] [rbp-18h] BYREF
  DWORD ExitCode; // [rsp+50h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 11);
  v3 = -2004287472;
  if ( !v2 )
    goto LABEL_22;
  v4 = (void *)*((_QWORD *)this + 13);
  v9[1] = v2;
  v9[0] = v4;
  v5 = WaitForMultipleObjectsEx(2u, v9, 0, 0xFFFFFFFF, 0);
  if ( !v5 )
    return 0;
  if ( v5 == 1 )
  {
    if ( !GetExitCodeProcess(*((HANDLE *)this + 11), &ExitCode) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids, v3);
        v8 = WPP_GLOBAL_Control;
      }
      goto LABEL_20;
    }
    v8 = WPP_GLOBAL_Control;
    if ( ExitCode != -1073740760 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids, ExitCode);
        v8 = WPP_GLOBAL_Control;
      }
      v3 = -2147467259;
LABEL_20:
      if ( (v3 & 0x80000000) == 0 )
        return v3;
      goto LABEL_23;
    }
    v3 = -2147024319;
  }
  else
  {
LABEL_22:
    v8 = WPP_GLOBAL_Control;
  }
LABEL_23:
  if ( v8 != (TraceLoggingHProvider)&WPP_GLOBAL_Control && (*((_BYTE *)v8 + 28) & 4) != 0 && *((_BYTE *)v8 + 25) >= 2u )
    WPP_SF_D(*((_QWORD *)v8 + 2), 23LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids, v3);
  return v3;
}
