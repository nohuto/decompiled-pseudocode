/*
 * XREFs of LdrpLogDllState @ 0x180015E20
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x18000F5F4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetQueryApiSetPresence @ 0x1800157D0 (ApiSetQueryApiSetPresence.c)
 *     LdrpApplyFileNameRedirection @ 0x180015A34 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpMapDllNtFileName @ 0x18002D3AC (LdrpMapDllNtFileName.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4EC (LdrpSendPostSnapNotifications.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002F26C (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18002F938 (LdrpProcessMappedModule.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     LdrpInitializeNode @ 0x180072384 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpCorProcessImports @ 0x180087948 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax

  if ( MEMORY[0x7FFE0384] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      return (struct _PEB *)LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
  }
  return result;
}
