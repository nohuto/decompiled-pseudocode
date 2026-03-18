/*
 * XREFs of EngCreateLockedRedirectionDeviceBitmap @ 0x1C00CB330
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB068 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

SURFOBJ *__fastcall EngCreateLockedRedirectionDeviceBitmap(__int64 a1, __int64 a2, int a3)
{
  SURFOBJ *v3; // rbx
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0LL;
  CreateDriverSurfMem((__int64)v5, 3, a1, a2, 0, a3, 2048, (void *)0xDEADBEEFLL);
  if ( v5[0] )
    v3 = EngLockSurface(*(HSURF *)(v5[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v5);
  return v3;
}
