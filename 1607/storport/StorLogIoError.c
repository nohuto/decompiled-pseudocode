/*
 * XREFs of StorLogIoError @ 0x1C0034A58
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002705C (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0029370 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0036960 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 */

void __fastcall StorLogIoError(__int64 a1, int a2, int a3, int a4)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v7; // rbx

  ErrorLogEntry = IoAllocateErrorLogEntry(*(PVOID *)(a1 + 8), 0x40u);
  v7 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0x40uLL);
    v7[6] = 0;
    v7[5] = 0;
    *v7 = 1572879;
    v7[4] = a4;
    *((_WORD *)v7 + 24) = a2;
    *((_BYTE *)v7 + 50) = BYTE2(a2);
    v7[3] = a3;
    v7[13] = a3;
    IoWriteErrorLogEntry(v7);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
