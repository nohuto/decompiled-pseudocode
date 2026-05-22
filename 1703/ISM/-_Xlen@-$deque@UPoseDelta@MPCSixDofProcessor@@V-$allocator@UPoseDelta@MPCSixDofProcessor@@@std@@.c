/*
 * XREFs of ?_Xlen@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@IEBAXXZ @ 0x18004661C
 * Callers:
 *     ?_Growmap@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@IEAAX_K@Z @ 0x180046474 (-_Growmap@-$deque@UPoseDelta@MPCSixDofProcessor@@V-$allocator@UPoseDelta@MPCSixDofProcessor@@@st.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18004E7E4 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 * Callees:
 *     <none>
 */

void __noreturn std::deque<MPCSixDofProcessor::PoseDelta>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
