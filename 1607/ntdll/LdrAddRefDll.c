/*
 * XREFs of LdrAddRefDll @ 0x180039C10
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D450 (TppAlpcpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     TppExecuteWaitCallback @ 0x18003AD44 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18003B190 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084250 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180031C40 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C80 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007E408 (LdrpPinModule.c)
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
      Count = LdrpIncrementModuleLoadCount(BaseAddress);
    else
      Count = LdrpPinModule(BaseAddress);
    LoadedDllByHandle = Count;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
