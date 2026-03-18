/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C0214140
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _FindPointerDevice @ 0x1C00E44A4 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(unsigned __int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int128 v5; // xmm1
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LIST_ENTRY **v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( a1 && a2 && (unsigned int)FindPointerDevice(a1, &v10, 0LL) )
  {
    if ( *((_DWORD *)v10 + 6) == 7 )
      v5 = *(_OWORD *)((char *)v10 + 204);
    else
      v5 = *(_OWORD *)((char *)v10 + 140);
    v6 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v6 = (_OWORD *)W32UserProbeAddress;
    *v6 = *v6;
    *a2 = v5;
    v4 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
