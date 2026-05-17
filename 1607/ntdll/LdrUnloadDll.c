/*
 * XREFs of LdrUnloadDll @ 0x18002EF70
 * Callers:
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003A050 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     RtlWnfDllUnloadCallback @ 0x180066E20 (RtlWnfDllUnloadCallback.c)
 *     LdrpGetShimEngineInterface @ 0x18007E068 (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D4370 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrUnloadDll(__int64 a1)
{
  int LoadedDllByHandle; // ebx
  __int64 v2; // rdi
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180152408 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v10, &v9);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = v10;
      v3 = 1;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(v10, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
        {
          v3 = 0;
          LdrpDrainWorkQueue(0);
        }
        v2 = v10;
        LdrpDecrementModuleLoadCountEx(v10, 0LL);
        if ( !v3 )
          LdrpDropLastInProgressCount(v6, v5, v7, v8);
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
