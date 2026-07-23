/*
 * XREFs of PspInitPhase2 @ 0x1407B5F0C
 * Callers:
 *     PsInitSystem @ 0x140793634 (PsInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     RtlGetSystemTimePrecise @ 0x1400EFF68 (RtlGetSystemTimePrecise.c)
 *     RtlRandomEx @ 0x1404CB2E8 (RtlRandomEx.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407B6040 (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x1407B6180 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  char v4; // al
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise().QuadPart;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[16] = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[17] = UnbiasedInterruptTime;
  v2[97] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[233] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[16];
  v2[234] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[17];
  RtlGetSystemTimePrecise();
  PspWorkOnBehalfEncodingKey = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  PspWorkOnBehalfEncodingKey = RtlRandomEx(&Seed) | (unsigned __int64)PspWorkOnBehalfEncodingKey;
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
