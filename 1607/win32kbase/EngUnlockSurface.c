/*
 * XREFs of EngUnlockSurface @ 0x1C0074B90
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2660 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     HmgReferenceCheckLock @ 0x1C0074BE0 (HmgReferenceCheckLock.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00BCF68 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  unsigned int *p_pvScan0; // rbx
  char v2; // dl
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v4; // [rsp+40h] [rbp-18h]

  if ( pso )
  {
    p_pvScan0 = (unsigned int *)&pso[-1].pvScan0;
    v2 = 5;
    if ( &pso[-1].pvScan0 == (PVOID *)HmgReferenceCheckLock(pso->hsurf, v2, 0LL) )
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v3);
      v4 = p_pvScan0;
      HmgDecrementShareReferenceCount(p_pvScan0);
      v4 = 0LL;
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v3);
    }
  }
}
