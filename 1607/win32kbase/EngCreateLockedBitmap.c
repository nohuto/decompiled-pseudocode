/*
 * XREFs of EngCreateLockedBitmap @ 0x1C00CB270
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB068 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

SURFOBJ *__fastcall EngCreateLockedBitmap(__int64 a1, unsigned int a2, int a3, int a4, void *a5)
{
  SURFOBJ *v5; // rbx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v7, 0, 0LL, a1, a2, a3, a4, a5);
  v5 = 0LL;
  if ( v7[0] )
    v5 = EngLockSurface(*(HSURF *)(v7[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v7);
  return v5;
}
