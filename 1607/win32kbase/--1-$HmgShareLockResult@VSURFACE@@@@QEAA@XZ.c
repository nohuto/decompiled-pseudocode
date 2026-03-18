/*
 * XREFs of ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00C4E28
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00C4E50 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(__int64 a1)
{
  UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
