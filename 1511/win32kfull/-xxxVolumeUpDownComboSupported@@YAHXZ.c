/*
 * XREFs of ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01EA36C
 * Callers:
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EA2A8 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

_BOOL8 __fastcall xxxVolumeUpDownComboSupported(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 i; // rcx
  struct DEVICEINFO *j; // rcx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( gPlatformRole != 8 )
    return 0LL;
  v1 = 0;
  EnterDeviceInfoListCrit_(a1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_BYTE *)(i + 48) == 1 )
      ++v1;
  }
  for ( j = gpRimDevBackedDeviceInfoList; j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
  {
    if ( *((_BYTE *)j + 48) == 1 )
      ++v1;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  LeaveDeviceInfoListCrit_(v4);
  return v1 <= 1;
}
