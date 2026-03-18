/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0057374
 * Callers:
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0005BC8 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C00085D0 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00086B0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0055B70 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C006BA9C (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0054E68 (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this, __int64 a2)
{
  MxTimer::~MxTimer(&this->Timer, a2);
  if ( this )
    FxPoolFree(this);
  return this;
}
