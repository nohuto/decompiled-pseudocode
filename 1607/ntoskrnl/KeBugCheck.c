/*
 * XREFs of KeBugCheck @ 0x14015DA60
 * Callers:
 *     PspSystemThreadStartup @ 0x140002D58 (PspSystemThreadStartup.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400EEE30 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiLockServiceTable @ 0x14012E004 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x140166990 (KxStartSystemThread.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1403D4B68 (KiSetCacheInformation.c)
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 *     KeInitializeBootProcessorShadowState @ 0x1403DD550 (KeInitializeBootProcessorShadowState.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x14054EDB4 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055CE14 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x1406A3248 (EtwDeleteSiloState.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x1407B2128 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x1407BA49C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
