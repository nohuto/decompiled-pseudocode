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

_BYTE *__fastcall LdrpInitShimEngine(PCWSTR SourceString, __int64 a2)
{
  int Dll; // ebx
  _BYTE *result; // rax
  char v6; // cl
  int v7; // [rsp+30h] [rbp-D0h]
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR SourceStringa; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v13[512]; // [rsp+F0h] [rbp-10h] BYREF

  LdrpInitializeDllPath(0LL, 0LL, v12);
  RtlInitUnicodeString(&DestinationString, SourceString);
  Dll = LdrpLoadDll((__int64)&DestinationString, (int)v12, 0, 1, (__int64)&v8);
  result = (_BYTE *)LdrpReleaseDllPath((__int64)v12);
  if ( Dll < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_9;
    v7 = Dll;
    result = (_BYTE *)LdrpLogDbgPrint(
                        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                        2364,
                        (unsigned int)"LdrpInitShimEngine",
                        0,
                        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
                        &DestinationString,
                        v7);
    goto LABEL_8;
  }
  *(_DWORD *)(v8 + 104) |= 0x100u;
  g_pShimEngineModule = *(_QWORD *)(v8 + 48);
  LdrpPinModule(v8);
  LdrpDereferenceModule(v8);
  result = (_BYTE *)LdrpGetShimEngineInterface();
  if ( (int)result >= 0 )
  {
    SourceStringa = (PCWSTR)v13;
    v9 = 0x2000000;
    result = (_BYTE *)((__int64 (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                                           g_pfnSE_InitializeEngine,
                                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                        &v9,
                        LdrpImageEntry + 72,
                        a2);
    if ( (int)result >= 0 )
    {
      LdrpLoadShimEngine(SourceStringa);
      result = v13;
      if ( SourceStringa != (PCWSTR)v13 )
        return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceStringa);
    }
    return result;
  }
  v6 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    result = (_BYTE *)LdrpLogDbgPrint(
                        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                        2378,
                        (unsigned int)"LdrpInitShimEngine",
                        0,
                        "Getting the shim engine exports failed with status 0x%08lx\n",
                        (_DWORD)result);
LABEL_8:
    v6 = LdrpDebugFlags;
  }
LABEL_9:
  if ( (v6 & 0x10) != 0 )
    __debugbreak();
  return result;
}
