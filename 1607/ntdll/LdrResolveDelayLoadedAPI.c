/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x1800319D0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180031778 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800D0E90 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180031C40 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18007B424 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v7; // r12d
  int v8; // r14d
  void *ForwarderString; // rbx
  int v11; // r10d
  char v12; // al
  int LoadedDllByHandle; // ecx
  ULONGLONG v14; // rcx
  PVOID v15; // rdi
  __int64 v16; // rax
  char v18; // al
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v7 = (int)FailureDllHook;
  v8 = (int)DelayloadDescriptor;
  ForwarderString = 0LL;
  if ( (Flags & 0xFFFFDFFF) == 8 )
    goto LABEL_5;
  v11 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v11 = 31488;
  v12 = 0;
  if ( (~v11 & Flags) == 0 )
LABEL_5:
    v12 = 1;
  if ( v12 && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(ParentModuleBase, &BaseAddress, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1071,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p. Status = 0x%x\n",
          ParentModuleBase,
          LoadedDllByHandle);
        v18 = LdrpDebugFlags;
      }
      if ( (v18 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v14 = ThunkAddress->u1.ForwarderString - (_QWORD)ParentModuleBase;
      v15 = BaseAddress;
      if ( v14 < *((unsigned int *)BaseAddress + 16) )
      {
        if ( (*((_DWORD *)BaseAddress + 26) & 0x8000) != 0 )
          v16 = LdrpHandleProtectedDelayload(
                  (int)BaseAddress,
                  v8,
                  v7,
                  (__int64)FailureSystemHook,
                  (__int64)ThunkAddress,
                  Flags);
        else
          v16 = LdrpHandleUnprotectedDelayLoad(
                  (int)BaseAddress,
                  v8,
                  v7,
                  (__int64)FailureSystemHook,
                  (__int64)ThunkAddress,
                  Flags);
        ForwarderString = (void *)v16;
      }
      LdrpDereferenceModule(v15);
    }
  }
  return ForwarderString;
}
