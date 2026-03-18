/*
 * XREFs of NtUserGetPointerDevice @ 0x1C014C620
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C00E4274 (_GetPointerDeviceInfoProperties.c)
 *     IsPointerDeviceAccessible @ 0x1C00E4484 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C00E44A4 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDevice(unsigned __int64 a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _LIST_ENTRY **v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  if ( !a1 || !a2 )
    goto LABEL_9;
  if ( !(unsigned int)FindPointerDevice(a1, &v8, 0LL) )
    goto LABEL_8;
  if ( !(unsigned int)IsPointerDeviceAccessible((__int64)v8) )
  {
LABEL_9:
    UserSetLastError(87LL);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  if ( (int)GetPointerDeviceInfoProperties((__int64)a2, (__int64)v8) < 0 )
    UserSetLastError(122LL);
  else
    v4 = 1;
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
