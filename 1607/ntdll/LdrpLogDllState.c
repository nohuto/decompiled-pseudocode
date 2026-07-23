/*
 * XREFs of LdrpLogDllState @ 0x180015E10
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x18000F5E4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLoadKnownDll @ 0x180012030 (LdrpLoadKnownDll.c)
 *     LdrpLoadDll @ 0x18001539C (LdrpLoadDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetQueryApiSetPresence @ 0x1800157C0 (ApiSetQueryApiSetPresence.c)
 *     LdrpApplyFileNameRedirection @ 0x180015A24 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002F25C (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     LdrpCorProcessImports @ 0x180087938 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
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
