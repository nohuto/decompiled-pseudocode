/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C00EF070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C00EF164 (_GetPointerDeviceRects.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // ebx
  _OWORD *v7; // rcx
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF
  char v14; // [rsp+70h] [rbp+8h] BYREF

  v12 = 0uLL;
  v13 = 0uLL;
  v6 = 0;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v12, &v13) )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v7 = (_OWORD *)W32UserProbeAddress;
    *v7 = *v7;
    v8 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v8 = (_OWORD *)W32UserProbeAddress;
    *v8 = *v8;
    *a2 = v12;
    *a3 = v13;
    v6 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v6;
}
