/*
 * XREFs of ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800B6984
 * Callers:
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180018CB8 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800B6954 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushPoolManager::ConsolidateUnusedLists(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rax
  struct _SLIST_ENTRY *v3; // rdx
  PSLIST_ENTRY v4; // r8
  PSLIST_ENTRY v5; // rcx
  ULONGLONG Alignment; // rax

  v2 = InterlockedFlushSList(this + 1);
  if ( v2 )
  {
    v3 = 0LL;
    v4 = v2 - 3;
    do
    {
      v5 = v2 - 3;
      v2 = v2->Next;
      v5[3].Next = v3;
      v3 = v5;
      ++LODWORD(this[3].Alignment);
    }
    while ( v2 );
    Alignment = this[4].Alignment;
    if ( Alignment )
      *(_QWORD *)(Alignment + 48) = v5;
    else
      this[3].Region = (ULONGLONG)v5;
    this[4].Alignment = (ULONGLONG)v4;
  }
}
