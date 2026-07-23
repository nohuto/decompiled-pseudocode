/*
 * XREFs of PiDcHandleDeviceEvent @ 0x1404C2EFC
 * Callers:
 *     PiDcHandleObjectEvent @ 0x1404C2EB4 (PiDcHandleObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDcContainerRequiresConfiguration @ 0x140630830 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleDeviceEvent(__int64 a1)
{
  int ObjectProperty; // ebx
  unsigned int v2; // esi
  __int64 v4; // rax
  _BYTE v6[4]; // [rsp+68h] [rbp-29h] BYREF
  int v7; // [rsp+6Ch] [rbp-25h] BYREF
  int v8; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v9[16]; // [rsp+78h] [rbp-19h] BYREF
  wchar_t Str2[40]; // [rsp+88h] [rbp-9h] BYREF

  ObjectProperty = 0;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    while ( 1 )
    {
      v4 = 32LL * v2;
      if ( !*(_DWORD *)(v4 + a1 + 100)
        && !*(_QWORD *)(v4 + a1 + 104)
        && RtlLookupElementGenericTableAvl(&PiDcUpdateProperties, (PVOID)(v4 + a1 + 80)) )
      {
        break;
      }
      if ( ++v2 >= *(_DWORD *)(a1 + 76) )
        return (unsigned int)ObjectProperty;
    }
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                       1,
                       0,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v7,
                       (__int64)v9,
                       16,
                       (__int64)&v8,
                       0);
    if ( ObjectProperty >= 0 && v7 == 13 && v8 == 16 )
    {
      ObjectProperty = PnpStringFromGuid(v9, Str2);
      if ( ObjectProperty >= 0 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           (unsigned int)Str2,
                           5,
                           0,
                           0LL,
                           (__int64)&DEVPKEY_DeviceContainer_IsLocalMachine,
                           (__int64)&v7,
                           (__int64)v6,
                           1,
                           (__int64)&v8,
                           0);
        if ( ObjectProperty >= 0 && v7 == 17 && v8 == 1 && v6[0] != 0xFF )
          return (unsigned int)PiDcContainerRequiresConfiguration(Str2);
      }
    }
  }
  return (unsigned int)ObjectProperty;
}
