/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00986C8
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0098400 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0098798 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v7 + 16)) )
      v11 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v7, a2) != 0 ? 0x803E0006 : 0;
    else
      v11 = -1073741790;
    ThreadUnlock1(v10, v9);
  }
  else
  {
    v11 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v11;
}
