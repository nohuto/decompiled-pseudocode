/*
 * XREFs of ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0015608
 * Callers:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0012E84 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0014FD0 (-PowerD0StartingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C009B2AC (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00132CC (WPP_IFR_SF_qqqd.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C00150FC (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     WPP_IFR_SF_qDDDDsdxsd @ 0x1C009B468 (WPP_IFR_SF_qDDDDsdxsd.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C009B71C (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 */

__int64 __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int id; // edi
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  const char *_a10; // r11
  const char *flags; // r10
  const void *v9; // rdx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v11; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  FxInterrupt *SynchronizeContext; // [rsp+80h] [rbp-18h] BYREF
  int _a4; // [rsp+88h] [rbp-10h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) == 0
    || (m_WakeInterruptMachine = this->m_WakeInterruptMachine) == 0LL
    || !m_WakeInterruptMachine->m_ActiveForWake )
  {
    if ( this->m_UseSoftDisconnect
      && FxLibraryGlobals.IoReportInterruptInactive
      && this->m_Interrupt
      && this->m_Connected
      && (NotifyFlags & 8) != 0 )
    {
      FxInterrupt::ReportActive(this, 1u);
    }
    else
    {
      if ( this->m_ForceDisconnected || !this->m_InterruptInfo.Vector )
        return 0LL;
      if ( (NotifyFlags & 1) == 0 )
      {
        id = FxInterrupt::ConnectInternal(this);
        if ( id < 0 )
        {
          this->m_Interrupt = 0LL;
          _a10 = "True";
          flags = "True";
          if ( !this->m_FloatingSave )
            flags = "False";
          if ( this->m_InterruptInfo.ShareDisposition != 3 )
            _a10 = "False";
          WPP_IFR_SF_qDDDDsdxsd(
            m_Globals,
            this->m_InterruptInfo.Group,
            this->m_SynchronizeIrql,
            this->m_InterruptInfo.Irql,
            traceGuid,
            this->m_SpinLock,
            this->m_InterruptInfo.Vector,
            this->m_InterruptInfo.Irql,
            this->m_SynchronizeIrql,
            this->m_InterruptInfo.Mode,
            _a10,
            this->m_InterruptInfo.Group,
            this->m_InterruptInfo.TargetProcessorSet,
            flags,
            id);
          return (unsigned int)id;
        }
        this->m_Connected = 1;
        this->m_Active = 1;
      }
    }
    id = 0;
    SynchronizeContext = this;
    _a4 = 0;
    if ( this->m_EvtInterruptEnable
      && (KeSynchronizeExecution(
            this->m_Interrupt,
            (PKSYNCHRONIZE_ROUTINE)FxInterrupt::_InterruptEnableThunk,
            &SynchronizeContext),
          id = _a4,
          _a4 < 0) )
    {
      if ( this->m_ObjectSize )
        v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v9 = 0LL;
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase->m_ObjectSize )
        v11 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v11 = 0LL;
      WPP_IFR_SF_qqqd(m_Globals, 2u, 0xCu, 0x18u, WPP_InterruptObject_cpp_Traceguids, v11, v9, this->m_Interrupt, _a4);
    }
    else
    {
      this->m_Enabled = 1;
    }
    return (unsigned int)id;
  }
  m_WakeInterruptMachine->m_ActiveForWake = 0;
  return 0LL;
}
