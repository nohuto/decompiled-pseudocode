/*
 * XREFs of StorLogIoError @ 0x1C0031888
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0023C70 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00258CC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0033700 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
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
