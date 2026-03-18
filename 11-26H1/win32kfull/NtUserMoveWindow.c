/*
 * XREFs of NtUserMoveWindow @ 0x140048CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  struct tagWND *v14; // r13
  int v15; // edx
  int v16; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  int v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+54h] [rbp-1Ch]
  int v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]

  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateHwnd(a1);
  v13 = 0;
  v14 = (struct tagWND *)v11;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    v15 = *(_WORD *)(v12 + 42) & 0x2FFF;
    if ( v15 != 669 && v15 != 671 )
    {
      BugCheckParameter3[0] = *(_QWORD *)(v10 + 448);
      *(_QWORD *)(v10 + 448) = BugCheckParameter3;
      BugCheckParameter3[1] = v11;
      HMLockObject(v11);
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v16 = a5;
      if ( a5 < 0 )
      {
        v16 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v16 = 0x7FFF;
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(4294934528LL);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v14, CurrentThreadDpiAwarenessContext) )
      {
        v20 = a2;
        v22 = a4 + a2;
        v21 = a3;
        v23 = a3 + v16;
        TransformRectBetweenCoordinateSpaces(&v20, &v20, v14, 0LL);
        a4 = v22 - v20;
        v16 = v23 - v21;
      }
      v13 = xxxSetWindowPos(v14, a4, v16, a6 != 0 ? 20 : 28);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
