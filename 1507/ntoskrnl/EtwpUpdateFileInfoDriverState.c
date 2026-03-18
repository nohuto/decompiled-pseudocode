/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x14054AE18
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x14014F95C (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x140180E90 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x140182510 (ZwUnloadDriver.c)
 *     WmiTraceRundownNotify @ 0x1405332B4 (WmiTraceRundownNotify.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14054AE9C (EtwpUpdateFileInfoDriverRegistration.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // edi
  int updated; // ebx
  NTSTATUS v7; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_14036CCE0 )
        WmiTraceRundownNotify(a4);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_14036CCE0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_14036CCE0 = 0;
      }
    }
LABEL_8:
    updated = 0;
    v4 = 0;
    goto LABEL_9;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    goto LABEL_8;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v7 = ZwLoadDriver(&DestinationString);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_14036CCE0 = 1;
    v4 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_14036CCE0 = 0;
  }
  return (unsigned int)updated;
}
