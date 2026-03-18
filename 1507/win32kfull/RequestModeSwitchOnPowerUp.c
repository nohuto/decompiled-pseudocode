/*
 * XREFs of RequestModeSwitchOnPowerUp @ 0x1C0132558
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 *     ?FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z @ 0x1C01D2564 (-FindInputDeviceForConfig@@YAHPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAH2PEAPEAU2@@Z.c)
 *     DeliverConfigRequestWithTimeout @ 0x1C01D30B8 (DeliverConfigRequestWithTimeout.c)
 *     SendPTPLatencyMgtDeviceRequest @ 0x1C01D3B98 (SendPTPLatencyMgtDeviceRequest.c)
 */

NTSTATUS __fastcall RequestModeSwitchOnPowerUp(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rbx
  __int64 v5; // rax
  char v6; // al
  int v7; // esi
  struct DEVICEINFO *v8; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v9; // [rsp+38h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+28h] BYREF
  int v11; // [rsp+78h] [rbp+30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+38h] BYREF
  PDEVICE_OBJECT v13; // [rsp+88h] [rbp+40h] BYREF

  result = aDeviceTemplate[0];
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    v2 = aDeviceTemplate[156];
    if ( v2 )
    {
      result = RawInputManagerObjectCreateKernelHandle(v2, 3LL, 0LL);
      if ( result >= 0 )
      {
        RIMOnPowerNotification(Handle, 1LL);
        return ZwClose(Handle);
      }
    }
  }
  else
  {
    EnterDeviceInfoListCrit_(a1);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_BYTE *)(i + 48) == 3 )
      {
        v5 = *(_QWORD *)(i + 400);
        if ( *(_WORD *)(v5 + 42) == 13
          && *(_WORD *)(v5 + 40) == 14
          && (int)GetDeviceObjectPointer((struct _UNICODE_STRING *)(i + 208), 0, 2u, &v9, &Object, &v13) >= 0 )
        {
          v6 = *(_BYTE *)(i + 64);
          v7 = 3;
          v11 = 0;
          LODWORD(Handle) = 0;
          v8 = 0LL;
          if ( v6 < 0 )
            v7 = 2;
          if ( (int)DeliverConfigRequestWithTimeout(*(_QWORD *)(i + 400), (_DWORD)v13, (_DWORD)Object, v7, 82) >= 0
            && !gPTPEnabled )
          {
            DeliverConfigRequestWithTimeout(*(_QWORD *)(i + 400), (_DWORD)v13, (_DWORD)Object, 0, 87);
          }
          if ( (unsigned int)FindInputDeviceForConfig(
                               *(struct tagHIDDESC **)(i + 400),
                               (struct DEVICEINFO *)i,
                               &v11,
                               (int *)&Handle,
                               &v8)
            && v7 == 3 )
          {
            SendPTPLatencyMgtDeviceRequest(v8, *((_QWORD *)v8 + 50), 0LL);
          }
          ObfDereferenceObject(Object);
          ZwClose(v9);
        }
      }
    }
    return LeaveDeviceInfoListCrit_(v3);
  }
  return result;
}
