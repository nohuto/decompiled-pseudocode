/*
 * XREFs of KeBugCheck @ 0x140182740
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiDetachProcess @ 0x14009A430 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x140153460 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x14018AA60 (KxStartSystemThread.c)
 *     KiSetFeatureBits @ 0x1403F80E8 (KiSetFeatureBits.c)
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1403F9DC0 (KiSetCacheInformation.c)
 *     KeInitializeBootProcessorShadowState @ 0x14040188C (KeInitializeBootProcessorShadowState.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140504F18 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x14059A0DC (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405A5580 (CmpAddProcessorConfigurationEntry.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x1407DB5D0 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x1407E5F28 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
