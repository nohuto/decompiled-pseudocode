/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x140564418
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeZeroTruncateLogfile(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 FileInformation; // [rsp+58h] [rbp+10h] BYREF

  v5 = 72LL;
  if ( ZwSetInformationFile(*(HANDLE *)(a1 + 376), &IoStatusBlock, &v5, 8u, FileEndOfFileInformation) < 0
    || (v2 = *(void **)(a1 + 376),
        FileInformation = 72LL,
        result = ZwSetInformationFile(v2, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation),
        result < 0) )
  {
    result = ZwClose(*(HANDLE *)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0LL;
    *(_QWORD *)(a1 + 416) = 0LL;
    *(_QWORD *)(a1 + 408) = 0LL;
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 416) = 72LL;
    *(_QWORD *)(a1 + 408) = 72LL;
    *(_QWORD *)(a1 + 400) = 72LL;
  }
  return result;
}
