/*
 * XREFs of ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002A0A4
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180001230 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017710 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180084F40 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

void __fastcall CAudioDGProcess::FreeADGProcessBindingHandle(void *a1)
{
  unsigned int v1; // eax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = a1;
  v1 = RpcBindingFree(&Binding);
  if ( v1
    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, v1);
  }
}
