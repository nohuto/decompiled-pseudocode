/*
 * XREFs of LdrUnloadDll @ 0x180008CA0
 * Callers:
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     LdrpGetShimEngineInterface @ 0x180080F60 (LdrpGetShimEngineInterface.c)
 *     RtlWnfDllUnloadCallback @ 0x180085BE0 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800CC3C0 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180008D48 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS LoadedDllByHandle; // ebx
  PVOID v2; // rdi
  char v3; // si
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180145248 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v5);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = BaseAddress;
      v3 = 1;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(BaseAddress, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          v3 = 0;
          LdrpDrainWorkQueue(0LL);
        }
        v2 = BaseAddress;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        if ( !v3 )
          LdrpDropLastInProgressCount();
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
