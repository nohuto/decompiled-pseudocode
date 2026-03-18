/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x140212230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1401BF3F0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v4; // r14
  int v6; // esi
  struct tagCURSOR *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rdi
  unsigned int ULongFromUser; // eax
  unsigned int v12; // eax
  struct tagCURSOR *AnimatedCursorFrame; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v15, 1LL);
  v7 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a1, 3u);
  v9 = 0LL;
  if ( v7 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v7);
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
    v12 = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, v12);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, v4);
      if ( !AnimatedCursorFrame )
        goto LABEL_6;
      v6 = *((_DWORD *)VirtualizedDpiCursor + 23);
      v8 = *(unsigned int *)(*((_QWORD *)VirtualizedDpiCursor + 14) + 4 * v4);
      VirtualizedDpiCursor = AnimatedCursorFrame;
    }
    else
    {
      v8 = 0LL;
    }
    if ( VirtualizedDpiCursor )
    {
      v9 = *(_QWORD *)VirtualizedDpiCursor;
      *a3 = v8;
      *a4 = v6;
    }
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
