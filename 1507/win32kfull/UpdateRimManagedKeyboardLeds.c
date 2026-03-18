/*
 * XREFs of UpdateRimManagedKeyboardLeds @ 0x1C01447EC
 * Callers:
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void UpdateRimManagedKeyboardLeds()
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  BOOLEAN v1; // di
  struct DEVICEINFO *i; // rbx
  __int64 v3; // rcx
  int v4; // [rsp+58h] [rbp-20h]
  char v5; // [rsp+80h] [rbp+8h] BYREF
  char v6; // [rsp+88h] [rbp+10h] BYREF
  char v7; // [rsp+90h] [rbp+18h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v1 = IsResourceAcquiredExclusiveLite;
  if ( aDeviceTemplate[84] != -1LL )
  {
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(aDeviceTemplate[0]);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) )
      {
        if ( (gdwUpdateKeyboard & 1) != 0 )
        {
          LOBYTE(v4) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[84],
            *((_QWORD *)i + 2),
            720900LL,
            &gktp,
            6,
            0LL,
            0,
            &v5,
            &giosbKbdControl,
            1,
            0,
            v4);
        }
        if ( (gdwUpdateKeyboard & 2) != 0 )
        {
          LOBYTE(v4) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[84],
            *((_QWORD *)i + 2),
            720904LL,
            &gklp,
            4,
            0LL,
            0,
            &v5,
            &giosbKbdControl,
            1,
            0,
            v4);
        }
        if ( (gdwUpdateKeyboard & 4) != 0
          && (*((_BYTE *)i + 400) == 7 && *((_BYTE *)i + 401) == 82
           || gbRemoteSession && gRemoteClientKeyboardType[0] == 7 && gRemoteClientKeyboardType[1] == 131074) )
        {
          LOBYTE(v4) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[84],
            *((_QWORD *)i + 2),
            724996LL,
            &gKbdImeStatus,
            12,
            0LL,
            0,
            &v6,
            &giosbKbdControl,
            1,
            0,
            v4);
        }
      }
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
    if ( !v1 )
      LeaveDeviceInfoListCrit_(v3);
  }
}
