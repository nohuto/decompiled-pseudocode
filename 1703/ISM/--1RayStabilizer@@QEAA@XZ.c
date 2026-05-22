/*
 * XREFs of ??1RayStabilizer@@QEAA@XZ @ 0x18002EF54
 * Callers:
 *     _MPCInputProviderBase::_MPCInputProviderBase_::_1_::dtor$1 @ 0x1800A18FB (_MPCInputProviderBase--_MPCInputProviderBase_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RayStabilizer::~RayStabilizer(RayStabilizer *this)
{
  std::deque<RayStabilizationResult>::~deque<RayStabilizationResult>(this);
}
