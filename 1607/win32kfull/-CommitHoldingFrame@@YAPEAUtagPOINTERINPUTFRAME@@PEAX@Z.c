/*
 * XREFs of ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01BFFF8
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01BF714 (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C01C0A88 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C16F8 (-ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitHoldingFrame(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rdi
  __int64 v3; // rbx
  struct tagPOINTERQFRAME *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _LIST_ENTRY *Flink; // rax

  HoldingFrameForDevice = FindHoldingFrameForDevice(a1);
  EtwTraceBeginPointerFrameCommit(0LL, *((unsigned int *)HoldingFrameForDevice + 8));
  v3 = Win32AllocPoolZInit(112LL, 1718645589LL);
  if ( !v3 )
    return 0LL;
  v5 = AllocPointerQFrameList(*((_DWORD *)HoldingFrameForDevice + 8));
  *(_QWORD *)(v3 + 96) = v5;
  if ( !v5 )
  {
    Win32FreePool(v3, v6, v7);
    return 0LL;
  }
  v9 = 1LL;
  *(_QWORD *)(v3 + 64) = *((_QWORD *)HoldingFrameForDevice + 3);
  v10 = dword_1C0328B98;
  v11 = dword_1C0328B98 == -1;
  v12 = dword_1C0328B98 + 1;
  *(_DWORD *)(v3 + 32) = dword_1C0328B98;
  if ( v11 )
    v12 = 1;
  dword_1C0328B98 = v12;
  *(_DWORD *)(v3 + 40) = *((_DWORD *)HoldingFrameForDevice + 8);
  *(_QWORD *)(v3 + 56) = *((_QWORD *)HoldingFrameForDevice + 2);
  *(_QWORD *)(v3 + 88) = *((_QWORD *)HoldingFrameForDevice + 8);
  *(_DWORD *)(v3 + 48) = *((_DWORD *)HoldingFrameForDevice + 10);
  v13 = *((_QWORD *)HoldingFrameForDevice + 6);
  *(_QWORD *)(v3 + 80) = v13;
  while ( v13 )
  {
    *(_DWORD *)v13 = v10;
    v13 = *(_QWORD *)(v13 + 24);
  }
  LOBYTE(v9) = 19;
  v14 = HMValidateHandleNoSecure((unsigned __int64)a1, v9, v7, v8);
  HMAssignmentLock(v3 + 104, *(_QWORD *)(v14 + 480));
  ResetHoldingFrame(HoldingFrameForDevice);
  Flink = gFrameListHead.Flink;
  if ( gFrameListHead.Flink->Blink != &gFrameListHead )
    __fastfail(3u);
  *(_QWORD *)v3 = gFrameListHead.Flink;
  *(_QWORD *)(v3 + 8) = &gFrameListHead;
  Flink->Blink = (struct _LIST_ENTRY *)v3;
  gFrameListHead.Flink = (struct _LIST_ENTRY *)v3;
  *(_QWORD *)(v3 + 24) = v3 + 16;
  *(_QWORD *)(v3 + 16) = v3 + 16;
  return (struct tagPOINTERINPUTFRAME *)v3;
}
