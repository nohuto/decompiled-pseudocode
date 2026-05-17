/*
 * XREFs of LdrpReleaseDllPath @ 0x1800186F4
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180079920 (LdrpLoadShimEngine.c)
 *     LdrpGetDelayloadExportDll @ 0x18007A108 (LdrpGetDelayloadExportDll.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800BDE90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpReleaseDllPath(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 124) )
    return RtlReleasePath(*(_QWORD *)a1);
  return result;
}
