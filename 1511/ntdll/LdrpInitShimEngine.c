/*
 * XREFs of LdrpInitShimEngine @ 0x180080A94
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180080F60 (LdrpGetShimEngineInterface.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpInitShimEngine(PCWSTR SourceString, __int64 a2)
{
  __int64 v4; // r9
  char v5; // cl
  PVOID v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v10[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v11[512]; // [rsp+F0h] [rbp-10h] BYREF

  LdrpInitializeDllPath(0LL, 0LL, v10);
  RtlInitUnicodeString(&DestinationString, SourceString);
  LOBYTE(v4) = 1;
  LODWORD(SourceString) = LdrpLoadDll((__int64)&DestinationString, (__int64)v10, 0, v4, (__int64)&v6);
  LdrpReleaseDllPath((__int64)v10);
  if ( (int)SourceString < 0 )
  {
    v5 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_9;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2363,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n");
    goto LABEL_8;
  }
  *((_DWORD *)v6 + 26) |= 0x100u;
  g_pShimEngineModule = (PVOID)*((_QWORD *)v6 + 6);
  LdrpPinModule((__int64)v6);
  LdrpDereferenceModule((char *)v6);
  if ( (int)LdrpGetShimEngineInterface() >= 0 )
  {
    BaseAddress = v11;
    v7 = 0x2000000;
    if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                          g_pfnSE_InitializeEngine,
                                                          64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]))(
           &v7,
           LdrpImageEntry + 72,
           a2) >= 0 )
    {
      LdrpLoadShimEngine((PCWSTR)BaseAddress);
      if ( BaseAddress != v11 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
    return;
  }
  v5 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2377,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Getting the shim engine exports failed with status 0x%08lx\n");
LABEL_8:
    v5 = LdrpDebugFlags;
  }
LABEL_9:
  if ( (v5 & 0x10) != 0 )
    __debugbreak();
}
