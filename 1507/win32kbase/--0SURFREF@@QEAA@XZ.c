/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0
 * Callers:
 *     EngLockSurface @ 0x1C0008010 (EngLockSurface.c)
 *     EngModifySurface @ 0x1C0011F30 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00148A0 (EngAssociateSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     GreSetBitmapOwner @ 0x1C0044330 (GreSetBitmapOwner.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
