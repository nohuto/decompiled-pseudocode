/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C00D1F08
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00D1DE0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00D1FE0 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( v6 && (v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(gptiCurrent, gptiCurrent, v9, v10);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v11 + 16)) )
      v15 = _AttachWindowCompositionTarget((struct tagWND *)v11, a2, a3);
    else
      v15 = -1073741790;
    ThreadUnlock1(v14, v13);
  }
  else
  {
    v15 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v15;
}
