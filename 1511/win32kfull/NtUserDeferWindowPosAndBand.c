/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C00755B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     DestroySMWP @ 0x1C0051890 (DestroySMWP.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _DeferWindowPosAndBand @ 0x1C0074600 (_DeferWindowPosAndBand.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0074F18 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C007576C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C014D494 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01C2D74 (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  unsigned int v13; // r15d
  __int64 v14; // rbx
  _DWORD *v15; // rax
  _DWORD *v16; // rsi
  struct tagWND *v17; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v21; // rax
  EnterLeaveCrit *v22; // rcx
  struct tagWND *v24; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v25; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+A8h] [rbp+38h] BYREF

  v27 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v13 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004);
    v14 = 0LL;
  }
  else
  {
    v15 = (_DWORD *)HMValidateHandle(a1, 4);
    v14 = 0LL;
    v16 = v15;
    if ( v15 )
    {
      if ( (v15[6] & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v15);
        UserSetLastError(1405);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v24) && (unsigned int)ValidateHWNDIA(a3, &v25) )
      {
        v17 = v24;
        if ( v24 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v17 = v24;
          if ( (*(_BYTE *)(*(_QWORD *)(ThreadWin32Thread + 432) + 224LL) & 1) == 0 )
          {
            v19 = *((_QWORD *)v24 + 2);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
            if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v19 + 376)) )
              TransformSWPCoords(v17, &v27, &a5, &a6, &a7, v13);
          }
        }
        v21 = (__int64 *)DeferWindowPosAndBand(
                           (__int64)v16,
                           (__int64)v17,
                           (unsigned __int64)v25,
                           v27,
                           a5,
                           a6,
                           a7,
                           v13,
                           a9,
                           a10);
        if ( v21 )
          v14 = *v21;
      }
      else if ( a10 )
      {
        DestroySMWP(v16);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  EnterLeaveCrit::~EnterLeaveCrit(v22);
  return v14;
}
