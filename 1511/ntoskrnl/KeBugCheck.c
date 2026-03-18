/*
 * XREFs of KeBugCheck @ 0x140153DB0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14002C3A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     PspSystemThreadStartup @ 0x1400F7154 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x140123C84 (KiLockServiceTable.c)
 *     KiInitMachineDependent @ 0x1401336B4 (KiInitMachineDependent.c)
 *     KxStartSystemThread @ 0x14015AFE0 (KxStartSystemThread.c)
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1403A9F44 (KiSetCacheInformation.c)
 *     KeInitializeBootProcessorShadowState @ 0x1403B105C (KeInitializeBootProcessorShadowState.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x1403F1F50 (PspThreadDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x14052FD40 (Phase1Initialization.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x140767A9C (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x14076FED0 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
