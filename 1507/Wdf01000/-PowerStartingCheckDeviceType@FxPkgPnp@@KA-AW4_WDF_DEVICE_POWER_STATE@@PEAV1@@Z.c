/*
 * XREFs of ?PowerStartingCheckDeviceType@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C002CA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerStartingCheckDeviceType(FxPkgPnp *This)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)&This->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !v1 )
    return 783LL;
  result = 791LL;
  if ( *(_WORD *)(v1 + 8) != 4354 )
    return 783LL;
  return result;
}
