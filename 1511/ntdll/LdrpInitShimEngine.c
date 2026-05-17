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

_BYTE *__fastcall LdrpInitShimEngine(PCWSTR SourceString, __int64 a2)
{
  _BYTE *result; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // cl
  unsigned __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR SourceStringa; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v13[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v14[512]; // [rsp+F0h] [rbp-10h] BYREF

  LdrpInitializeDllPath(0LL, 0LL, v13);
  RtlInitUnicodeString(&DestinationString, SourceString);
  LODWORD(SourceString) = LdrpLoadDll((__int64)&DestinationString, (int)v13, 0, 1, (__int64)&v9);
  result = (_BYTE *)LdrpReleaseDllPath((__int64)v13);
  if ( (int)SourceString < 0 )
  {
    v8 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_9;
    result = (_BYTE *)LdrpLogDbgPrint(
                        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                        2363,
                        (unsigned int)"LdrpInitShimEngine",
                        0,
                        (__int64)"Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n");
    goto LABEL_8;
  }
  *(_DWORD *)(v9 + 104) |= 0x100u;
  g_pShimEngineModule = *(_QWORD *)(v9 + 48);
  LdrpPinModule(v9);
  LdrpDereferenceModule(v9, v5, v6, v7);
  result = (_BYTE *)LdrpGetShimEngineInterface();
  if ( (int)result >= 0 )
  {
    SourceStringa = (PCWSTR)v14;
    v10 = 0x2000000;
    result = (_BYTE *)((__int64 (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                                           g_pfnSE_InitializeEngine,
                                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                        &v10,
                        LdrpImageEntry + 72,
                        a2);
    if ( (int)result >= 0 )
    {
      LdrpLoadShimEngine(SourceStringa);
      result = v14;
      if ( SourceStringa != (PCWSTR)v14 )
        return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceStringa);
    }
    return result;
  }
  v8 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    result = (_BYTE *)LdrpLogDbgPrint(
                        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                        2377,
                        (unsigned int)"LdrpInitShimEngine",
                        0,
                        (__int64)"Getting the shim engine exports failed with status 0x%08lx\n");
LABEL_8:
    v8 = LdrpDebugFlags;
  }
LABEL_9:
  if ( (v8 & 0x10) != 0 )
    __debugbreak();
  return result;
}
