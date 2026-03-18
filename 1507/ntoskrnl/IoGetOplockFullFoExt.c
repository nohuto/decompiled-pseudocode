/*
 * XREFs of IoGetOplockFullFoExt @ 0x140070F68
 * Callers:
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL, 0LL);
  else
    return 0LL;
}
