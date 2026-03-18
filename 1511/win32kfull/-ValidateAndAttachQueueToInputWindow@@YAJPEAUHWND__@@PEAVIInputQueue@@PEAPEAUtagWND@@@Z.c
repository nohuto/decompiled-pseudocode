/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00CF0B8
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C00CF0B0 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00CF1A4 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _GetAncestor @ 0x1C00D0504 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(unsigned __int64 a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  int v13; // ebx
  __int64 v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  *a3 = 0LL;
  v6 = HMValidateHandleNoSecure(a1, 1);
  v9 = v6;
  if ( v6 && (v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
    v11 = *(_QWORD **)(v9 + 16);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v11[47]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v11[153] == GetAncestor(v9, 1LL) && (v15 = v11[154]) != 0 && v12 == *(_QWORD **)(*(_QWORD *)(v15 + 16) + 376LL) )
    {
      v13 = AttachInputQueueToWindow((struct tagWND *)v9, a2);
      if ( v13 >= 0 )
        *a3 = (struct tagWND *)v9;
    }
    else
    {
      v13 = -1073741790;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v8, v7);
  return (unsigned int)v13;
}
