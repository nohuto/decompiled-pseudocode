/*
 * XREFs of PiDcHandleDeviceEvent @ 0x140537188
 * Callers:
 *     PiDcHandleObjectEvent @ 0x140537140 (PiDcHandleObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     PiDcContainerRequiresConfiguration @ 0x140584570 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleDeviceEvent(__int64 a1)
{
  int ObjectProperty; // ebx
  unsigned int v2; // esi
  __int64 v4; // rax
  _BYTE v6[4]; // [rsp+68h] [rbp-29h] BYREF
  int v7; // [rsp+6Ch] [rbp-25h] BYREF
  int v8; // [rsp+70h] [rbp-21h] BYREF
  int v9[4]; // [rsp+78h] [rbp-19h] BYREF
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
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v8,
                       (__int64)v9,
                       16,
                       (__int64)&v7,
                       0);
    if ( ObjectProperty >= 0 && v8 == 13 && v7 == 16 )
    {
      ObjectProperty = PnpStringFromGuid(v9, Str2);
      if ( ObjectProperty >= 0 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)Str2,
                           5u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceContainer_IsLocalMachine,
                           (__int64)&v8,
                           (__int64)v6,
                           1,
                           (__int64)&v7,
                           0);
        if ( ObjectProperty >= 0 && v6[0] != 0xFF && v8 == 17 && v7 == 1 )
          return (unsigned int)PiDcContainerRequiresConfiguration(Str2);
      }
    }
  }
  return (unsigned int)ObjectProperty;
}
