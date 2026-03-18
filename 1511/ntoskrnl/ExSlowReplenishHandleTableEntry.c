/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x1400D0410
 * Callers:
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpReferenceObjectByHandle @ 0x140436BA0 (ObpReferenceObjectByHandle.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
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
