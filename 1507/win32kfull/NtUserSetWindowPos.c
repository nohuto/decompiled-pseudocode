/*
 * XREFs of NtUserSetWindowPos @ 0x1C0084E30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ConstrainWindowSize @ 0x1C005CC58 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C005CC88 (ConstrainWindowPos.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C008504C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C0124240 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagWND *v17; // rdi
  __int64 v18; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // ecx
  struct tagWND *v24; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v26[4]; // [rsp+60h] [rbp-20h] BYREF
  int v27; // [rsp+C0h] [rbp+40h] BYREF
  int v28; // [rsp+C8h] [rbp+48h] BYREF

  v28 = a4;
  v27 = a3;
  EnterCrit(1LL);
  v9 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(v9 + 66) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      v14 = a7;
      v25[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v25;
      v25[1] = v9;
      ++*(_DWORD *)(v9 + 8);
      if ( (v14 & 0xFFFC9800) != 0 )
      {
        v23 = 1004;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v24) )
        {
LABEL_19:
          ThreadUnlock1(v16, v15);
          goto LABEL_20;
        }
        if ( *(char *)(v13 + 44) >= 0 )
        {
          if ( (v14 & 2) == 0 )
            ConstrainWindowPos(&v27, &v28);
          if ( (v14 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v17 = v24;
          if ( (unsigned __int64)v24 <= 1 || (unsigned __int64)v24 > 0xFFFFFFFFFFFFFFFDuLL )
            v17 = 0LL;
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 224LL) & 1) == 0 )
          {
            v18 = *(_QWORD *)(v13 + 16);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
            if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v18 + 384)) )
              TransformSWPCoords((struct tagWND *)v13, &v27, &v28, &a5, &a6, v14);
          }
          v26[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v26;
          v26[1] = v17;
          if ( v17 )
            ++*((_DWORD *)v17 + 2);
          v12 = xxxSetWindowPosAndBand((struct tagWND *)v13, a5, a6, v14, 0);
          ThreadUnlock1(v21, v20);
          goto LABEL_19;
        }
        v23 = 87;
      }
      UserSetLastError(v23);
      goto LABEL_19;
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
