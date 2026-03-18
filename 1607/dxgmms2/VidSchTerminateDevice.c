/*
 * XREFs of VidSchTerminateDevice @ 0x1C0040DE0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0040484 (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C000F050 (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C001D204 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     Template_ppqpttq @ 0x1C0022920 (Template_ppqpttq.c)
 *     VidSchControlVSyncDevice @ 0x1C0040980 (VidSchControlVSyncDevice.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C0040ED0 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(char *P, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  void *v6; // rdx
  bool v7; // bp
  bool v8; // bl
  HANDLE CurrentProcessId; // rax
  __int64 v10; // r8

  if ( P )
  {
    v3 = *((_QWORD *)P + 4);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2672), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)P + 310, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2672));
    VidSchFlushDevice((int)P);
    if ( (*((_DWORD *)P + 12) & 1) != 0 )
    {
      v6 = (void *)*((_QWORD *)P + 2);
      if ( v6 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v3 + 8), v6);
        *((_QWORD *)P + 2) = 0LL;
        if ( bTracingEnabled )
        {
          v7 = (*((_DWORD *)P + 12) & 4) != 0;
          v8 = (*((_DWORD *)P + 12) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            Template_ppqpttq(
              *(_QWORD *)(v3 + 16),
              &EventDestroyDevice,
              v10,
              CurrentProcessId,
              *(_QWORD *)(v3 + 16),
              -1,
              P,
              v8,
              v7);
        }
      }
    }
    if ( *((_DWORD *)P + 242) )
    {
      *((_DWORD *)P + 242) = 1;
      VidSchControlVSyncDevice((__int64)P, 4LL, 0);
    }
    if ( P[200] )
      VidSchiCloseProcessAdapterInfo(*((_QWORD *)P + 5), v3);
    ExDeleteResourceLite((PERESOURCE)(P + 864));
    VidSchiDecrementDeviceReference(P, 0);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
