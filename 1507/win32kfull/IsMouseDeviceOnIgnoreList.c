/*
 * XREFs of IsMouseDeviceOnIgnoreList @ 0x1C0039E04
 * Callers:
 *     UpdateMouseConnectionState @ 0x1C0039D1C (UpdateMouseConnectionState.c)
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0039F34 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     GetPointerDeviceId @ 0x1C0039FF0 (GetPointerDeviceId.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C003A0B8 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall IsMouseDeviceOnIgnoreList(struct DEVICEINFO *a1)
{
  unsigned int v2; // esi
  int v3; // r14d
  int PointerDeviceId; // ebx
  PVOID Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v8[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  char v11; // [rsp+80h] [rbp-80h] BYREF

  v2 = 1;
  if ( (int)GetDeviceObjectPointer((char *)a1 + 208, 0LL, 3LL, Handle, v8, Object) < 0 )
    return 0LL;
  ObfReferenceObject(Object[0]);
  v3 = IsHIDMouse(a1, (struct _DEVICE_OBJECT *)Object[0]);
  *(_DWORD *)&Destination.Length = 13107200;
  Destination.Buffer = (PWSTR)&v11;
  PointerDeviceId = GetPointerDeviceId((PDEVICE_OBJECT)Object[0], &Destination);
  ZwClose(Handle[0]);
  ObfDereferenceObject(v8[0]);
  ObfDereferenceObject(Object[0]);
  if ( PointerDeviceId >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\IgnoredExternalMice");
    *(struct _UNICODE_STRING *)v8 = Destination;
    *(struct _UNICODE_STRING *)Handle = DestinationString;
    return (unsigned int)IsDeviceOnRegistryList((struct _UNICODE_STRING *)Handle, (struct _UNICODE_STRING *)v8, v3);
  }
  return v2;
}
