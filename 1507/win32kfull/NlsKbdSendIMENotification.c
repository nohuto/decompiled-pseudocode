/*
 * XREFs of NlsKbdSendIMENotification @ 0x1C0047570
 * Callers:
 *     xxxNotifyIMEStatus @ 0x1C0047454 (xxxNotifyIMEStatus.c)
 *     NlsKbdSendIMEProc @ 0x1C0228FF8 (NlsKbdSendIMEProc.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
 */

__int64 __fastcall NlsKbdSendIMENotification(__int64 a1, int a2)
{
  struct DEVICEINFO *v2; // rbx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  if ( gpKbdNlsTbl && (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
  {
    gKbdImeStatus = 0;
    dword_1C03226EC = a1;
    dword_1C03226F0 = a2;
    EnterDeviceInfoListCrit_(a1);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    if ( aDeviceTemplate[308] )
      v2 = gpRimDevBackedDeviceInfoList;
    else
      v2 = (struct DEVICEINFO *)gpDeviceInfoList;
    if ( v2 )
    {
      v3 = (_DWORD *)gdwUpdateKeyboard;
      do
      {
        if ( *((_BYTE *)v2 + 48) == 1 && *((_QWORD *)v2 + 28) )
        {
          if ( aDeviceTemplate[308] )
          {
            *v3 |= 4u;
          }
          else
          {
            RequestDeviceChange(v2);
            v3 = (_DWORD *)gdwUpdateKeyboard;
          }
        }
        v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
      }
      while ( v2 );
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
    LeaveDeviceInfoListCrit_(v4);
  }
  return 1LL;
}
