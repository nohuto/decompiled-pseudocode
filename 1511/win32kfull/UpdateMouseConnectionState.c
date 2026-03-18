/*
 * XREFs of UpdateMouseConnectionState @ 0x1C0095814
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C00957EC (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C00958FC (IsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  char v0; // di
  BOOLEAN IsResourceAcquiredExclusiveLite; // si
  __int64 v2; // rdx
  struct DEVICEINFO *v3; // rbx
  int v4; // edi
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v2 = aDeviceTemplate[0];
  if ( LODWORD(aDeviceTemplate[154]) )
    v3 = gpRimDevBackedDeviceInfoList;
  else
    v3 = (struct DEVICEINFO *)gpDeviceInfoList;
  while ( v3 )
  {
    if ( !*((_BYTE *)v3 + 48) && !*((_WORD *)v3 + 338) )
    {
      if ( *(_DWORD *)(v2 + 1232) )
      {
        if ( (*((_DWORD *)v3 + 44) & 0x100) != 0 )
          goto LABEL_7;
      }
      else if ( *((char *)v3 + 66) < 0 )
      {
        goto LABEL_7;
      }
      if ( !(unsigned int)IsMouseDeviceOnIgnoreList(v3) )
      {
        v0 = 1;
        break;
      }
      v2 = aDeviceTemplate[0];
    }
LABEL_7:
    v3 = (struct DEVICEINFO *)*((_QWORD *)v3 + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_();
  v4 = (BYTE4(qword_1C0322020) ^ (unsigned __int8)(16 * v0)) & 0x10;
  result = (unsigned int)v4 ^ HIDWORD(qword_1C0322020);
  HIDWORD(qword_1C0322020) ^= v4;
  return result;
}
