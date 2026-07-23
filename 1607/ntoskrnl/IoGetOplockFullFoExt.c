/*
 * XREFs of IoGetOplockFullFoExt @ 0x14007AFDC
 * Callers:
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    return IopGetFileObjectExtension(a1, 6LL, 0LL, a4);
  else
    return 0LL;
}
