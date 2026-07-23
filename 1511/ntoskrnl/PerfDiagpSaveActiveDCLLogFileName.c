/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1404F5104
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140508358 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1404C8708 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140546434 (RtlDeleteRegistryValue.c)
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
    wcscpy(&xmmword_1402DAE6C, L"WdiContextLog");
    dword_1402DAEDC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1402DAE6C);
    qword_1402DAF38 = (__int64)PoolWithTag;
    word_1402DAF32 = 520;
    InputBufferLength = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &InputBufferLength, 0xB0u, &InputBufferLength, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_1402DAF30 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1402DAF30 >> 1;
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
