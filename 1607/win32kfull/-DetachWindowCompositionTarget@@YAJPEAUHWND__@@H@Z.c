/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C012919C
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C0129150 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0129270 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
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
      v8 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v7, a2) == 0 ? 0xC0000225 : 0;
    else
      v8 = -1073741790;
    ThreadUnlock1(v12, v11);
  }
  else
  {
    v8 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v8;
}
