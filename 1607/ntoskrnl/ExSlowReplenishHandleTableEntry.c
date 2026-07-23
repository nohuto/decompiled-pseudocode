/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x140090450
 * Callers:
 *     PspReferenceCidTableEntry @ 0x14041F760 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
}
