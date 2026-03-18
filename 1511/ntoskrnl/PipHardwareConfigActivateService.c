/*
 * XREFs of PipHardwareConfigActivateService @ 0x140513D6C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x1403B9994 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  NTSTATUS v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v1 = PipOpenServiceEnumKeys(&DestinationString, 0x10000u, &Handle, 0LL, 0);
    if ( v1 >= 0 )
    {
      v1 = PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, Handle, L"StartOverride");
      if ( v1 == -1073741772 )
        v1 = 0;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
