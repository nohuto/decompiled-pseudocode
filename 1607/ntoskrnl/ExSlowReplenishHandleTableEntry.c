/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x140090CF0
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140447040 (ObpReferenceObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
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
