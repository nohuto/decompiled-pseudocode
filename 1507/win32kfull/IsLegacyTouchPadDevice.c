/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C0155CF0
 * Callers:
 *     CreateDeviceInfo @ 0x1C01DE948 (CreateDeviceInfo.c)
 * Callees:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C003A0B8 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GetContainerId @ 0x1C01CAB34 (GetContainerId.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01CE014 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01CE55C (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01CE6D4 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct _UNICODE_STRING *a1)
{
  unsigned int v2; // esi
  int v3; // r14d
  __int64 v4; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // bp
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *v9; // rdi
  int v10; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  PVOID v12; // [rsp+38h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v4);
  v6 = gPlatformRole;
  if ( gPlatformRole != 2 && gPlatformRole != 8 )
    goto LABEL_21;
  if ( (int)GetDeviceObjectPointer(a1 + 13, 0, 3u, &Handle, &v12, (PDEVICE_OBJECT *)&Object) < 0 )
  {
    if ( !IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v7);
    return 0LL;
  }
  v9 = (struct _DEVICE_OBJECT *)Object;
  ObfReferenceObject(Object);
  if ( (int)GetContainerId(v9, v14, &Object) >= 0 )
  {
    v3 = IsHIDMouse((struct DEVICEINFO *)a1, v9);
    v10 = 0;
    if ( v3 )
      v10 = IsHIDMouseDeviceRelative((struct DEVICEINFO *)a1, (struct _FILE_OBJECT *)v12, v9);
    if ( !(_DWORD)Object && (!v3 || v10) )
    {
      EtwTraceLegacyTouchPadDetected();
      v2 = 1;
      goto LABEL_18;
    }
  }
  v2 = IsMouseDeviceOnWhiteList(v9, v3);
  if ( v2 )
  {
    EtwTraceTouchPadWhiteListDeviceDetected();
LABEL_18:
    *(&a1[42].MaximumLength + 1) |= 1u;
    if ( gPlatformRole != 8 )
      CheckLegacyPadControlledStatus(v9);
  }
  ZwClose(Handle);
  ObfDereferenceObject(v12);
  ObfDereferenceObject(v9);
LABEL_21:
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v6);
  return v2;
}
