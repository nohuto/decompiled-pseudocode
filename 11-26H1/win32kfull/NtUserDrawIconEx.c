/*
 * XREFs of NtUserDrawIconEx @ 0x140027D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x1401BF328 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1401BF3F0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserDrawIconEx(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        char a9,
        int a10,
        volatile int *Address)
{
  int v15; // edi
  __int64 v16; // rdx
  struct tagCURSOR *v17; // rax
  __int64 v18; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  __int64 CurrentProcessWow64Process; // rax
  _BYTE v23[8]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-20h]

  v15 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  LOBYTE(v16) = 3;
  v17 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a4, v16);
  if ( !v17 )
    goto LABEL_9;
  VirtualizedDpiCursor = GetVirtualizedDpiCursor(v17);
  AnimatedCursorFrame = VirtualizedDpiCursor;
  if ( !a10 )
  {
    v15 = DrawIconEx(a1, a2, a3, (__int64)VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    goto LABEL_4;
  }
  if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
    || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    *(_QWORD *)Address = *((_QWORD *)AnimatedCursorFrame + 11);
    *((_QWORD *)Address + 1) = *((_QWORD *)AnimatedCursorFrame + 12);
    *((_QWORD *)Address + 4) = *((_QWORD *)AnimatedCursorFrame + 16);
    GetVirtualizedCursorSize(AnimatedCursorFrame, Address + 6, Address + 7);
    *((_DWORD *)Address + 4) = *((_DWORD *)AnimatedCursorFrame + 35);
    *((_DWORD *)Address + 5) = *((_DWORD *)AnimatedCursorFrame + 36);
  }
  else
  {
LABEL_9:
    v15 = 0;
  }
LABEL_4:
  if ( v23[0] )
  {
    v18 = v24;
    --*(_DWORD *)(v24 + 28);
  }
  UserSessionSwitchLeaveCrit(v18);
  return v15;
}
