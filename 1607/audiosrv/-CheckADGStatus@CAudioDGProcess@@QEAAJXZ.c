/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017008
 * Callers:
 *     AudioServerInitialize @ 0x18000CF80 (AudioServerInitialize.c)
 * Callees:
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180016F6C (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017710 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rsi
  signed int result; // eax
  int OwningThread_high; // ebx
  CAudioSession *v4; // rcx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rdx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  signed int v10; // [rsp+38h] [rbp-39h] BYREF
  DWORD ExitCode; // [rsp+3Ch] [rbp-35h] BYREF
  int v12; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  signed int *v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]

  v15 = -2LL;
  v1 = g_ADGProcess;
  result = CAudioDGProcess::WaitForADGStartup((CAudioDGProcess *)g_ADGProcess, &ExitCode);
  v10 = result;
  if ( result >= 0 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 48);
    v14 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( LOBYTE(v1[2].OwningThread) )
    {
      OwningThread_high = HIDWORD(v1[2].OwningThread);
      v10 = OwningThread_high;
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control )
      {
LABEL_10:
        if ( OwningThread_high < 0 )
        {
          if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)v4 + 2),
              38LL,
              &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
              (unsigned int)OwningThread_high);
            OwningThread_high = v10;
          }
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStatus");
            v12 = 619;
            v18 = &v12;
            v19 = 4;
            v20 = 0;
            v21 = &v10;
            v22 = 4;
            v23 = 0;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v8, v9, 5u, &pData);
            OwningThread_high = v10;
          }
        }
        if ( v14 )
          LeaveCriticalSection(lpCriticalSection);
        return OwningThread_high;
      }
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_6:
        if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)v4 + 2),
            37LL,
            &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
            (unsigned int)OwningThread_high);
          OwningThread_high = v10;
          v4 = WPP_GLOBAL_Control;
        }
        goto LABEL_10;
      }
      v7 = 36LL;
    }
    else
    {
      if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) && ExitCode == 259 )
      {
        OwningThread_high = CAudioDGProcess::CheckADGStartupStatus((CAudioDGProcess *)v1);
        v10 = OwningThread_high;
      }
      else
      {
        OwningThread_high = GetLastError();
        ExitCode = OwningThread_high;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
          OwningThread_high = ExitCode;
        }
        if ( OwningThread_high > 0 )
          OwningThread_high = (unsigned __int16)OwningThread_high | 0x80070000;
        v10 = OwningThread_high;
      }
      HIDWORD(v1[2].OwningThread) = OwningThread_high;
      LOBYTE(v1[2].OwningThread) = 1;
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control )
        goto LABEL_10;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        goto LABEL_6;
      v7 = 35LL;
    }
    WPP_SF_D(*((_QWORD *)v4 + 2), v7, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, (unsigned int)OwningThread_high);
    v4 = WPP_GLOBAL_Control;
    OwningThread_high = v10;
    goto LABEL_6;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
      (unsigned int)result);
    result = v10;
  }
  if ( (unsigned int)hProvider > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStatus");
    v12 = 583;
    v18 = &v12;
    v19 = 4;
    v20 = 0;
    v21 = &v10;
    v22 = 4;
    v23 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v5, v6, 5u, &pData);
    return v10;
  }
  return result;
}
