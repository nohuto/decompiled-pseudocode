/*
 * XREFs of IoGetOplockFullFoExt @ 0x140036368
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL);
  else
    return 0LL;
}
