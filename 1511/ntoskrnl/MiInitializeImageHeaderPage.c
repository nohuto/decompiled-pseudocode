/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1400EB630
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  result = MiUnmapPageInHyperSpaceWorker(v4, v6);
  if ( (a2 & 0x1FF) != 0 )
  {
    result = 48 * a1 - 0x58000000000LL;
    *(_BYTE *)(result + 34) |= 0x10u;
  }
  return result;
}
