/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180006E58
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001B68 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180006974 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18006BAC0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS v2; // ebx
  __int64 v3; // rcx
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
  v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)v2);
LABEL_3:
    v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v4 = v2 <= 0;
  if ( v2 < 0 )
  {
    if ( (struct _GUID *)v3 != &WPP_GLOBAL_Control && (*(_BYTE *)(v3 + 28) & 4) != 0 && *(_BYTE *)(v3 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v3 + 16), 11LL, &WPP_790b6676494959b41396352d3c3efd49_Traceguids, (unsigned int)v2);
    v4 = v2 <= 0;
  }
  if ( !v4 )
    return (unsigned __int16)v2 | 0x80070000;
  return (unsigned int)v2;
}
