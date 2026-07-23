/*
 * XREFs of LdrpReleaseDllPath @ 0x1800112AC
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180080BEC (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800CAB30 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpReleaseDllPath(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 124) )
    RtlReleasePath(*(PWSTR *)a1);
}
