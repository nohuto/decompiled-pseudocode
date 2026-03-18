/*
 * XREFs of UpdateMouseConnectionState @ 0x1C00E342C
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C00E3404 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C00E34F0 (IsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  char v0; // di
  __int64 v1; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // si
  struct DEVICEINFO *i; // rbx
  int v4; // edi
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( !*((_BYTE *)i + 48)
      && !*((_WORD *)i + 370)
      && (*((_DWORD *)i + 46) & 0x100) == 0
      && !(unsigned int)IsMouseDeviceOnIgnoreList(i) )
    {
      v0 = 1;
      break;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_();
  v4 = (BYTE4(qword_1C03281F0) ^ (unsigned __int8)(16 * v0)) & 0x10;
  result = (unsigned int)v4 ^ HIDWORD(qword_1C03281F0);
  HIDWORD(qword_1C03281F0) ^= v4;
  return result;
}
