/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14056950C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140558690 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     RtlDeleteRegistryValue @ 0x1405BF730 (RtlDeleteRegistryValue.c)
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
    wcscpy(&xmmword_14032B1EC, L"WdiContextLog");
    dword_14032B25C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_14032B1EC);
    qword_14032B2B8 = (__int64)PoolWithTag;
    word_14032B2B2 = 520;
    InputBufferLength = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &InputBufferLength, 0xB0u, &InputBufferLength, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_14032B2B0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_14032B2B0 >> 1;
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
