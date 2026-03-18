/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1402505B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, void *a2, void *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __m128i v12; // [rsp+50h] [rbp-28h] BYREF

  Src = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &Src, &v12) )
  {
    RtlCopyToUser(a2, &Src, 0x10uLL);
    RtlCopyToUser(a3, &v12, 0x10uLL);
    v6 = 1;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87);
  }
  if ( v9[0] )
    --*(_DWORD *)(v10 + 28);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
