/*
 * XREFs of MiInitializeInPageSupport @ 0x1400E5470
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     MiPfIssueCoalescedSupport @ 0x140125790 (MiPfIssueCoalescedSupport.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiGetReadyInPageBlock @ 0x140659D50 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 */

char __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  char v3; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int PagePriorityThread; // ecx
  char v7; // dl
  __int64 v8; // rax

  *(_WORD *)(BugCheckParameter2 + 32) = 0;
  *(_BYTE *)(BugCheckParameter2 + 34) = 6;
  v2 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  v3 = a2;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 40;
  *(_QWORD *)(BugCheckParameter2 + 40) = BugCheckParameter2 + 40;
  *(_WORD *)(BugCheckParameter2 + 56) = 0;
  *(_BYTE *)(BugCheckParameter2 + 58) = 6;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  *(_QWORD *)(BugCheckParameter2 + 72) = BugCheckParameter2 + 64;
  *(_QWORD *)(BugCheckParameter2 + 64) = BugCheckParameter2 + 64;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  if ( (a2 & 1) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 189) |= 0x20u;
  *(_DWORD *)(BugCheckParameter2 + 176) = 1;
  *(_QWORD *)(BugCheckParameter2 + 248) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 200) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 160) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(BugCheckParameter2 + 152) = CurrentThread;
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( PagePriorityThread > 5 )
  {
    LOBYTE(PagePriorityThread) = 5;
    v7 = 5;
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 + 191) |= 4u;
    if ( PagePriorityThread )
      v7 = PagePriorityThread - 1;
    else
      v7 = v2;
  }
  LOBYTE(v8) = *(_BYTE *)(BugCheckParameter2 + 190) & 0x88;
  *(_QWORD *)(BugCheckParameter2 + 208) = v2;
  *(_BYTE *)(BugCheckParameter2 + 190) = PagePriorityThread & 7 | v8 | (16 * (v7 & 7));
  if ( (v3 & 2) != 0 )
  {
    v8 = KeAbPreAcquire(BugCheckParameter2, 0LL, 2);
    *(_QWORD *)(BugCheckParameter2 + 208) = v8;
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
  }
  return v8;
}
