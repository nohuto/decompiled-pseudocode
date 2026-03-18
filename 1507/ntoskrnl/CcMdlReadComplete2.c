/*
 * XREFs of CcMdlReadComplete2 @ 0x140474C68
 * Callers:
 *     FsRtlMdlReadCompleteDev @ 0x140031604 (FsRtlMdlReadCompleteDev.c)
 *     CcMdlReadComplete @ 0x140550FA8 (CcMdlReadComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
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
