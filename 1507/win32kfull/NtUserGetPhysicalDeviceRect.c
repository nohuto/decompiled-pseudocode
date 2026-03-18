/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C021B4E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _FindPointerDevice @ 0x1C00EF35C (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(unsigned __int64 a1, _OWORD *a2)
{
  unsigned int v4; // ebx
  __int128 v5; // xmm1
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LIST_ENTRY *v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( a1 && a2 && (unsigned int)FindPointerDevice(a1, &v10, 0LL) )
  {
    if ( LODWORD(v10[1].Blink) == 8 )
      v5 = *(_OWORD *)((char *)&v10[12].Blink + 4);
    else
      v5 = *(_OWORD *)((char *)&v10[8].Blink + 4);
    v6 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v6 = (_OWORD *)W32UserProbeAddress;
    *v6 = *v6;
    *a2 = v5;
    v4 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}
