/*
 * XREFs of ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0031C70
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0001F60 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0004580 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C000A8CC (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x1C0074C78 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x1C00604E8 (--1FxVerifierLock@@QEAA@XZ.c)
 */

FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  FxVerifierLock::~FxVerifierLock(this);
  if ( this )
    FxPoolFree(this);
  return this;
}
