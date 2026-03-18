/*
 * XREFs of EnablePTPDevices @ 0x1C01C90F4
 * Callers:
 *     PTPEnableHotkeyCallback @ 0x1C01C9490 (PTPEnableHotkeyCallback.c)
 *     NtUserEnableTouchPad @ 0x1C0212250 (NtUserEnableTouchPad.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     AccessPTPEnabledStatus @ 0x1C0131F90 (AccessPTPEnabledStatus.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C01C9584 (_TelemPTPConfigUpdateEx.c)
 */

__int64 __fastcall EnablePTPDevices(__int64 a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // r14d
  unsigned int v4; // r15d
  struct DEVICEINFO *i; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+88h] [rbp+28h] BYREF

  v1 = a1;
  v2 = -1073741668;
  v3 = 0;
  v4 = 0;
  EnterDeviceInfoListCrit_(a1);
  EtwTraceTouchPadEnabledStatusChangeStart();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v15, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (v6 = *((_QWORD *)i + 58), *(_WORD *)(v6 + 42) == 13) && *(_WORD *)(v6 + 40) == 14 )
    {
      if ( v1 )
        v7 = RIMUnRevokeConfigurationChange(i, 87LL);
      else
        v7 = RIMRevokeConfigurationChange(i, 87LL);
      v2 = v7;
      if ( v7 < 0 )
        v3 = 1;
    }
    else if ( *((_DWORD *)i + 79) )
    {
      v8 = *((_QWORD *)i + 60);
      if ( *(_DWORD *)(v8 + 24) == 7 )
        *(_DWORD *)(v8 + 252) ^= (*(_DWORD *)(v8 + 252) ^ (v1 << 13)) & 0x2000;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
  LeaveDeviceInfoListCrit_(v10, v9);
  gPTPEnabled = v1;
  v11 = AccessPTPEnabledStatus(v1, 0, 0LL);
  if ( v2 >= 0 && v11 && !v3 )
  {
    v4 = 1;
    v13[1] = 0LL;
    v14[1] = 0LL;
    TelemPTPConfigUpdateEx(0, 1, 0, 0, (__int64)v14, (__int64)v13, 0LL);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v4;
}
