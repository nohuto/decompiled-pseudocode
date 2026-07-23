/*
 * XREFs of LdrAddRefDll @ 0x18007CCA0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000B324 (TppExecuteWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x1800782D0 (TppJobpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180020924 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v2; // di
  NTSTATUS LoadedDllByHandle; // ebx
  bool v4; // zf
  char *v5; // rdi
  NTSTATUS Count; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)DllHandle, (__int64 *)&BaseAddress, &v8);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = (v2 & 1) == 0;
    v5 = (char *)BaseAddress;
    if ( v4 )
      Count = LdrpIncrementModuleLoadCount((__int64)BaseAddress);
    else
      Count = LdrpPinModule(BaseAddress);
    LoadedDllByHandle = Count;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
