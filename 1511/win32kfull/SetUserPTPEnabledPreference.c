/*
 * XREFs of SetUserPTPEnabledPreference @ 0x1C01D1800
 * Callers:
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3DC4 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 *     AccessPTPEnabledStatus @ 0x1C0110FA8 (AccessPTPEnabledStatus.c)
 *     DeliverConfigRequestWithTimeout @ 0x1C01D4B38 (DeliverConfigRequestWithTimeout.c)
 *     FindConfigDeviceForInput @ 0x1C01D4DF4 (FindConfigDeviceForInput.c)
 *     RevokeConfigurationChange @ 0x1C01D5620 (RevokeConfigurationChange.c)
 */

NTSTATUS __fastcall SetUserPTPEnabledPreference(struct DEVICEINFO *a1, struct tagHIDDESC *a2, __int64 a3)
{
  int v3; // ebx
  int v7; // eax
  NTSTATUS result; // eax
  PVOID v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+38h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID v13; // [rsp+88h] [rbp+38h] BYREF

  v3 = 1;
  v10 = 0LL;
  LODWORD(v13) = 1;
  if ( grpWinStaList )
  {
    v7 = AccessPTPEnabledStatus(0, 1, &v13);
    v3 = (int)v13;
    if ( v7 )
      gPTPEnabled = (int)v13;
  }
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    if ( aDeviceTemplate[156] )
      a3 = aDeviceTemplate[156];
    result = RIMFindConfigDeviceForInput(a3, a2, a1, &v10);
    if ( result )
    {
      if ( v3 )
        return RIMUnRevokeConfigurationChange(v10, 87LL);
      else
        return RIMRevokeConfigurationChange(v10, 87LL);
    }
  }
  else
  {
    result = FindConfigDeviceForInput(a2, a1);
    if ( result )
    {
      if ( v3 )
      {
        result = GetDeviceObjectPointer(
                   (struct _UNICODE_STRING *)(v10 + 200),
                   0,
                   3u,
                   &Handle,
                   &v13,
                   (PDEVICE_OBJECT *)&Object);
        if ( result >= 0 )
        {
          v9 = Object;
          ObfReferenceObject(Object);
          DeliverConfigRequestWithTimeout(*(_QWORD *)(v10 + 400), (_DWORD)v9, (_DWORD)v13, 1, 87);
          ObfDereferenceObject(v13);
          ObfDereferenceObject(v9);
          return ZwClose(Handle);
        }
      }
      else
      {
        return RevokeConfigurationChange(v10);
      }
    }
  }
  return result;
}
