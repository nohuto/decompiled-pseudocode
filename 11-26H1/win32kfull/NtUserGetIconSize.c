/*
 * XREFs of NtUserGetIconSize @ 0x1401BF250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x1401BF328 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1401BF3F0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v8; // edi
  struct tagCURSOR *v9; // rax
  __int64 v10; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  int v14[3]; // [rsp+24h] [rbp-24h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v13 = 0;
  v14[0] = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v15, 1LL);
  v9 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a1, 3u);
  if ( v9 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v9);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, a2)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v13, v14);
      RtlWriteULongToUser(a3, (unsigned int)v13);
      RtlWriteULongToUser(a4, (unsigned int)v14[0]);
      v8 = 1;
      v14[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
