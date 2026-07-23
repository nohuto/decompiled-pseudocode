/*
 * XREFs of PspInitPhase2 @ 0x1407E0C40
 * Callers:
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140017E74 (RtlGetSystemTimePrecise.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407E0D6C (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x1407E0EAC (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rcx
  char v3; // al
  char v4; // al

  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise().QuadPart;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[16] = MEMORY[0xFFFFF78000000008];
  v1 = PsIdleProcess;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[17] = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v1[97] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v1[233] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[16];
  v2 = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[17];
  v1[234] = v2;
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
  PspInitializeSystemDlls(v2, v1, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
  return (int)PspInitializeProtectedProcessParameters() >= 0;
}
