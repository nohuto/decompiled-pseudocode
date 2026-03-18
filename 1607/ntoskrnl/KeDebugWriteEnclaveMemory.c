/*
 * XREFs of KeDebugWriteEnclaveMemory @ 0x1406E5E78
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x14065F178 (MiDbgReadWriteEnclave.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x14065F260 (MiDbgReadWriteEnclaveUnaligned.c)
 * Callees:
 *     KiEncls @ 0x14015E500 (KiEncls.c)
 */

__int64 __fastcall KeDebugWriteEnclaveMemory(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  while ( a3 )
  {
    KiEncls(5u);
    a1 += 8LL;
    a2 += 8LL;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
