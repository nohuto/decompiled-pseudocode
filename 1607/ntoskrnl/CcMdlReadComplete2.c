/*
 * XREFs of CcMdlReadComplete2 @ 0x1404577F0
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x140071DA0 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x1404C4C00 (CcMdlReadComplete.c)
 * Callees:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
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
