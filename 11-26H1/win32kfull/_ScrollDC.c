/*
 * XREFs of _ScrollDC @ 0x14003EB40
 * Callers:
 *     NtUserScrollDC @ 0x1402BB370 (NtUserScrollDC.c)
 * Callees:
 *     FastWindowFromDC @ 0x14003E9DC (FastWindowFromDC.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x14003F6C0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 */

_BOOL8 __fastcall ScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, struct tagRECT *a7)
{
  HRGN v8; // rbx
  struct tagWND *v12; // rax
  BOOL v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  _DWORD v18[4]; // [rsp+50h] [rbp-28h] BYREF

  v18[0] = 0;
  v8 = 0LL;
  v12 = (struct tagWND *)FastWindowFromDC((__int64)a1);
  if ( v12 )
  {
    v8 = *(HRGN *)(*((_QWORD *)v12 + 5) + 136LL);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v13 = InternalScrollDC(v12, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  UserSessionState = W32GetUserSessionState(v15, v14);
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), 0LL, v18);
  if ( v18[0] )
    GreUnlockVisRgnShared();
  else
    GreUnlockVisRgn();
  return v13;
}
