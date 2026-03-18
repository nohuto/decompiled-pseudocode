/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x1400F3880
 * Callers:
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
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
