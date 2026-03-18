/*
 * XREFs of NtUserGetPointerDevice @ 0x1C0147E70
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _FindPointerDevice @ 0x1C011A7F8 (_FindPointerDevice.c)
 *     IsPointerDeviceAccessible @ 0x1C011D980 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C011D9A0 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(unsigned __int64 a1, volatile void *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _LIST_ENTRY *v8; // [rsp+70h] [rbp+18h] BYREF
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
    UserSetLastError(87);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  if ( (int)GetPointerDeviceInfoProperties((__int64)a2, (__int64)v8) < 0 )
    UserSetLastError(122);
  else
    v4 = 1;
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
