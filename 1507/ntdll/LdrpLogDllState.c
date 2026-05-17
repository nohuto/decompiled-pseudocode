/*
 * XREFs of LdrpLogDllState @ 0x180021298
 * Callers:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     LdrpApplyFileNameRedirection @ 0x18002108C (LdrpApplyFileNameRedirection.c)
 *     ApiSetQueryApiSetPresence @ 0x1800212C0 (ApiSetQueryApiSetPresence.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x180040198 (LdrpAllocatePlaceHolder.c)
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     LdrpInitializeNode @ 0x180044DE4 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     LdrpCorProcessImports @ 0x1800781A8 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

struct _PEB *__fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  struct _PEB *result; // rax

  if ( MEMORY[0x7FFE0384] )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
      return (struct _PEB *)LdrpLogEtwEvent(a3, a1, 0, 0, a2);
  }
  return result;
}
