/*
 * XREFs of ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C00A6530
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C009D6A8 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C009E738 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxSystemThread::ExitThread(FxSystemThread *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char m_ObjectFlags; // al
  void (__fastcall *WorkerRoutine)(void *); // rcx
  bool v7; // zf
  void (__fastcall *v8)(void *); // rcx
  void (__fastcall *v9)(void *); // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  m_ObjectFlags = this->m_ObjectFlags;
  if ( !this->m_Initialized || this->m_Exit )
  {
    if ( m_ObjectFlags < 0 && (WorkerRoutine = this[-1].m_Reaper.WorkerRoutine) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)WorkerRoutine, irql, v4);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  else
  {
    v7 = this->m_ThreadPtr == 0LL;
    this->m_Exit = 1;
    if ( v7 )
    {
      if ( m_ObjectFlags < 0 && (v8 = this[-1].m_Reaper.WorkerRoutine) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)v8, irql, v4);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&this->m_InitEvent, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( m_ObjectFlags < 0 && (v9 = this[-1].m_Reaper.WorkerRoutine) != 0LL )
    {
      FxVerifierLock::Unlock((FxVerifierLock *)v9, irql, v4);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
    KeSetEvent(&this->m_WorkEvent.m_Event, 0, 0);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(this->m_ThreadPtr, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(this->m_ThreadPtr);
  }
  return 1;
}
