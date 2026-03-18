/*
 * XREFs of ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0266E98
 * Callers:
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0265040 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     UserGetHwnd @ 0x1C01DECB4 (UserGetHwnd.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::vConstructor(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2, __int64 a3)
{
  int v3; // ebp
  __int64 *v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 30);
  v4 = (__int64 *)((char *)this + 112);
  *((_QWORD *)this + 14) = 0LL;
  UserEnterUserCritSec(this, a2, a3);
  DEVLOCKOBJ::bLock(this, a2, 0);
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) == 0 || *(_DWORD *)(v7 + 32) )
  {
    v8 = *(_QWORD *)(v7 + 512);
    if ( v8 )
      v8 = *(_QWORD *)(v8 + 128);
    *v4 = v8;
  }
  else if ( !(unsigned int)UserGetHwnd(*(__int64 **)v7, &v9, v4) )
  {
    EngSetLastError(6u);
  }
  if ( !v3 )
    UserLeaveUserCritSec();
}
