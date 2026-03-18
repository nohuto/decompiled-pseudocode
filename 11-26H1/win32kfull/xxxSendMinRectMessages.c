/*
 * XREFs of xxxSendMinRectMessages @ 0x14021D3B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1402B55B0 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rbp
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // ebx
  struct tagTHREADINFO **v8; // rsi
  unsigned int *v9; // rcx
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  v5 = PtiCurrent((__int64)a1);
  if ( ((*((_DWORD *)v5 + 178) | *(_DWORD *)(**((_QWORD **)v5 + 62) + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5LL, v4, a2, 10);
    v2 = 1;
  }
  v6 = *((_QWORD *)v5 + 62);
  if ( *(_QWORD *)(v6 + 224) )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v13, *((void **)v5 + 61));
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(unsigned int **)(v6 + 224);
      if ( !v9 || v9[3] || v7 >= *v9 )
        break;
      if ( *(struct tagTHREADINFO ***)&v9[4 * v7 + 6] == v8 )
        ++v7;
      if ( v7 >= *v9 )
        break;
      v8 = *(struct tagTHREADINFO ***)&v9[4 * v7 + 6];
      if ( !v8 )
        break;
      v11 = *(_QWORD *)&v9[4 * v7 + 6];
      v14 = 0LL;
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v11);
      if ( xxxSendTransformableMessageTimeout(v8, 139LL, v4, a2, 0, 0x64u, &v14, 1u, 0) )
        v2 = 1;
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
    if ( v13[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v13);
  }
  return v2;
}
