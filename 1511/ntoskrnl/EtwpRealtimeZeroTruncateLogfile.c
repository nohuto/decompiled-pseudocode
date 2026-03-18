/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x1404EC00C
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14046ABB8 (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
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
