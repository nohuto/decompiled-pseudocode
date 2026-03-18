/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0004DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0004EDC (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0004F3C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  void (__fastcall *v3)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v4; // rcx
  void (__fastcall *v6)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v7; // rcx
  unsigned __int8 v8; // di
  void (__fastcall *InterruptNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  char v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+20h] [rbp-18h]

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    InterruptNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( InterruptNotifyRoutine )
    {
      v10 = 2;
      InterruptNotifyRoutine(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, v10);
    }
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else if ( ServiceContext->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(ServiceContext);
    v6 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( v6 )
    {
      v11 = 2;
      v6(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, v11);
    }
    if ( ServiceContext->m_ObjectSize )
      v7 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    v8 = ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v7, ServiceContext->m_InterruptInfo.MessageNumber);
    FxInterrupt::ReleaseLock(ServiceContext);
    return v8;
  }
  else
  {
    v3 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( v3 )
    {
      v12 = 2;
      v3(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3936u, v12);
    }
    if ( ServiceContext->m_ObjectSize )
      v4 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v4 = 0LL;
    return ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v4, ServiceContext->m_InterruptInfo.MessageNumber);
  }
}
