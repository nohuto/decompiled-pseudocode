/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C0111110
 * Callers:
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 * Callees:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0095BB0 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GetContainerId @ 0x1C01CC714 (GetContainerId.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01CFC04 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01D014C (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01D02C4 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1)
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
  if ( (int)GetDeviceObjectPointer(
              (struct _UNICODE_STRING *)((char *)a1 + 200),
              0,
              3u,
              &Handle,
              &v12,
              (PDEVICE_OBJECT *)&Object) < 0 )
  {
    if ( !IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v7);
    return 0LL;
  }
  v9 = (struct _DEVICE_OBJECT *)Object;
  ObfReferenceObject(Object);
  if ( (int)GetContainerId(v9, v14, &Object) >= 0 )
  {
    v3 = IsHIDMouse(a1, v9);
    v10 = 0;
    if ( v3 )
      v10 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v12, v9);
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
    *((_WORD *)a1 + 338) |= 1u;
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
