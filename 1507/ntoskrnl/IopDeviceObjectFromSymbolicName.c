/*
 * XREFs of IopDeviceObjectFromSymbolicName @ 0x14045BFC8
 * Callers:
 *     IopGetSessionIdFromSymbolicName @ 0x14045BF70 (IopGetSessionIdFromSymbolicName.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 */

__int64 __fastcall IopDeviceObjectFromSymbolicName(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *PoolWithTag; // rax
  WCHAR *v4; // rbp
  int ObjectProperty; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-28h] BYREF
  int v8; // [rsp+90h] [rbp+8h] BYREF
  int v9; // [rsp+98h] [rbp+10h] BYREF
  void *v10; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( (int)PnpUnicodeStringToWstr(&v10, 0LL, (unsigned __int16 *)a1) >= 0 )
        {
          v8 = 400;
          PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
          v4 = PoolWithTag;
          if ( PoolWithTag )
          {
            ObjectProperty = PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v10,
                               3u,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_InstanceId,
                               (__int64)&v9,
                               (__int64)PoolWithTag,
                               v8,
                               (__int64)&v8,
                               0);
            PnpUnicodeStringToWstrFree(v10, a1);
            if ( ObjectProperty >= 0 && v9 == 18 && RtlInitUnicodeStringEx(&DestinationString, v4) >= 0 )
              v1 = PnpDeviceObjectFromDeviceInstance(&DestinationString);
            ExFreePoolWithTag(v4, 0x47706E50u);
          }
        }
      }
    }
  }
  return v1;
}
