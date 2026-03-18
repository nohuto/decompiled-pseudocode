/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C00A5A00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     DestroySMWP @ 0x1C0075EC0 (DestroySMWP.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A5B80 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     _DeferWindowPosAndBand @ 0x1C00A5BBC (_DeferWindowPosAndBand.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A64D8 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02109F8 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  _DWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagWND *v38; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v39; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v40[16]; // [rsp+60h] [rbp-10h] BYREF
  int v41; // [rsp+A8h] [rbp+38h] BYREF

  v41 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v40);
  v16 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004LL);
    v20 = 0LL;
  }
  else
  {
    LOBYTE(v13) = 4;
    v17 = (_DWORD *)HMValidateHandle(a1, v13, v14, v15);
    v20 = 0LL;
    v21 = v17;
    if ( v17 )
    {
      if ( (v17[6] & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v17, v18, v19);
        UserSetLastError(1405LL);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v38) && (unsigned int)ValidateHWNDIA(a3, &v39) )
      {
        v25 = (int)v38;
        if ( v38 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 432)
                         + 224LL) & 1) != 0
            || (v30 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 432),
                (*(_BYTE *)(v30 + 224) & 0x20) != 0) )
          {
            v25 = (int)v38;
          }
          else
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v30, v29, v31, v32);
            v25 = (int)v38;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != (*((_DWORD *)v38 + 88) & 0xF) )
              TransformSWPCoords(v38, &v41, &a5, &a6, &a7, v16);
          }
        }
        v34 = (__int64 *)DeferWindowPosAndBand((_DWORD)v21, v25, (_DWORD)v39, v41, a5, a6, a7, v16, a9, a10);
        if ( v34 )
          v20 = *v34;
      }
      else if ( a10 )
      {
        DestroySMWP(v21, v22, v23);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v40);
  UserSessionSwitchLeaveCrit(v36, v35);
  return v20;
}
