/*
 * XREFs of EngLockSurface @ 0x1C0075140
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C2E90 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateLockedBitmap @ 0x1C00CB270 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00CB2D0 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00CB330 (EngCreateLockedRedirectionDeviceBitmap.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0073650 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  unsigned int v1; // ebx
  struct _BASEOBJECT *v2; // rax
  SURFOBJ *v3; // rbx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  struct _BASEOBJECT *v6; // [rsp+40h] [rbp-18h]

  v1 = (unsigned int)hsurf;
  SURFREF::SURFREF((SURFREF *)v5);
  v2 = (struct _BASEOBJECT *)HmgShareLockCheckIgnoreStockBit(v1, 5);
  v6 = v2;
  if ( v2 && (HmgIncrementShareReferenceCount(v2), (v2 = v6) != 0LL) )
    v3 = (SURFOBJ *)((char *)v6 + 24);
  else
    v3 = 0LL;
  if ( v2 )
    HmgDecrementShareReferenceCount((unsigned int *)v2);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v5);
  return v3;
}
