/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x140534094
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404DFB10 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1404E08E4 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x14057CD54 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  char v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_1402FDBF0, 0, 0xB0uLL);
    wcscpy(&xmmword_1402FDBAC, L"WdiContextLog");
    dword_1402FDC1C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_1402FDBAC);
    qword_1402FDC78 = (__int64)ValueData;
    word_1402FDC72 = 520;
    dword_1402FDBF0[0] = 176;
    if ( (int)NtTraceControl(3u, dword_1402FDBF0, 0xB0u, dword_1402FDBF0, 0xB0u, (unsigned __int64)&v2) < 0
      || (unsigned __int16)word_1402FDC70 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_1402FDC70 >> 1;
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
