/*
 * XREFs of UpdateMouseConnectionState @ 0x1C0039D1C
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0039CF4 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C0039E04 (IsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  char v0; // di
  __int64 v1; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // si
  __int64 v3; // rdx
  struct DEVICEINFO *v4; // rbx
  __int64 v5; // rcx
  int v6; // edi
  __int64 result; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v8, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v3 = *(_QWORD *)aDeviceTemplate;
  if ( aDeviceTemplate[308] )
    v4 = gpRimDevBackedDeviceInfoList;
  else
    v4 = (struct DEVICEINFO *)gpDeviceInfoList;
  while ( v4 )
  {
    if ( !*((_BYTE *)v4 + 48) && !*((_WORD *)v4 + 338) )
    {
      if ( *(_DWORD *)(v3 + 1232) )
      {
        if ( (*((_DWORD *)v4 + 46) & 0x100) != 0 )
          goto LABEL_7;
      }
      else if ( *((char *)v4 + 66) < 0 )
      {
        goto LABEL_7;
      }
      if ( !(unsigned int)IsMouseDeviceOnIgnoreList(v4) )
      {
        v0 = 1;
        break;
      }
      v3 = *(_QWORD *)aDeviceTemplate;
    }
LABEL_7:
    v4 = (struct DEVICEINFO *)*((_QWORD *)v4 + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v5);
  v6 = (BYTE4(qword_1C0323098) ^ (unsigned __int8)(16 * v0)) & 0x10;
  result = (unsigned int)v6 ^ HIDWORD(qword_1C0323098);
  HIDWORD(qword_1C0323098) ^= v6;
  return result;
}
