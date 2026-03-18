/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8CDC
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C01302A0 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8EFC (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     FindSiblingPointerDevice @ 0x1C01CC488 (FindSiblingPointerDevice.c)
 */

_BOOL8 __fastcall IsHIDMouseDeviceRelative(struct DEVICEINFO *a1, struct _FILE_OBJECT *a2, struct _DEVICE_OBJECT *a3)
{
  BOOL v3; // ebx
  __int64 LowPart; // rcx
  union _LARGE_INTEGER *v9; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  USHORT ValueCapsLength[8]; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+68h] [rbp-98h]
  _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0;
  ValueCapsLength[0] = 1;
  if ( (int)SendSyncOutputIrpRequest(0xB01A8u, &Timeout, 0xCu, a2, a3) < 0 )
    return 0LL;
  LowPart = Timeout.LowPart;
  *((_WORD *)a1 + 371) = HIWORD(Timeout.QuadPart);
  *((_WORD *)a1 + 372) = v17;
  v9 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged(LowPart, 1147695957LL);
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)v9;
  if ( v9 )
  {
    if ( (int)SendSyncOutputIrpRequest(0xB0193u, v9, Timeout.LowPart, a2, a3) >= 0
      && HidP_GetCaps(PreparsedData, &Capabilities) == 1114112
      && Capabilities.UsagePage == 1
      && (unsigned __int16)(Capabilities.Usage - 1) <= 1u
      && HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0x30u, &ValueCaps, ValueCapsLength, PreparsedData) >= 0
      && !ValueCaps.IsAbsolute )
    {
      v14 = Timeout;
      v15 = v17;
      v3 = FindSiblingPointerDevice(&v14, a1) == 0;
    }
    Win32FreePool(PreparsedData, v11, v12);
  }
  return v3;
}
