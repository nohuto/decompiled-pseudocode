/*
 * XREFs of LdrpInitShimEngine @ 0x18007DB94
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x18007E068 (LdrpGetShimEngineInterface.c)
 *     LdrpPinModule @ 0x18007E418 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

_BYTE *__fastcall LdrpInitShimEngine(PCWSTR SourceString, __int64 a2)
{
  int Dll; // ebx
  _BYTE *result; // rax
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // cl
  int v10; // [rsp+30h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR SourceStringa; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[512]; // [rsp+F0h] [rbp-10h] BYREF

  LdrpInitializeDllPath(0LL, 16385LL, v15);
  RtlInitUnicodeString(&DestinationString, SourceString);
  Dll = LdrpLoadDll((__int64)&DestinationString, (int)v15, 0, 1, (__int64)&v11);
  result = (_BYTE *)LdrpReleaseDllPath((__int64)v15);
  if ( Dll < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_9;
    v10 = Dll;
    result = (_BYTE *)LdrpLogDbgPrint(
                        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                        2389,
                        (unsigned int)"LdrpInitShimEngine",
                        0,
                        (__int64)"Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
                        &DestinationString,
                        v10);
    goto LABEL_8;
  }
  *(_DWORD *)(v11 + 104) |= 0x100u;
  g_pShimEngineModule = *(_QWORD *)(v11 + 48);
  LdrpPinModule(v11);
  LdrpDereferenceModule(v11, v6, v7, v8);
  result = (_BYTE *)LdrpGetShimEngineInterface();
  if ( (int)result >= 0 )
  {
    SourceStringa = (PCWSTR)v16;
    v12 = 0x2000000;
    result = (_BYTE *)((__int64 (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                                           g_pfnSE_InitializeEngine,
                                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                        &v12,
                        LdrpImageEntry + 72,
                        a2);
    if ( (int)result >= 0 )
    {
      LdrpLoadShimEngine(SourceStringa);
      result = v16;
      if ( SourceStringa != (PCWSTR)v16 )
        return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceStringa);
    }
    return result;
  }
  v9 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    result = (_BYTE *)LdrpLogDbgPrint(
                        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                        2403,
                        (unsigned int)"LdrpInitShimEngine",
                        0,
                        (__int64)"Getting the shim engine exports failed with status 0x%08lx\n",
                        (_DWORD)result);
LABEL_8:
    v9 = LdrpDebugFlags;
  }
LABEL_9:
  if ( (v9 & 0x10) != 0 )
    __debugbreak();
  return result;
}
