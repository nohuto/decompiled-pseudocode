/*
 * XREFs of ?PowerStartingChild@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002DD60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartingChild(FxPkgPnp *This)
{
  int _a3; // r8d
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int64 _a2; // rdx
  __int64 v6; // rcx
  const void *_a1; // rcx
  unsigned __int8 parentOn; // [rsp+50h] [rbp+8h] BYREF

  _a3 = This->PowerCheckParentOverload(This, &parentOn);
  if ( _a3 >= 0 )
    return parentOn != 0 ? 783 : 867;
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    _a2 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    _a2 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 96LL);
  if ( *(_WORD *)(v6 + 10) )
    _a1 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qid(This->m_Globals, 2u, 0xCu, 0x12u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3);
  return 837LL;
}
