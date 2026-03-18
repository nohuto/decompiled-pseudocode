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
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  char v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_1402DAEB0, 0, 0xB0uLL);
    wcscpy(&xmmword_1402DAE6C, L"WdiContextLog");
    dword_1402DAEDC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1402DAE6C);
    qword_1402DAF38 = (__int64)ValueData;
    word_1402DAF32 = 520;
    dword_1402DAEB0[0] = 176;
    if ( (int)NtTraceControl(3u, dword_1402DAEB0, 0xB0u, dword_1402DAEB0, 0xB0u, (ULONG64)&v2) < 0
      || (unsigned __int16)word_1402DAF30 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1402DAF30 >> 1;
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
