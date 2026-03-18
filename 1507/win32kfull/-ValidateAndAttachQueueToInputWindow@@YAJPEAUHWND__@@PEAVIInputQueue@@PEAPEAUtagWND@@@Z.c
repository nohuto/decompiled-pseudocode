/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00E9B28
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00E9B20 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E9C58 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     _GetAncestor @ 0x1C00E9F5C (_GetAncestor.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v18; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 && (v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v19;
    v19[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(gptiCurrent);
    v11 = *(_QWORD **)(v9 + 16);
    v12 = CurrentProcessWin32Process;
    v13 = (_QWORD *)v11[48];
    *a3 = 0LL;
    if ( CurrentProcessWin32Process == v13
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v11[154] == GetAncestor(v9, 1LL) && (v18 = v11[155]) != 0 && v12 == *(_QWORD **)(*(_QWORD *)(v18 + 16) + 384LL) )
    {
      v16 = AttachInputQueueToWindow((struct tagWND *)v9, a2);
      if ( v16 >= 0 )
        *a3 = (struct tagWND *)v9;
    }
    else
    {
      v16 = -1073741790;
    }
    ThreadUnlock1(v15, v14);
  }
  else
  {
    v16 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return (unsigned int)v16;
}
