/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1400FBB34
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(a1, &v7, 0x80000000);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  LOBYTE(v5) = v7;
  result = MiUnmapPageInHyperSpaceWorker(v4, v5);
  if ( (a2 & 0x1FF) != 0 )
  {
    result = 6 * a1;
    *(_BYTE *)(48 * a1 - 0x58000000000LL + 34) |= 0x10u;
  }
  return result;
}
