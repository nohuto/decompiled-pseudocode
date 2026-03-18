/*
 * XREFs of UpdateRimManagedKeyboardLeds @ 0x1C009CD4C
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     UpdateKeyLights @ 0x1C009D668 (UpdateKeyLights.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void UpdateRimManagedKeyboardLeds()
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  BOOLEAN v1; // di
  struct DEVICEINFO *i; // rbx
  int v3; // [rsp+58h] [rbp-20h]
  char v4; // [rsp+80h] [rbp+8h] BYREF
  char v5; // [rsp+88h] [rbp+10h] BYREF
  char v6; // [rsp+90h] [rbp+18h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v1 = IsResourceAcquiredExclusiveLite;
  if ( aDeviceTemplate[84] != -1LL )
  {
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_();
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 27) )
      {
        if ( (gdwUpdateKeyboard & 1) != 0 )
        {
          LOBYTE(v3) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[84],
            *((_QWORD *)i + 2),
            720900LL,
            &gktp,
            6,
            0LL,
            0,
            &v4,
            &giosbKbdControl,
            1,
            0,
            v3);
        }
        if ( (gdwUpdateKeyboard & 2) != 0 )
        {
          LOBYTE(v3) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[84],
            *((_QWORD *)i + 2),
            720904LL,
            &gklp,
            4,
            0LL,
            0,
            &v4,
            &giosbKbdControl,
            1,
            0,
            v3);
        }
        if ( (gdwUpdateKeyboard & 4) != 0
          && (*((_BYTE *)i + 400) == 7 && *((_BYTE *)i + 401) == 82
           || gbRemoteSession && gRemoteClientKeyboardType[0] == 7 && gRemoteClientKeyboardType[1] == 131074) )
        {
          LOBYTE(v3) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[84],
            *((_QWORD *)i + 2),
            724996LL,
            &gKbdImeStatus,
            12,
            0LL,
            0,
            &v5,
            &giosbKbdControl,
            1,
            0,
            v3);
        }
      }
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
    if ( !v1 )
      LeaveDeviceInfoListCrit_();
  }
}
