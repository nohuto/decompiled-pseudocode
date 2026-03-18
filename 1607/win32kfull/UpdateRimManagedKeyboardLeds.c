/*
 * XREFs of UpdateRimManagedKeyboardLeds @ 0x1C00EC68C
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void UpdateRimManagedKeyboardLeds()
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  BOOLEAN v1; // di
  struct DEVICEINFO *i; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // [rsp+58h] [rbp-20h]
  char v6; // [rsp+80h] [rbp+8h] BYREF
  char v7; // [rsp+88h] [rbp+10h] BYREF
  char v8; // [rsp+90h] [rbp+18h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v1 = IsResourceAcquiredExclusiveLite;
  if ( aDeviceTemplate[82] != -1LL )
  {
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(aDeviceTemplate[0]);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v8, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) )
      {
        if ( (gdwUpdateKeyboard & 1) != 0 )
        {
          LOBYTE(v5) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[82],
            *((_QWORD *)i + 2),
            720900LL,
            &gktp,
            6,
            0LL,
            0,
            &v6,
            &giosbKbdControl,
            1,
            0,
            v5);
        }
        if ( (gdwUpdateKeyboard & 2) != 0 )
        {
          LOBYTE(v5) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[82],
            *((_QWORD *)i + 2),
            720904LL,
            &gklp,
            4,
            0LL,
            0,
            &v6,
            &giosbKbdControl,
            1,
            0,
            v5);
        }
        if ( (gdwUpdateKeyboard & 4) != 0
          && (*((_BYTE *)i + 464) == 7 && *((_BYTE *)i + 465) == 82
           || gbRemoteSession && gRemoteClientKeyboardType[0] == 7 && gRemoteClientKeyboardType[1] == 131074) )
        {
          LOBYTE(v5) = 0;
          RIMDeviceIoControl(
            aDeviceTemplate[82],
            *((_QWORD *)i + 2),
            724996LL,
            &gKbdImeStatus,
            12,
            0LL,
            0,
            &v7,
            &giosbKbdControl,
            1,
            0,
            v5);
        }
      }
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
    if ( !v1 )
      LeaveDeviceInfoListCrit_(v4, v3);
  }
}
