/*
 * XREFs of RaidAdapterLogIoError @ 0x1C0027474
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 *     StorPortLogError @ 0x1C002DCD0 (StorPortLogError.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidScsiErrorToIoError @ 0x1C003468C (RaidScsiErrorToIoError.c)
 */

void __fastcall RaidAdapterLogIoError(__int64 a1, int a2, unsigned int a3, int a4)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v7; // rbx
  int v8; // eax

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
    v8 = RaidScsiErrorToIoError(a3);
    v7[3] = v8;
    v7[13] = v8;
    IoWriteErrorLogEntry(v7);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
