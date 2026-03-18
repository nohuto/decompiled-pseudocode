/*
 * XREFs of NtUserMoveWindow @ 0x1C00ED1E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     xxxMoveWindow @ 0x1C00ED36C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r13
  int v15; // edi
  __int64 v16; // r12
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-20h] BYREF
  int v23; // [rsp+4Ch] [rbp-1Ch]
  int v24; // [rsp+50h] [rbp-18h]
  int v25; // [rsp+54h] [rbp-14h]

  EnterCrit(1LL);
  v10 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v10;
  if ( v10 )
  {
    v12 = (*(_WORD *)(v10 + 66) & 0x3FFFu) - 669;
    if ( (v12 & 0xFFFFFFFD) != 0 )
    {
      v21[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v21;
      v21[1] = v10;
      ++*(_DWORD *)(v10 + 8);
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
      v15 = a5;
      if ( a5 < 0 )
      {
        v15 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v15 = 0x7FFF;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 224LL) & 1) == 0 )
      {
        v16 = *(_QWORD *)(v14 + 16);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
        if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v16 + 384)) )
        {
          v22 = a2;
          v24 = a4 + a2;
          v23 = a3;
          v25 = a3 + v15;
          TransformRectBetweenCoordinateSpaces(&v22, &v22, v14, 0LL);
          v15 = v25 - v23;
        }
      }
      v13 = xxxMoveWindow((struct tagWND *)v14, v15, a6);
      ThreadUnlock1(v19, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
