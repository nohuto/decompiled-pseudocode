/*
 * XREFs of PopHandleNextState @ 0x1403F3750
 * Callers:
 *     PopIssueNextState @ 0x1403F36BC (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1403F3700 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x140124FE8 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1401265C8 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSuspendClockTimer @ 0x14014D9D8 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14014E950 (KeRestoreProcessorSpecificFeatures.c)
 *     KeResumeClockTimer @ 0x14014EAC0 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x14014EB9C (PpmResetPerfEngineForProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     KeFlushCurrentTbImmediately @ 0x140203C84 (KeFlushCurrentTbImmediately.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 *     PopRestoreHiberContext @ 0x1403F4F20 (PopRestoreHiberContext.c)
 */

__int64 __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v5; // esi
  int v6; // eax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  PEPROCESS Process; // rdx
  unsigned __int64 DirectoryTableBase; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // r14d
  __int64 *v14; // rdx
  __int16 v15; // [rsp+50h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v5);
  }
  v6 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v6;
  result = (unsigned int)(v6 - 2);
  switch ( (int)result )
  {
    case 0:
      *(_BYTE *)(a2 + 6) = 0;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        *(_BYTE *)(a2 + 6) = (int)KeSaveExtendedAndSupervisorState(
                                    (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                    (_DWORD *)(a2 + 8)) >= 0;
      result = (__int64)KeGetPcr();
      *(_QWORD *)(a2 + 72) = result;
      break;
    case 1:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      *(_BYTE *)(a2 + 5) = CurrentIrql;
      _disable();
      *(_BYTE *)(a2 + 4) = (v15 & 0x200) != 0;
      result = KeSuspendClockTimer();
      break;
    case 2:
      Process = PsInitialSystemProcess;
      goto LABEL_13;
    case 3:
      if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
      {
        PoResumeFromHibernate = 1;
        *(_DWORD *)(a2 + 64) = 0;
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
        v13 = result;
        if ( !CurrentPrcb->Number )
        {
          if ( !PoResumeFromHibernate )
            result = KdPowerTransition(1);
          if ( !CurrentPrcb->Number )
          {
            result = __rdtsc();
            qword_14032ECB8 = result;
          }
        }
        *(_DWORD *)(a2 + 64) = v13;
      }
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
LABEL_13:
      DirectoryTableBase = Process->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v11 = Process->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v11 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v11);
        KiSetAddressPolicy(Process->AddressPolicy);
      }
      result = (unsigned int)HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
        result = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v12 = __readcr4();
        if ( (v12 & 0x20080) != 0 )
        {
          result = v12 ^ 0x80;
          __writecr4(v12 ^ 0x80);
          __writecr4(v12);
        }
        else
        {
          result = __readcr3();
          __writecr3(result);
        }
      }
      break;
    case 8:
      v14 = *(__int64 **)(a1 + 32);
      result = *v14;
      if ( *v14 )
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))result)(
                   *(unsigned int *)(a1 + 40),
                   v14[1],
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
