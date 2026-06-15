/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180016F6C
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180001230 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017008 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017464 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

DWORD __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this, unsigned int *a2)
{
  void *v3; // rcx
  DWORD result; // eax
  void *v6; // rax
  CAudioSession *v7; // rcx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  DWORD v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  DWORD *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  v3 = (void *)*((_QWORD *)this + 11);
  result = -2004287472;
  v10 = -2004287472;
  if ( v3 )
  {
    v6 = (void *)*((_QWORD *)this + 13);
    Handles[1] = v3;
    Handles[0] = v6;
    result = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( !result )
      return result;
    if ( result != 1 )
      goto LABEL_12;
    if ( !GetExitCodeProcess(*((HANDLE *)this + 11), a2) )
    {
      result = GetLastError();
      if ( (int)result > 0 )
        result = (unsigned __int16)result | 0x80070000;
      v10 = result;
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, result);
LABEL_12:
        v7 = WPP_GLOBAL_Control;
        result = v10;
      }
LABEL_13:
      if ( (result & 0x80000000) == 0 )
        return result;
      goto LABEL_23;
    }
    v7 = WPP_GLOBAL_Control;
    if ( *a2 != -1073740760 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, *a2);
        v7 = WPP_GLOBAL_Control;
      }
      result = -2147467259;
      v10 = -2147467259;
      goto LABEL_13;
    }
    result = -2147024319;
    v10 = -2147024319;
  }
  else
  {
    v7 = WPP_GLOBAL_Control;
  }
LABEL_23:
  if ( v7 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v7 + 28) & 4) != 0 && *((_BYTE *)v7 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v7 + 2), 23LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, result);
    result = v10;
  }
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::WaitForADGStartup");
    v17 = 0;
    v20 = 0;
    v15 = &v11;
    v18 = &v10;
    v11 = 423;
    v16 = 4;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v8, v9, 5u, &pData);
    return v10;
  }
  return result;
}
