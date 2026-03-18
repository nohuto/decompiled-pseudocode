/*
 * XREFs of ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022ECE8
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C022E404 (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C02302B4 (-ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitHoldingFrame(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rdi
  __int64 v3; // rbx
  struct tagPOINTERINPUTFRAME *result; // rax
  struct tagPOINTERQFRAME *v5; // rax
  int v6; // ecx
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rax

  HoldingFrameForDevice = FindHoldingFrameForDevice(a1);
  EtwTraceBeginPointerFrameCommit(0LL, *((unsigned int *)HoldingFrameForDevice + 8));
  v3 = Win32AllocPoolZInit(96LL, 1718645589LL);
  if ( !v3 )
    return 0LL;
  v5 = AllocPointerQFrameList(*((_DWORD *)HoldingFrameForDevice + 8));
  *(_QWORD *)(v3 + 80) = v5;
  if ( !v5 )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *(_QWORD *)(v3 + 48) = *((_QWORD *)HoldingFrameForDevice + 3);
  v6 = dword_1C0323500;
  v7 = dword_1C0323500 == -1;
  v8 = dword_1C0323500 + 1;
  *(_DWORD *)(v3 + 16) = dword_1C0323500;
  if ( v7 )
    v8 = 1;
  dword_1C0323500 = v8;
  *(_DWORD *)(v3 + 24) = *((_DWORD *)HoldingFrameForDevice + 8);
  *(_QWORD *)(v3 + 40) = *((_QWORD *)HoldingFrameForDevice + 2);
  *(_QWORD *)(v3 + 72) = *((_QWORD *)HoldingFrameForDevice + 8);
  *(_DWORD *)(v3 + 32) = *((_DWORD *)HoldingFrameForDevice + 10);
  v9 = *((_QWORD *)HoldingFrameForDevice + 6);
  *(_QWORD *)(v3 + 64) = v9;
  while ( v9 )
  {
    *(_DWORD *)v9 = v6;
    v9 = *(_QWORD *)(v9 + 24);
  }
  v10 = HMValidateHandleNoSecure((unsigned __int64)a1, 19);
  HMAssignmentLock(v3 + 88, *(_QWORD *)(v10 + 416));
  ResetHoldingFrame(HoldingFrameForDevice);
  Flink = gFrameListHead.Flink;
  *(_QWORD *)v3 = gFrameListHead.Flink;
  *(_QWORD *)(v3 + 8) = &gFrameListHead;
  if ( Flink->Blink != &gFrameListHead )
    __fastfail(3u);
  Flink->Blink = (struct _LIST_ENTRY *)v3;
  result = (struct tagPOINTERINPUTFRAME *)v3;
  gFrameListHead.Flink = (struct _LIST_ENTRY *)v3;
  return result;
}
