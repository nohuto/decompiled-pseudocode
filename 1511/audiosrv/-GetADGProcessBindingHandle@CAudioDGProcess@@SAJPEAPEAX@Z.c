/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180033C58
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001E10 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18003375C (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18006A7C0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS v2; // ebx
  TraceLoggingHProvider v3; // rcx
  bool v4; // cc
  RPC_WSTR StringBinding; // [rsp+40h] [rbp+8h] BYREF

  *Binding = 0LL;
  StringBinding = 0LL;
  v2 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &StringBinding);
  if ( !v2 )
  {
    v2 = RpcBindingFromStringBindingW(StringBinding, Binding);
    RpcStringFreeW(&StringBinding);
    if ( !v2 )
      goto LABEL_3;
  }
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)v2);
LABEL_3:
    v3 = WPP_GLOBAL_Control;
  }
  v4 = v2 <= 0;
  if ( v2 < 0 )
  {
    if ( v3 != (TraceLoggingHProvider)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 4) != 0 && *((_BYTE *)v3 + 25) >= 2u )
      WPP_SF_D(*((_QWORD *)v3 + 2), 11LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids, (unsigned int)v2);
    v4 = v2 <= 0;
  }
  if ( !v4 )
    return (unsigned __int16)v2 | 0x80070000;
  return (unsigned int)v2;
}
