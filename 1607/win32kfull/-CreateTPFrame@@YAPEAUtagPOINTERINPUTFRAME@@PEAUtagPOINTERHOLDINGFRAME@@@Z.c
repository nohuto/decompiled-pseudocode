/*
 * XREFs of ?CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C06A4
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01BF714 (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CreateTPFrame(struct tagPOINTERHOLDINGFRAME *a1)
{
  __int64 v2; // rbx
  struct tagPOINTERINPUTFRAME *result; // rax
  struct tagPOINTERQFRAME *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = Win32AllocPoolZInit(112LL, 1718645589LL);
  if ( !v2 )
    return 0LL;
  v4 = AllocPointerQFrameList(*((_DWORD *)a1 + 8));
  *(_QWORD *)(v2 + 96) = v4;
  if ( !v4 )
  {
    Win32FreePool(v2, v5, v6);
    return 0LL;
  }
  v8 = 1LL;
  v9 = dword_1C0328B98 == -1;
  v10 = dword_1C0328B98 + 1;
  *(_DWORD *)(v2 + 32) = dword_1C0328B98;
  if ( v9 )
    v10 = 1;
  LOBYTE(v8) = 19;
  dword_1C0328B98 = v10;
  *(_DWORD *)(v2 + 40) = *((_DWORD *)a1 + 8);
  *(_QWORD *)(v2 + 56) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(v2 + 88) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v2 + 64) = *((_QWORD *)a1 + 3);
  v11 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), v8, v6, v7);
  HMAssignmentLock(v2 + 104, *(_QWORD *)(v11 + 480));
  v12 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 48) = *((_DWORD *)a1 + 10);
  v13 = *((_QWORD *)a1 + 6);
  *(_QWORD *)(v2 + 80) = v13;
  while ( v13 )
  {
    *(_DWORD *)v13 = v12;
    v13 = *(_QWORD *)(v13 + 24);
  }
  v14 = gFrameTPListHead;
  if ( *(_UNKNOWN **)(gFrameTPListHead + 8LL) != &gFrameTPListHead )
    __fastfail(3u);
  *(_QWORD *)v2 = gFrameTPListHead;
  *(_QWORD *)(v2 + 8) = &gFrameTPListHead;
  *(_QWORD *)(v14 + 8) = v2;
  result = (struct tagPOINTERINPUTFRAME *)v2;
  gFrameTPListHead = v2;
  return result;
}
