/*
 * XREFs of ?CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022F350
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C022E404 (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CreateTPFrame(struct tagPOINTERHOLDINGFRAME *a1)
{
  __int64 v2; // rbx
  struct tagPOINTERINPUTFRAME *result; // rax
  struct tagPOINTERQFRAME *v4; // rax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  struct _LIST_ENTRY *Flink; // rax

  v2 = Win32AllocPoolZInit(96LL, 1718645589LL);
  if ( !v2 )
    return 0LL;
  v4 = AllocPointerQFrameList(*((_DWORD *)a1 + 8));
  *(_QWORD *)(v2 + 80) = v4;
  if ( !v4 )
  {
    Win32FreePool(v2);
    return 0LL;
  }
  v5 = dword_1C0323500 == -1;
  v6 = dword_1C0323500 + 1;
  *(_DWORD *)(v2 + 16) = dword_1C0323500;
  if ( v5 )
    v6 = 1;
  dword_1C0323500 = v6;
  *(_DWORD *)(v2 + 24) = *((_DWORD *)a1 + 8);
  *(_QWORD *)(v2 + 40) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(v2 + 72) = *((_QWORD *)a1 + 8);
  v7 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), 19);
  HMAssignmentLock(v2 + 88, *(_QWORD *)(v7 + 416));
  v8 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)a1 + 10);
  v9 = *((_QWORD *)a1 + 6);
  *(_QWORD *)(v2 + 64) = v9;
  while ( v9 )
  {
    *(_DWORD *)v9 = v8;
    v9 = *(_QWORD *)(v9 + 24);
  }
  Flink = gFrameTPListHead.Flink;
  *(_QWORD *)v2 = gFrameTPListHead.Flink;
  *(_QWORD *)(v2 + 8) = &gFrameTPListHead;
  if ( Flink->Blink != &gFrameTPListHead )
    __fastfail(3u);
  Flink->Blink = (struct _LIST_ENTRY *)v2;
  result = (struct tagPOINTERINPUTFRAME *)v2;
  gFrameTPListHead.Flink = (struct _LIST_ENTRY *)v2;
  return result;
}
