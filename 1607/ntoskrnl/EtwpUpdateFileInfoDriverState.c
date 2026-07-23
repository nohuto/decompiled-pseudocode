/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x140496D14
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1404968E8 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x140130638 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x14015C110 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x14015D830 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140496D98 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x1404AC86C (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4)
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
      if ( dword_1403419AC )
        WmiTraceRundownNotify(a4);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_1403419AC )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_1403419AC = 0;
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
    dword_1403419AC = 1;
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
    dword_1403419AC = 0;
  }
  return (unsigned int)updated;
}
