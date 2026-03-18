/*
 * XREFs of EnablePTPDevices @ 0x1C01D0D58
 * Callers:
 *     PTPEnableHotkeyCallback @ 0x1C01D17C0 (PTPEnableHotkeyCallback.c)
 *     NtUserEnableTouchPad @ 0x1C02195D0 (NtUserEnableTouchPad.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 *     AccessPTPEnabledStatus @ 0x1C0110FA8 (AccessPTPEnabledStatus.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01D1964 (_TelemPTPConfigUpdateEx.c)
 *     DeliverConfigRequestWithTimeout @ 0x1C01D4B38 (DeliverConfigRequestWithTimeout.c)
 */

__int64 __fastcall EnablePTPDevices(__int64 a1)
{
  unsigned int v1; // r14d
  int v2; // ebp
  int DeviceObjectPointer; // esi
  int v4; // r15d
  struct DEVICEINFO *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  _BYTE v12[56]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  PVOID v14; // [rsp+80h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v1 = 0;
  v2 = a1;
  DeviceObjectPointer = -1073741668;
  v4 = 0;
  EnterDeviceInfoListCrit_(a1);
  EtwTraceTouchPadEnabledStatusChangeStart();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v12, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v5 = gpRimDevBackedDeviceInfoList;
  else
    v5 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v5 + 48) != 3
        || (v6 = *((_QWORD *)v5 + 50), *(_WORD *)(v6 + 42) != 13)
        || *(_WORD *)(v6 + 40) != 14 )
      {
        if ( *((_DWORD *)v5 + 77) )
        {
          v8 = *((_QWORD *)v5 + 52);
          if ( *(_DWORD *)(v8 + 24) == 8 )
            *(_DWORD *)(v8 + 252) ^= (*(_DWORD *)(v8 + 252) ^ (v2 << 13)) & 0x2000;
        }
        goto LABEL_20;
      }
      if ( LODWORD(aDeviceTemplate[154]) )
      {
        if ( v2 )
          v7 = RIMUnRevokeConfigurationChange(v5, 87LL);
        else
          v7 = RIMRevokeConfigurationChange(v5, 87LL);
        DeviceObjectPointer = v7;
      }
      else
      {
        DeviceObjectPointer = GetDeviceObjectPointer(
                                (struct _UNICODE_STRING *)((char *)v5 + 200),
                                0,
                                2u,
                                &Handle,
                                &v14,
                                (PDEVICE_OBJECT *)&Object);
        if ( DeviceObjectPointer < 0 )
          goto LABEL_16;
        ObfReferenceObject(Object);
        DeviceObjectPointer = DeliverConfigRequestWithTimeout(*((_QWORD *)v5 + 50), (_DWORD)Object, (_DWORD)v14, v2, 87);
        ObfDereferenceObject(v14);
        ObfDereferenceObject(Object);
        ZwClose(Handle);
      }
      if ( DeviceObjectPointer < 0 )
LABEL_16:
        v4 = 1;
LABEL_20:
      v5 = (struct DEVICEINFO *)*((_QWORD *)v5 + 7);
      if ( !v5 )
      {
        v1 = 0;
        break;
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v12);
  LeaveDeviceInfoListCrit_(v9);
  gPTPEnabled = v2;
  v10 = AccessPTPEnabledStatus(v2, 0, 0LL);
  if ( DeviceObjectPointer >= 0 && v10 && !v4 )
  {
    v1 = 1;
    TelemPTPConfigUpdateEx(0, 1, 0, 0, 0LL);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v1;
}
