/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0099D38
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C0099D30 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetAncestor @ 0x1C00987DC (_GetAncestor.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0099E24 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(unsigned __int64 a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  int v16; // ebx
  __int64 v18; // rax
  int v19; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  *a3 = 0LL;
  LOBYTE(v6) = 1;
  v9 = HMValidateHandleNoSecure(a1, v6, v7, v8);
  v12 = v9;
  if ( v9 && (v11 = (*(_WORD *)(v9 + 66) & 0x3FFFu) - 669, (v11 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11, v10);
    v14 = *(_QWORD **)(v12 + 16);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v14[47]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v14[156] == GetAncestor(v12) && (v18 = v14[157]) != 0 && v15 == *(_QWORD **)(*(_QWORD *)(v18 + 16) + 376LL) )
    {
      v16 = AttachInputQueueToWindow((struct tagWND *)v12, a2);
      if ( v16 >= 0 )
        *a3 = (struct tagWND *)v12;
    }
    else
    {
      v16 = -1073741790;
    }
  }
  else
  {
    v16 = -1073741811;
  }
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v11, v10);
  return (unsigned int)v16;
}
