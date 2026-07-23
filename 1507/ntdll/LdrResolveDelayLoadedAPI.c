/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180016DF0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180017030 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800BCC30 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180016B20 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180079C94 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpIsValidSearchOptions @ 0x1800C91D0 (LdrpIsValidSearchOptions.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  void *ForwarderString; // rbx
  int LoadedDllByHandle; // ecx
  ULONGLONG v12; // rcx
  char *v13; // rdi
  __int64 v14; // rax
  char v15; // al
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-28h] BYREF

  ForwarderString = 0LL;
  if ( (unsigned __int8)LdrpIsValidSearchOptions(Flags) && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)ParentModuleBase, (__int64 *)BaseAddress, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1014,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p. Status = 0x%x\n",
          ParentModuleBase,
          LoadedDllByHandle);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v12 = ThunkAddress->u1.ForwarderString - (_QWORD)ParentModuleBase;
      v13 = (char *)BaseAddress[0];
      if ( v12 < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
          v14 = LdrpHandleProtectedDelayload(
                  (__int64)BaseAddress[0],
                  (__int64)DelayloadDescriptor,
                  (__int64)FailureDllHook,
                  (__int64)FailureSystemHook,
                  (__int64)ThunkAddress,
                  Flags);
        else
          v14 = LdrpHandleUnprotectedDelayLoad((int)BaseAddress[0], (int)DelayloadDescriptor, (int)ThunkAddress, Flags);
        ForwarderString = (void *)v14;
      }
      LdrpDereferenceModule(v13);
    }
  }
  return ForwarderString;
}
