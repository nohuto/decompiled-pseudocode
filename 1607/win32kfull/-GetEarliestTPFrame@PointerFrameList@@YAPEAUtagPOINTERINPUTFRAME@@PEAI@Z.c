/*
 * XREFs of ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01C0DD4
 * Callers:
 *     ?CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01BFA00 (-CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C01C0400 (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::GetEarliestTPFrame(PointerFrameList *this, unsigned int *a2)
{
  int v2; // edx
  __int64 v3; // r8
  void **v5; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( (_UNKNOWN *)qword_1C0329638 != &gFrameTPListHead )
    v3 = qword_1C0329638;
  if ( this )
  {
    v5 = (void **)gFrameTPListHead;
    while ( v5 != (void **)&gFrameTPListHead )
    {
      v5 = (void **)*v5;
      ++v2;
    }
    *(_DWORD *)this = v2;
  }
  return (struct tagPOINTERINPUTFRAME *)v3;
}
