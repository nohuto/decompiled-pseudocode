/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1405345D4
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404C3114 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1404C3EE8 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x14057D200 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *PoolWithTag; // rbx
  unsigned __int16 v1; // cx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( PoolWithTag )
  {
    memset(&InputBufferLength, 0, 0xB0uLL);
    wcscpy(&xmmword_1402FDB8C, L"WdiContextLog");
    dword_1402FDBFC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1402FDB8C);
    qword_1402FDC58 = (__int64)PoolWithTag;
    word_1402FDC52 = 520;
    InputBufferLength = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &InputBufferLength, 0xB0u, &InputBufferLength, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_1402FDC50 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1402FDC50 >> 1;
      PoolWithTag[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        PoolWithTag,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
