/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C01302A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00E37A0 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C00E3960 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetContainerId @ 0x1C01C7D54 (GetContainerId.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8AD8 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8CDC (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01C8E54 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1)
{
  unsigned int v2; // esi
  int v3; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // bp
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _DEVICE_OBJECT *v12; // rdi
  int v13; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  PVOID v15; // [rsp+38h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v17[16]; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v5);
  v8 = gPlatformRole;
  if ( gPlatformRole != 2 && gPlatformRole != 8 )
    goto LABEL_5;
  if ( (int)GetDeviceObjectPointer((struct _UNICODE_STRING *)a1 + 13, 0, v7, &Handle, &v15, (PDEVICE_OBJECT *)&Object) >= 0 )
  {
    v12 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    if ( (int)GetContainerId(v12, v17, &Object) < 0 )
      goto LABEL_19;
    v3 = IsHIDMouse(a1, v12);
    v13 = 0;
    if ( v3 )
      v13 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v15, v12);
    if ( (_DWORD)Object || v3 && !v13 )
    {
LABEL_19:
      v2 = IsMouseDeviceOnWhiteList(v12, v3);
      if ( !v2 )
      {
LABEL_23:
        ZwClose(Handle);
        ObfDereferenceObject(v15);
        ObfDereferenceObject(v12);
LABEL_5:
        if ( !IsResourceAcquiredExclusiveLite )
          LeaveDeviceInfoListCrit_(v8, v4);
        return v2;
      }
      EtwTraceTouchPadWhiteListDeviceDetected();
    }
    else
    {
      EtwTraceLegacyTouchPadDetected();
      v2 = 1;
    }
    *((_WORD *)a1 + 370) |= 1u;
    if ( gPlatformRole != 8 )
      CheckLegacyPadControlledStatus(v12);
    goto LABEL_23;
  }
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v11, v10);
  return 0LL;
}
