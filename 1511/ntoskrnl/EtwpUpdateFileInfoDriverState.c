/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x1404B86A4
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1404B8504 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x140125904 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x140152500 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x140153BA0 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1404B8788 (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x140509B18 (WmiTraceRundownNotify.c)
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
      if ( dword_1402FDEB8 )
        WmiTraceRundownNotify(a4);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_1402FDEB8 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_1402FDEB8 = 0;
      }
    }
LABEL_10:
    updated = 0;
    v4 = 0;
    goto LABEL_11;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    goto LABEL_10;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v7 = ZwLoadDriver(&DestinationString);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_1402FDEB8 = 1;
    v4 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_1402FDEB8 = 0;
  }
  return (unsigned int)updated;
}
