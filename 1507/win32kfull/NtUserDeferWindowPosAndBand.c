/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C0084040
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     DestroySMWP @ 0x1C0063A00 (DestroySMWP.c)
 *     _DeferWindowPosAndBand @ 0x1C00843D4 (_DeferWindowPosAndBand.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C008504C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0085A44 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C0124240 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     LeaveEditionCrit @ 0x1C01573F0 (LeaveEditionCrit.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // rbx
  _DWORD *v16; // rax
  _DWORD *v17; // rsi
  struct tagWND *v18; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *v26; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v27; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+38h] BYREF

  v29 = a4;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v14 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004);
    v15 = 0LL;
  }
  else
  {
    LOBYTE(v13) = 4;
    v16 = (_DWORD *)HMValidateHandle(a1, v13);
    v15 = 0LL;
    v17 = v16;
    if ( v16 )
    {
      if ( (v16[6] & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v16);
        UserSetLastError(1405);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v26) && (unsigned int)ValidateHWNDIA(a3, &v27) )
      {
        LODWORD(v18) = (_DWORD)v26;
        if ( v26 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v18 = v26;
          if ( (*(_BYTE *)(*(_QWORD *)(ThreadWin32Thread + 440) + 224LL) & 1) == 0 )
          {
            v20 = *((_QWORD *)v26 + 2);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
            if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v20 + 384)) )
              TransformSWPCoords(v18, &v29, &a5, &a6, &a7, v14);
          }
        }
        v22 = (__int64 *)DeferWindowPosAndBand((_DWORD)v17, (_DWORD)v18, (_DWORD)v27, v29, a5, a6, a7, v14, a9, a10);
        if ( v22 )
          v15 = *v22;
      }
      else if ( a10 )
      {
        DestroySMWP(v17);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  LeaveEditionCrit(v24, v23);
  return v15;
}
