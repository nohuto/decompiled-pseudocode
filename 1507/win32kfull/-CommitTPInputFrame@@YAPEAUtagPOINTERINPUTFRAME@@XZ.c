/*
 * XREFs of ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C022EC90
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022E6D4 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C022F600 (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitTPInputFrame(__int64 a1, unsigned int *a2)
{
  struct tagPOINTERINPUTFRAME *result; // rax
  __int64 v3; // rdx
  struct tagPOINTERINPUTFRAME **v4; // rcx
  struct _LIST_ENTRY *Flink; // rcx

  result = PointerFrameList::GetEarliestTPFrame(0LL, a2);
  if ( result )
  {
    v3 = *(_QWORD *)result;
    v4 = (struct tagPOINTERINPUTFRAME **)*((_QWORD *)result + 1);
    if ( *(struct tagPOINTERINPUTFRAME **)(*(_QWORD *)result + 8LL) != result || *v4 != result )
      __fastfail(3u);
    *v4 = (struct tagPOINTERINPUTFRAME *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    Flink = gFrameListHead.Flink;
    *(_QWORD *)result = gFrameListHead.Flink;
    *((_QWORD *)result + 1) = &gFrameListHead;
    if ( Flink->Blink != &gFrameListHead )
      __fastfail(3u);
    Flink->Blink = (struct _LIST_ENTRY *)result;
    gFrameListHead.Flink = (struct _LIST_ENTRY *)result;
  }
  return result;
}
