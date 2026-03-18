/*
 * XREFs of ?DpcHandler@FxInterrupt@@QEAAXPEAX0@Z @ 0x1C00A25BC
 * Callers:
 *     ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A2A70 (-_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::DpcHandler(FxInterrupt *this, void *SystemArgument1, void *SystemArgument2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFINTERRUPT__ *v4; // rbx
  FxCallbackLock *m_CallbackLock; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  void *v8; // rdx
  __int64 v9; // rdx
  FxDeviceBase *v10; // rdx
  void *v11; // rdx
  void *irql; // [rsp+40h] [rbp+18h] BYREF

  irql = SystemArgument2;
  m_Globals = this->m_Globals;
  v4 = 0LL;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + (unsigned int)((__int64 (__fastcall *)(_QWORD, void *))PfnKeGetCurrentProcessorNumberEx)(
                                                      0LL,
                                                      SystemArgument1)
                                    * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    LOBYTE(irql) = 0;
    m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&irql);
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v8 = (void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v8 = 0LL;
    if ( this->m_ObjectSize )
      v4 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_EvtInterruptDpc(v4, v8);
    LOBYTE(v9) = (_BYTE)irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v9);
  }
  else
  {
    v10 = this->m_DeviceBase;
    if ( v10->m_ObjectSize )
      v11 = (void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v11 = 0LL;
    if ( this->m_ObjectSize )
      v4 = (WDFINTERRUPT__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_EvtInterruptDpc(v4, v11);
  }
}
