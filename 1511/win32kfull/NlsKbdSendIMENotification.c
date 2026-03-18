/*
 * XREFs of NlsKbdSendIMENotification @ 0x1C0085B00
 * Callers:
 *     xxxNotifyIMEStatus @ 0x1C00859E8 (xxxNotifyIMEStatus.c)
 *     NlsKbdSendIMEProc @ 0x1C02292F8 (NlsKbdSendIMEProc.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     RequestDeviceChange @ 0x1C01E0784 (RequestDeviceChange.c)
 */

__int64 __fastcall NlsKbdSendIMENotification(int a1, int a2)
{
  struct DEVICEINFO *v3; // rbx
  _DWORD *v4; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF

  if ( gpKbdNlsTbl && (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
  {
    gKbdImeStatus = 0;
    dword_1C0327554 = a1;
    dword_1C0327558 = a2;
    EnterDeviceInfoListCrit_();
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    if ( aDeviceTemplate[308] )
      v3 = gpRimDevBackedDeviceInfoList;
    else
      v3 = (struct DEVICEINFO *)gpDeviceInfoList;
    if ( v3 )
    {
      v4 = (_DWORD *)gdwUpdateKeyboard;
      do
      {
        if ( *((_BYTE *)v3 + 48) == 1 && *((_QWORD *)v3 + 27) )
        {
          if ( aDeviceTemplate[308] )
          {
            *v4 |= 4u;
          }
          else
          {
            RequestDeviceChange(v3);
            v4 = (_DWORD *)gdwUpdateKeyboard;
          }
        }
        v3 = (struct DEVICEINFO *)*((_QWORD *)v3 + 7);
      }
      while ( v3 );
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
    LeaveDeviceInfoListCrit_();
  }
  return 1LL;
}
