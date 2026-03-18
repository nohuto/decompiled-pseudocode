/*
 * XREFs of ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00C536C
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

_QWORD *__fastcall HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx

  *a1 = a2;
  v2 = a1 + 1;
  memset(a1 + 1, 0, 0x20uLL);
  v4 = 0LL;
  if ( v2 )
    v4 = (__int64)(v2 - 1);
  PushThreadGuardedObject(
    v2,
    v4,
    (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<BRUSH>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
