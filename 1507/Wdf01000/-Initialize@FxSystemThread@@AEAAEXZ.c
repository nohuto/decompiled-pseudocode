/*
 * XREFs of ?Initialize@FxSystemThread@@AEAAEXZ @ 0x1C00A6658
 * Callers:
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00A692C (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C00A6414 (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 */

bool __fastcall FxSystemThread::Initialize(FxSystemThread *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char m_ObjectFlags; // al
  void (__fastcall *WorkerRoutine)(void *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_Initialized = 1;
  if ( m_ObjectFlags < 0 && (WorkerRoutine = this[-1].m_Reaper.WorkerRoutine) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)WorkerRoutine, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return (int)FxSystemThread::CreateThread(this) >= 0;
}
