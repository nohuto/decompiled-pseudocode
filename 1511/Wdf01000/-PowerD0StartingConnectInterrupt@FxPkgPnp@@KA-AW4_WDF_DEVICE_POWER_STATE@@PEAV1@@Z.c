/*
 * XREFs of ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002EC90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C002F2C8 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077F70 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingConnectInterrupt(FxPkgPnp *This)
{
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  _LIST_ENTRY *i; // rsi
  int v4; // ebp
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v6; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // edx
  _LIST_ENTRY **p_Blink; // rdi
  int _a2; // eax
  const void *_a1; // rdi
  const void *v13; // rcx
  FxDeviceBase *v14; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // r8

  p_m_InterruptListHead = &This->m_InterruptListHead;
  for ( i = This->m_InterruptListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_InterruptListHead )
    {
      v4 = 0;
      goto LABEL_4;
    }
    p_Blink = &i[-28].Blink;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&i[-28].Blink, 0);
    v4 = _a2;
    if ( _a2 < 0 )
      break;
  }
  if ( *((_WORD *)p_Blink + 5) )
    _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x4Eu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
LABEL_4:
  if ( v4 >= 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v6 = 0LL;
    m_Method = This->m_DeviceD0EntryPostInterruptsEnabled.m_Method;
    if ( m_Method )
      globals = m_Method((WDFDEVICE__ *)v6, (_WDF_POWER_DEVICE_STATE)This->m_DevicePowerState);
    else
      globals = 0;
    if ( globals >= 0 )
      return 785LL;
    v14 = This->m_DeviceBase;
    m_DeviceObject = v14->m_DeviceObject.m_DeviceObject;
    if ( v14->m_ObjectSize )
      v13 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v13 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      globals,
      0xCu,
      0x10u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v13,
      m_DeviceObject,
      This->m_DevicePowerState,
      globals);
  }
  return 833LL;
}
