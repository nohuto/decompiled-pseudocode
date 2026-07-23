/*
 * XREFs of LdrpInitShimEngine @ 0x1800797C8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180079D5C (LdrpGetShimEngineInterface.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpInitShimEngine(PCWSTR SourceString, __int64 a2)
{
  __int64 v4; // r9
  int Dll; // ebx
  int ShimEngineInterface; // eax
  char v7; // cl
  int v8; // [rsp+30h] [rbp-D0h]
  PVOID v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v14[512]; // [rsp+F0h] [rbp-10h] BYREF

  LdrpInitializeDllPath(0LL, 0LL, v13);
  RtlInitUnicodeString(&DestinationString, SourceString);
  LOBYTE(v4) = 1;
  Dll = LdrpLoadDll((__int64)&DestinationString, (__int64)v13, 0, v4, (__int64)&v9);
  LdrpReleaseDllPath((__int64)v13);
  if ( Dll < 0 )
  {
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_9;
    v8 = Dll;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2364,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
      &DestinationString,
      v8);
    goto LABEL_8;
  }
  *((_DWORD *)v9 + 26) |= 0x100u;
  g_pShimEngineModule = (PVOID)*((_QWORD *)v9 + 6);
  LdrpPinModule(v9);
  LdrpDereferenceModule((char *)v9);
  ShimEngineInterface = LdrpGetShimEngineInterface();
  if ( ShimEngineInterface >= 0 )
  {
    BaseAddress = v14;
    v10 = 0x2000000;
    if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                          g_pfnSE_InitializeEngine,
                                                          64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]))(
           &v10,
           LdrpImageEntry + 72,
           a2) >= 0 )
    {
      LdrpLoadShimEngine((PCWSTR)BaseAddress);
      if ( BaseAddress != v14 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
    return;
  }
  v7 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2378,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Getting the shim engine exports failed with status 0x%08lx\n",
      ShimEngineInterface);
LABEL_8:
    v7 = LdrpDebugFlags;
  }
LABEL_9:
  if ( (v7 & 0x10) != 0 )
    __debugbreak();
}
