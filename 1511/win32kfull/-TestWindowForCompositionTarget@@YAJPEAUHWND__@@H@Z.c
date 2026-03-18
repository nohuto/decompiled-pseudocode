/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00D20B4
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00D1DE0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00D2184 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent, gptiCurrent, v7, v8);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v9 + 16)) )
      v13 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v9, a2) != 0 ? 0x803E0006 : 0;
    else
      v13 = -1073741790;
    ThreadUnlock1(v12, v11);
  }
  else
  {
    v13 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v13;
}
