/*
 * XREFs of PipHardwareConfigActivateService @ 0x1406296E4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x140538DE4 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxRegDeleteTree @ 0x140550618 (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  int v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v1 = PipOpenServiceEnumKeys(&DestinationString, 0x10000u, &Handle, 0LL, 0);
    if ( v1 >= 0 )
    {
      v1 = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)Handle, (__int64)L"StartOverride");
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
