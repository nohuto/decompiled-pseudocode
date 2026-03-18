/*
 * XREFs of IsPTPPointerDevicePresent @ 0x1C01C940C
 * Callers:
 *     _FindPointerDevice @ 0x1C00E44A4 (_FindPointerDevice.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall IsPTPPointerDevicePresent(__int64 a1, struct DEVICEINFO **a2)
{
  unsigned int v3; // edi
  struct DEVICEINFO *i; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v3 = 0;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( a2 )
    *a2 = 0LL;
  for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_DWORD *)i + 79) )
    {
      v5 = *((_QWORD *)i + 58);
      if ( *(_WORD *)(v5 + 42) == 13 && *(_WORD *)(v5 + 40) == 5 )
      {
        v3 = 1;
        if ( a2 )
          *a2 = i;
        break;
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  return v3;
}
