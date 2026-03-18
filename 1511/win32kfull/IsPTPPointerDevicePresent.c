/*
 * XREFs of IsPTPPointerDevicePresent @ 0x1C01D1714
 * Callers:
 *     _FindPointerDevice @ 0x1C011A7F8 (_FindPointerDevice.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall IsPTPPointerDevicePresent(__int64 a1, struct DEVICEINFO **a2)
{
  unsigned int v3; // edi
  struct DEVICEINFO *v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v3 = 0;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( a2 )
    *a2 = 0LL;
  if ( LODWORD(aDeviceTemplate[154]) )
    v4 = gpRimDevBackedDeviceInfoList;
  else
    v4 = (struct DEVICEINFO *)gpDeviceInfoList;
  while ( v4 )
  {
    if ( *((_DWORD *)v4 + 77) )
    {
      v5 = *((_QWORD *)v4 + 50);
      if ( *(_WORD *)(v5 + 42) == 13 && *(_WORD *)(v5 + 40) == 5 )
      {
        v3 = 1;
        if ( a2 )
          *a2 = v4;
        break;
      }
    }
    v4 = (struct DEVICEINFO *)*((_QWORD *)v4 + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  return v3;
}
