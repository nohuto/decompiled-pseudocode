/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A9590
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     TpAdjustBindingCount @ 0x18003D308 (TpAdjustBindingCount.c)
 *     TpTrimPools @ 0x180062620 (TpTrimPools.c)
 *     TpCallbackIndependent @ 0x180065190 (TpCallbackIndependent.c)
 *     TpSetPoolMaxThreads @ 0x180072D60 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180072DD0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180072E74 (TpAllocPoolInternal.c)
 *     TpCallbackMayRunLong @ 0x1800776C0 (TpCallbackMayRunLong.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180082FA0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolStackInformation @ 0x180085EC0 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x1800877B0 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180088940 (TpSetPoolThreadBasePriority.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationWorkerFactory()
{
  __int64 result; // rax

  result = 396LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
