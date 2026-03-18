/*
 * XREFs of UserGetHwnd @ 0x1402A496C
 * Callers:
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140310430 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140310EB4 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     NtGdiSetPixelFormat @ 0x1403345B0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x140175020 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall UserGetHwnd(HDC a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  const struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 UserSessionState; // rax

  v7 = 0;
  GreLockVisRgnShared(a1, a2, a3, a4);
  v9 = PwndFromHDC(a1, v8);
  v12 = (__int64)v9;
  if ( v9 )
  {
    *a2 = *(_QWORD *)v9;
    UserSessionState = W32GetUserSessionState(v11, v10);
    v7 = 1;
    *a3 = GetProp(v12, *(unsigned __int16 *)(UserSessionState + 41382), 1u);
  }
  GreUnlockVisRgn(v11);
  return v7;
}
