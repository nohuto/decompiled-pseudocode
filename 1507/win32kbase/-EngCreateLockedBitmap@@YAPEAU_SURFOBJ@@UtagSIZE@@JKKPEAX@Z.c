/*
 * XREFs of ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B3A90
 * Callers:
 *     <none>
 * Callees:
 *     EngLockSurface @ 0x1C0008010 (EngLockSurface.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B38BC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

struct _SURFOBJ *__fastcall EngCreateLockedBitmap(struct tagSIZE a1, unsigned int a2, int a3, int a4, void *a5)
{
  SURFOBJ *v5; // rbx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v7, 0, 0LL, *(_QWORD *)&a1, a2, a3, a4, a5);
  v5 = 0LL;
  if ( v7[0] )
    v5 = EngLockSurface(*(HSURF *)(v7[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v7);
  return v5;
}
