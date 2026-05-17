/*
 * XREFs of LdrpLogDllState @ 0x180012678
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 *     LdrpAllocatePlaceHolder @ 0x18000FCC4 (LdrpAllocatePlaceHolder.c)
 *     LdrpProcessMappedModule @ 0x1800102F0 (LdrpProcessMappedModule.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetQueryApiSetPresence @ 0x1800120E0 (ApiSetQueryApiSetPresence.c)
 *     LdrpApplyFileNameRedirection @ 0x180012354 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpInitializeNode @ 0x180071F68 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     LdrpCorProcessImports @ 0x180083680 (LdrpCorProcessImports.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
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
