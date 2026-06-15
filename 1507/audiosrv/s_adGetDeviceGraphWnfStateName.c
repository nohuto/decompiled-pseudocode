/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x18006BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180006BEC (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180006C78 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x180006E30 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180006E58 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall s_adGetDeviceGraphWnfStateName(CAudioDGProcess *a1, __int64 a2, _QWORD *a3)
{
  int ADGProcessBindingHandle; // ebx
  CAudioDGProcess *v6; // rcx
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp+20h] BYREF

  Binding = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::LockADGProcess(a1);
  if ( ADGProcessBindingHandle >= 0 )
  {
    ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
    if ( ADGProcessBindingHandle >= 0 )
    {
      ADGProcessBindingHandle = (unsigned int)NdrClientCall3(
                                                (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                                                6u,
                                                0LL,
                                                Binding,
                                                a2).Pointer;
      if ( ADGProcessBindingHandle >= 0 )
        *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
    }
  }
  v6 = (CAudioDGProcess *)Binding;
  if ( Binding )
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding);
  if ( ADGProcessBindingHandle < 0 )
  {
    CAudioDGProcess::UnlockADGProcess(v6);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x36u,
        (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids,
        ADGProcessBindingHandle);
    }
  }
  return (unsigned int)ADGProcessBindingHandle;
}
