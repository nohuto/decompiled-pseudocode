/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180031DC0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180031C4C (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800C9950 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180081FEC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpIsValidSearchOptions @ 0x1800D1CB0 (LdrpIsValidSearchOptions.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v6; // r15d
  int v7; // r12d
  void *ForwarderString; // rbx
  ULONGLONG v11; // rcx
  PVOID v12; // rdi
  __int64 v13; // rax
  char v14; // al
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = (int)FailureSystemHook;
  v7 = (int)FailureDllHook;
  ForwarderString = 0LL;
  if ( (unsigned __int8)LdrpIsValidSearchOptions(Flags) && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    if ( (int)LdrpFindLoadedDllByHandle(ParentModuleBase, BaseAddress, 0LL) < 0 )
    {
      v14 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1014,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p. Status = 0x%x\n");
        v14 = LdrpDebugFlags;
      }
      if ( (v14 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v11 = ThunkAddress->u1.ForwarderString - (_QWORD)ParentModuleBase;
      v12 = BaseAddress[0];
      if ( v11 < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
          v13 = LdrpHandleProtectedDelayload(
                  BaseAddress[0],
                  (_DWORD)DelayloadDescriptor,
                  v7,
                  v6,
                  (__int64)ThunkAddress,
                  Flags);
        else
          v13 = LdrpHandleUnprotectedDelayLoad((int)BaseAddress[0], (int)DelayloadDescriptor, (int)ThunkAddress, Flags);
        ForwarderString = (void *)v13;
      }
      LdrpDereferenceModule(v12);
    }
  }
  return ForwarderString;
}
