/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1400E0384
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     memset @ 0x140195A80 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000LL);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  result = MiUnmapPageInHyperSpaceWorker(v4, v6);
  if ( (a2 & 0x1FF) != 0 )
  {
    result = 48 * a1 - 0x58000000000LL;
    *(_BYTE *)(result + 34) |= 0x10u;
  }
  return result;
}
