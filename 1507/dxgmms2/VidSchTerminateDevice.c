/*
 * XREFs of VidSchTerminateDevice @ 0x1C002E0F0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00382EC (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0001150 (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C000E08C (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     Template_ppqptt @ 0x1C0013E8C (Template_ppqptt.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C002E000 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchTerminateContext @ 0x1C002E1C0 (VidSchTerminateContext.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C0077CE0 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  struct _VIDSCH_CONTEXT *v6; // rcx
  __int64 v8; // rax
  _OWORD *v9; // rdx
  bool v10; // bp
  bool v11; // si
  HANDLE CurrentProcessId; // rax
  __int64 v13; // r8

  if ( P )
  {
    v5 = *((_QWORD *)P + 4);
    _InterlockedCompareExchange((volatile signed __int32 *)P + 280, 1, 0);
    VidSchFlushDevice((int)P);
    v6 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)P + 8);
    if ( v6 )
    {
      VidSchTerminateContext(v6);
      *((_QWORD *)P + 8) = 0LL;
    }
    if ( (*((_DWORD *)P + 12) & 1) != 0 )
    {
      v9 = (_OWORD *)*((_QWORD *)P + 2);
      if ( v9 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v5 + 8), v9);
        *((_QWORD *)P + 2) = 0LL;
        if ( bTracingEnabled )
        {
          v10 = (*((_DWORD *)P + 12) & 4) != 0;
          v11 = (*((_DWORD *)P + 12) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            Template_ppqptt(
              *(_QWORD *)(v5 + 16),
              &EventDestroyDevice,
              v13,
              CurrentProcessId,
              *(_QWORD *)(v5 + 16),
              -1,
              P,
              v11,
              v10);
        }
      }
    }
    if ( *((_DWORD *)P + 212) )
    {
      *((_DWORD *)P + 212) = 1;
      VidSchControlVSyncDevice(P, 3LL, 0LL);
    }
    if ( P[208] )
      VidSchiCloseProcessAdapterInfo(*((_QWORD *)P + 5), (unsigned int *)v5);
    ExDeleteResourceLite((PERESOURCE)(P + 744));
    VidSchiDecrementDeviceReference(P, 0);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
