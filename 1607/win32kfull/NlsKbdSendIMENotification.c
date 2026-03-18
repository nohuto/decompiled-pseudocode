/*
 * XREFs of NlsKbdSendIMENotification @ 0x1C0114D30
 * Callers:
 *     xxxNotifyIMEStatus @ 0x1C0114C08 (xxxNotifyIMEStatus.c)
 *     NlsKbdSendIMEProc @ 0x1C0228BF8 (NlsKbdSendIMEProc.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NlsKbdSendIMENotification(__int64 a1, int a2)
{
  struct DEVICEINFO *i; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  if ( gpKbdNlsTbl && (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
  {
    gKbdImeStatus = 0;
    dword_1C03325E4 = a1;
    dword_1C03325E8 = a2;
    EnterDeviceInfoListCrit_(a1);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) )
        gdwUpdateKeyboard |= 4u;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
    LeaveDeviceInfoListCrit_(v5, v4);
  }
  return 1LL;
}
