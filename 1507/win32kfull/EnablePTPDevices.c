/*
 * XREFs of EnablePTPDevices @ 0x1C01CF0F4
 * Callers:
 *     PTPEnableHotkeyCallback @ 0x1C01CFB60 (PTPEnableHotkeyCallback.c)
 *     NtUserEnableTouchPad @ 0x1C0219740 (NtUserEnableTouchPad.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 *     AccessPTPEnabledStatus @ 0x1C01461D0 (AccessPTPEnabledStatus.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01CFD04 (_TelemPTPConfigUpdateEx.c)
 *     DeliverConfigRequestWithTimeout @ 0x1C01D30B8 (DeliverConfigRequestWithTimeout.c)
 */

__int64 __fastcall EnablePTPDevices(__int64 a1)
{
  int v1; // ebp
  int DeviceObjectPointer; // esi
  int v3; // r15d
  unsigned int v4; // r14d
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

  v1 = a1;
  DeviceObjectPointer = -1073741668;
  v3 = 0;
  v4 = 0;
  EnterDeviceInfoListCrit_(a1);
  EtwTraceTouchPadEnabledStatusChangeStart();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v12, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v5 = gpRimDevBackedDeviceInfoList;
  else
    v5 = (struct DEVICEINFO *)gpDeviceInfoList;
  for ( ; v5; v5 = (struct DEVICEINFO *)*((_QWORD *)v5 + 7) )
  {
    if ( *((_BYTE *)v5 + 48) != 3 || (v6 = *((_QWORD *)v5 + 50), *(_WORD *)(v6 + 42) != 13) || *(_WORD *)(v6 + 40) != 14 )
    {
      if ( *((_DWORD *)v5 + 79) )
      {
        v8 = *((_QWORD *)v5 + 52);
        if ( *(_DWORD *)(v8 + 24) == 8 )
          *(_DWORD *)(v8 + 236) ^= (*(_DWORD *)(v8 + 236) ^ (v1 << 11)) & 0x800;
      }
      continue;
    }
    if ( LODWORD(aDeviceTemplate[154]) )
    {
      if ( v1 )
        v7 = RIMUnRevokeConfigurationChange(v5, 87LL);
      else
        v7 = RIMRevokeConfigurationChange(v5, 87LL);
      DeviceObjectPointer = v7;
    }
    else
    {
      DeviceObjectPointer = GetDeviceObjectPointer(
                              (struct _UNICODE_STRING *)v5 + 13,
                              0,
                              2u,
                              &Handle,
                              &v14,
                              (PDEVICE_OBJECT *)&Object);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_16;
      ObfReferenceObject(Object);
      DeviceObjectPointer = DeliverConfigRequestWithTimeout(*((_QWORD *)v5 + 50), (_DWORD)Object, (_DWORD)v14, v1, 87);
      ObfDereferenceObject(v14);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
    }
    if ( DeviceObjectPointer < 0 )
LABEL_16:
      v3 = 1;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v12);
  LeaveDeviceInfoListCrit_(v9);
  gPTPEnabled = v1;
  v10 = AccessPTPEnabledStatus(v1, 0, 0LL);
  if ( DeviceObjectPointer >= 0 && v10 && !v3 )
  {
    v4 = 1;
    TelemPTPConfigUpdateEx(0, 0, 0, 0, 0LL);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v4;
}
