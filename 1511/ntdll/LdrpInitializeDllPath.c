/*
 * XREFs of LdrpInitializeDllPath @ 0x1800110C8
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800CAB30 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800CED88 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x18002FABC (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

void *__fastcall LdrpInitializeDllPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *result; // rax
  __int64 v7; // rcx
  bool v8; // zf

  result = memset(a3, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = a2 & 0xFFFFFFFE;
  }
  else
  {
    v8 = (LdrpDebugFlags & 5) == 0;
    *a3 = a2;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1335,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        (__int64)"DLL search path passed in externally: %ws\n");
    return (void *)LdrpLogDllStateEx2(v7, a1, *a3, 5312LL);
  }
  return result;
}
