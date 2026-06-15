/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180006974
 * Callers:
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180006300 (-WaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x180006E30 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180006E58 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 */

__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // r14
  int v2; // r12d
  signed int ADGProcessBindingHandle; // ebx
  __int64 OwningThread_high; // r9
  __int64 v5; // rcx
  DWORD v7; // eax
  signed int LastError; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  CAudioDGProcess *ExitCode; // [rsp+80h] [rbp+8h] BYREF
  DWORD v13; // [rsp+88h] [rbp+10h]
  int v14; // [rsp+90h] [rbp+18h]
  RPC_BINDING_HANDLE Binding; // [rsp+98h] [rbp+20h] BYREF

  ExitCode = this;
  v1 = g_ADGProcess;
  Binding = 0LL;
  v2 = 0;
  ADGProcessBindingHandle = CAudioDGProcess::WaitForADGStartup((CAudioDGProcess *)g_ADGProcess);
  if ( ADGProcessBindingHandle < 0 )
    goto LABEL_68;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  v2 = 1;
  v14 = 1;
  if ( LOBYTE(v1[2].OwningThread) )
  {
    OwningThread_high = HIDWORD(v1[2].OwningThread);
    ADGProcessBindingHandle = HIDWORD(v1[2].OwningThread);
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_6;
    }
    v10 = 35LL;
LABEL_61:
    WPP_SF_D(*(_QWORD *)(v5 + 16), v10, &WPP_790b6676494959b41396352d3c3efd49_Traceguids, OwningThread_high);
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_6;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Au,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  if ( ADGProcessBindingHandle < 0 )
    goto LABEL_68;
  if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) && (_DWORD)ExitCode == 259 )
  {
    v13 = 0;
    while ( 1 )
    {
      ADGProcessBindingHandle = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, Binding).Pointer;
      if ( ADGProcessBindingHandle >= 0 )
        break;
      v7 = WaitForSingleObjectEx(*(HANDLE *)&v1[2].LockCount, 0, 0);
      v13 = v7;
      if ( v7 != 258 )
      {
        if ( v7 )
          break;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x1Du,
            (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
        }
        if ( !GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              30LL,
              &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
              (unsigned int)ExitCode);
          }
          LODWORD(ExitCode) = GetLastError();
        }
        if ( (_DWORD)ExitCode == 259 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x1Fu,
              (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
          }
          break;
        }
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            32LL,
            &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
            (unsigned int)ExitCode);
        }
        LastError = (int)ExitCode;
        if ( (int)ExitCode > 0 )
        {
          v9 = (unsigned __int16)ExitCode;
          goto LABEL_59;
        }
        goto LABEL_58;
      }
    }
  }
  else
  {
    LastError = GetLastError();
    LODWORD(ExitCode) = LastError;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        33LL,
        &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
        (unsigned int)LastError,
        LastError);
      LastError = (int)ExitCode;
    }
    if ( LastError <= 0 )
    {
LABEL_58:
      ADGProcessBindingHandle = LastError;
    }
    else
    {
      v9 = (unsigned __int16)LastError;
LABEL_59:
      ADGProcessBindingHandle = v9 | 0x80070000;
    }
  }
  HIDWORD(v1[2].OwningThread) = ADGProcessBindingHandle;
  LOBYTE(v1[2].OwningThread) = 1;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v10 = 34LL;
    OwningThread_high = (unsigned int)ADGProcessBindingHandle;
    goto LABEL_61;
  }
LABEL_6:
  if ( ADGProcessBindingHandle >= 0 )
  {
    if ( (struct _GUID *)v5 == &WPP_GLOBAL_Control || (*(_BYTE *)(v5 + 28) & 4) == 0 || *(_BYTE *)(v5 + 25) < 4u )
      goto LABEL_10;
    v11 = 36LL;
    goto LABEL_67;
  }
  if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 4) != 0 && *(_BYTE *)(v5 + 25) >= 4u )
  {
    v11 = 38LL;
LABEL_67:
    WPP_SF_D(
      *(_QWORD *)(v5 + 16),
      v11,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)ADGProcessBindingHandle);
LABEL_68:
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
LABEL_10:
  if ( Binding )
  {
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding);
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v2 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( ADGProcessBindingHandle < 0
    && (struct _GUID *)v5 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v5 + 28) & 4) != 0
    && *(_BYTE *)(v5 + 25) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(v5 + 16),
      37LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)ADGProcessBindingHandle);
  }
  return (unsigned int)ADGProcessBindingHandle;
}
