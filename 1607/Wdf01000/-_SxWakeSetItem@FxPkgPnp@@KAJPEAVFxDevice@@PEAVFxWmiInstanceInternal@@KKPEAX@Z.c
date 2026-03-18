/*
 * XREFs of ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C00982C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0025160 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
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
