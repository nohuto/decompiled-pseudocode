/*
 * XREFs of ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C022FA4C
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022E6F0 (-CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C022F0DC (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::GetEarliestTPFrame(PointerFrameList *this, unsigned int *a2)
{
  int v2; // edx
  __int64 v3; // r8
  struct _LIST_ENTRY *Flink; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( (struct _LIST_ENTRY *)qword_1C032C5D8 != &gFrameTPListHead )
    v3 = qword_1C032C5D8;
  if ( this )
  {
    Flink = gFrameTPListHead.Flink;
    while ( Flink != &gFrameTPListHead )
    {
      Flink = Flink->Flink;
      ++v2;
    }
    *(_DWORD *)this = v2;
  }
  return (struct tagPOINTERINPUTFRAME *)v3;
}
