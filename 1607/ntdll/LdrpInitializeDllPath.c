/*
 * XREFs of LdrpInitializeDllPath @ 0x1800121A8
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpGetDelayloadExportDll @ 0x18001135C (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180012210 (LdrGetDllHandleEx.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5DC (LdrpResolveProcedureAddress.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D21A0 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6DB8 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x18000CA68 (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpInitializeDllPath(const WCHAR *a1, const WCHAR *a2, const WCHAR **a3)
{
  __int64 v6; // rcx
  bool v7; // zf

  memset(a3, 0, 0x80uLL);
  if ( ((unsigned __int8)a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = (unsigned int)a2 & 0xFFFFFFFE;
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
