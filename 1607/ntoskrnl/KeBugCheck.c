/*
 * XREFs of KeBugCheck @ 0x14015D4F0
 * Callers:
 *     PspSystemThreadStartup @ 0x140002BE4 (PspSystemThreadStartup.c)
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400F0FE0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiLockServiceTable @ 0x14012DA94 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x140166420 (KxStartSystemThread.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x1403D4B68 (KiSetCacheInformation.c)
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 *     KeInitializeBootProcessorShadowState @ 0x1403DD550 (KeInitializeBootProcessorShadowState.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     Phase1Initialization @ 0x14054EA14 (Phase1Initialization.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055C8D4 (CmpAddProcessorConfigurationEntry.c)
 *     EtwDeleteSiloState @ 0x1406A3110 (EtwDeleteSiloState.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     BvgaSaveResources @ 0x1407B2128 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x1407BA49C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
