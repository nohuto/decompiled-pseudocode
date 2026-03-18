/*
 * XREFs of IopDeviceObjectFromSymbolicName @ 0x1404C2098
 * Callers:
 *     IopGetSessionIdFromSymbolicName @ 0x1404C2040 (IopGetSessionIdFromSymbolicName.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 */

_QWORD *__fastcall IopDeviceObjectFromSymbolicName(__int64 a1)
{
  _QWORD *v1; // rdi
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
              v1 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString);
            ExFreePoolWithTag(v4, 0x47706E50u);
          }
        }
      }
    }
  }
  return v1;
}
