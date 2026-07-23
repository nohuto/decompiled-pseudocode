/*
 * XREFs of LdrUnloadDll @ 0x180038420
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     RtlWnfDllUnloadCallback @ 0x18000C5F0 (RtlWnfDllUnloadCallback.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800C29C0 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpDecrementModuleLoadCount @ 0x1800384B0 (LdrpDecrementModuleLoadCount.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS LoadedDllByHandle; // ebx
  char v3; // di
  int v5; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180146208 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      LdrpDrainWorkQueue(0);
    }
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)DllHandle, (__int64 *)&BaseAddress, &v5);
    if ( LoadedDllByHandle >= 0 )
    {
      LdrpDecrementModuleLoadCount(BaseAddress);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    if ( !v3 )
      LdrpDropLastInProgressCount();
  }
  return LoadedDllByHandle;
}
