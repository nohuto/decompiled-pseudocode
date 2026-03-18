/*
 * XREFs of VerifierIoFreeMdl @ 0x140739B88
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierIoFreeMdl(struct _MDL *a1)
{
  __int64 Size; // r9

  Size = (unsigned __int16)a1->Size;
  if ( a1 < MmHighestUserAddress || (struct _MDL *)((char *)a1 + Size) < a1 )
    VerifierBugCheckIfAppropriate(196, 224, (int)a1, Size, 0LL);
  if ( (a1->MdlFlags & 0x11) == 1 )
    VerifierBugCheckIfAppropriate(196, 184, (int)a1, a1->MdlFlags, 0LL);
  pXdvIoFreeMdl(a1);
}
