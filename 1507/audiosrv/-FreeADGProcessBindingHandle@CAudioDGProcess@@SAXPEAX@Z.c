/*
 * XREFs of ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x180006E30
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001B68 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180006974 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18006BAC0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

void __fastcall CAudioDGProcess::FreeADGProcessBindingHandle(void *a1)
{
  unsigned int v1; // eax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = a1;
  v1 = RpcBindingFree(&Binding);
  if ( v1
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      v1);
  }
}
