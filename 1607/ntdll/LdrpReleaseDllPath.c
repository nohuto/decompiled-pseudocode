/*
 * XREFs of LdrpReleaseDllPath @ 0x18001216C
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
