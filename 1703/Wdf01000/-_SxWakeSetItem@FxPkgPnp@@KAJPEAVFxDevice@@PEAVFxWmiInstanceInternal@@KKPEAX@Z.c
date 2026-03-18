/*
 * XREFs of ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C009C750
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C002477C (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_SxWakeSetItem(
        FxDevice *Device,
        _FX_DRIVER_GLOBALS *__formal,
        unsigned int DataItemId,
        unsigned int InBufferSize,
        _BYTE *InBuffer)
{
  if ( DataItemId )
    return 3221225488LL;
  if ( !InBufferSize )
    return 3221225507LL;
  LOBYTE(__formal) = *InBuffer;
  FxPkgPnp::PowerPolicySetSxWakeState(Device->m_PkgPnp, __formal);
  return 0LL;
}
