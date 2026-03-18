/*
 * XREFs of ACPIInitGlobalHeapSize @ 0x1C008D3F4
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C00A7CA0 (ACPIInitializeAMLI.c)
 * Callees:
 *     OSOpenHandle @ 0x1C0080C4C (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 */

__int64 ACPIInitGlobalHeapSize()
{
  __int64 v0; // rdx
  int v1; // ecx
  unsigned int v2; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v0 = *(_QWORD *)AcpiInformation;
  v1 = *(_DWORD *)(*(_QWORD *)AcpiInformation + 10LL) - *(_DWORD *)"VRTUAL";
  if ( !v1 )
    v1 = *(unsigned __int16 *)(v0 + 14) - *(unsigned __int16 *)"AL";
  if ( !v1 && *(_QWORD *)(v0 + 16) == *(_QWORD *)"MICROSFT" && *(_DWORD *)(v0 + 28) == *(_DWORD *)"MSFT" )
  {
    return 0x40000;
  }
  else
  {
    v2 = 0x100000;
    if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ACPI", 0LL, &Handle) >= 0 )
    {
      if ( (int)OSReadRegValue("AMLIGlobalHeapSize") >= 0 )
        v2 = 0x8000;
      if ( Handle )
        ZwClose(Handle);
    }
  }
  return v2;
}
