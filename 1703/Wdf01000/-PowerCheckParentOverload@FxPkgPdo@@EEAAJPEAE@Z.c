/*
 * XREFs of ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1C002B3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::PowerCheckParentOverload(FxPkgPdo *this, unsigned __int8 *ParentOn)
{
  return FxPkgPnp::PowerPolicyCanChildPowerUp(
           *(FxPkgPnp **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL),
           ParentOn);
}
