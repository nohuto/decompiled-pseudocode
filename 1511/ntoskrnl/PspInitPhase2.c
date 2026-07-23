/*
 * XREFs of PspInitPhase2 @ 0x140761E90
 * Callers:
 *     PsInitSystem @ 0x140763DCC (PsInitSystem.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14002D4E8 (RtlGetSystemTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     PspInitializeProtectedProcessParameters @ 0x140761FA0 (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x1407620E0 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  char v4; // al

  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise().QuadPart;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[14] = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[15] = UnbiasedInterruptTime;
  v2[97] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[231] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[14];
  v2[232] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[15];
  if ( PspSehValidationPolicy )
  {
    if ( PspSehValidationPolicy == 2 )
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 8;
    else
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 4;
  }
  else
  {
    v3 = MEMORY[0xFFFFF780000002D5] & 0xF3;
  }
  MEMORY[0xFFFFF780000002D5] = v3;
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v4 = MEMORY[0xFFFFF780000002D5] & 0xCF | 0x10;
      break;
    case 2:
      v4 = MEMORY[0xFFFFF780000002D5] & 0xCF | 0x20;
      break;
    case -1:
      v4 = MEMORY[0xFFFFF780000002D5] | 0x30;
      break;
    default:
      v4 = MEMORY[0xFFFFF780000002D5] & 0xCF;
      break;
  }
  MEMORY[0xFFFFF780000002D5] = v4;
  PspInitializeSystemDlls();
  return (int)PspInitializeProtectedProcessParameters() >= 0;
}
