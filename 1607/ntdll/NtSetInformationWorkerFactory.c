/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A9590
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     TpAdjustBindingCount @ 0x18003D2F8 (TpAdjustBindingCount.c)
 *     TpTrimPools @ 0x180062610 (TpTrimPools.c)
 *     TpCallbackIndependent @ 0x180065180 (TpCallbackIndependent.c)
 *     TpSetPoolMaxThreads @ 0x180072D50 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180072DC0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180072E64 (TpAllocPoolInternal.c)
 *     TpCallbackMayRunLong @ 0x1800776B0 (TpCallbackMayRunLong.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180082F90 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolStackInformation @ 0x180085EB0 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x1800877A0 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180088930 (TpSetPoolThreadBasePriority.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 396;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
