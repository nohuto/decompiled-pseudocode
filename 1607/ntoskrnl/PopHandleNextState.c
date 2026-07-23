/*
 * XREFs of PopHandleNextState @ 0x1403CC8F0
 * Callers:
 *     PopIssueNextState @ 0x1403CC868 (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1403CC8A4 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x140083914 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140083B40 (KeSaveExtendedAndSupervisorState.c)
 *     KiLoadDirectoryTableBase @ 0x1400979E0 (KiLoadDirectoryTableBase.c)
 *     KeSuspendClockTimer @ 0x140113994 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140114744 (KeRestoreProcessorSpecificFeatures.c)
 *     KeResumeClockTimer @ 0x14011489C (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x140114968 (PpmResetPerfEngineForProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 */

__int64 __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r14
  char v3; // bp
  unsigned int v4; // ebx
  int v7; // eax
  __int64 result; // rax
  _KPROCESS *Process; // rcx
  __int64 *v10; // rdx
  unsigned __int8 CurrentIrql; // al
  int v12; // ebx
  __int16 v13; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4);
  }
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v7;
  result = (unsigned int)(v7 - 2);
  switch ( (int)result )
  {
    case 0:
      *(_BYTE *)(a2 + 6) = 0;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        if ( (int)KeSaveExtendedAndSupervisorState(
                    (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                    (PVOID *)(a2 + 8)) >= 0 )
          v3 = 1;
        *(_BYTE *)(a2 + 6) = v3;
      }
      result = (__int64)KeGetPcr();
      *(_QWORD *)(a2 + 72) = result;
      break;
    case 1:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      *(_BYTE *)(a2 + 5) = CurrentIrql;
      _disable();
      *(_BYTE *)(a2 + 4) = (v13 & 0x200) != 0;
      result = KeSuspendClockTimer();
      break;
    case 2:
      result = KiLoadDirectoryTableBase((__int64)PsInitialSystemProcess, PsInitialSystemProcess->DirectoryTableBase);
      break;
    case 3:
      if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
      {
        v12 = 0;
        PoResumeFromHibernate = 1;
      }
      else
      {
        if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
          KdPowerTransition(4);
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                   *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                   *(_QWORD *)(a1 + 8),
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 48),
                   a1 + 60);
        v12 = result;
        if ( !CurrentPrcb->Number )
        {
          if ( !PoResumeFromHibernate )
            result = KdPowerTransition(1);
          if ( !CurrentPrcb->Number )
          {
            result = __rdtsc();
            qword_1403038D8 = result;
          }
        }
      }
      *(_DWORD *)(a2 + 64) = v12;
      break;
    case 4:
      result = KeRestoreProcessorSpecificFeatures();
      break;
    case 5:
      result = PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
      break;
    case 6:
      result = KeFlushCurrentTbImmediately();
      __wbinvd();
      break;
    case 7:
      Process = KeGetCurrentThread()->ApcState.Process;
      result = KiLoadDirectoryTableBase((__int64)Process, Process->DirectoryTableBase);
      break;
    case 8:
      v10 = *(__int64 **)(a1 + 32);
      result = *v10;
      if ( *v10 )
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))result)(
                   *(unsigned int *)(a1 + 40),
                   v10[1],
                   *(unsigned __int8 *)(a1 + 44));
      break;
    case 9:
      KeResumeClockTimer();
      if ( *(_BYTE *)(a2 + 4) )
        _enable();
      result = *(unsigned __int8 *)(a2 + 5);
      __writecr8(result);
      break;
    case 10:
      if ( *(_BYTE *)(a2 + 6) )
        KeRestoreExtendedAndSupervisorState(a2 + 8);
      result = PpmResetPerfEngineForProcessor((__int64)CurrentPrcb);
      break;
    default:
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  return result;
}
