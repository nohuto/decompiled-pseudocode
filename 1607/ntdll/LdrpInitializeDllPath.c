/*
 * XREFs of LdrpInitializeDllPath @ 0x1800121B8
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpGetDelayloadExportDll @ 0x18001136C (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5EC (LdrpResolveProcedureAddress.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCE0 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D20E0 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6CF8 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x18000CA78 (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpInitializeDllPath(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  bool v7; // zf

  memset(a3, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = (__int64)a1;
    *((_DWORD *)a3 + 6) = a2 & 0xFFFFFFFE;
  }
  else
  {
    v7 = (LdrpDebugFlags & 5) == 0;
    *a3 = a2;
    if ( !v7 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1335,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        (__int64)"DLL search path passed in externally: %ws\n",
        a2);
    LdrpLogDllStateEx2(v6, a1, *a3, 0x14C0u);
  }
}
