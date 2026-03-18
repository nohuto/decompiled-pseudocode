/*
 * XREFs of CcMdlReadComplete2 @ 0x1404B0788
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x1400E90A8 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1404BC17C (CcMdlReadComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 */

void __fastcall CcMdlReadComplete2(__int64 a1, struct _MDL *a2)
{
  struct _MDL *v2; // rdi
  struct _MDL *Next; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      Next = v2->Next;
      MmUnlockPages(v2);
      IoFreeMdl(v2);
      v2 = Next;
    }
    while ( Next );
  }
}
