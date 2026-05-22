/*
 * XREFs of ?begin@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@@2@XZ @ 0x1800462DC
 * Callers:
 *     ?UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800451F8 (-UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18004E4D0 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::deque<MPCSixDofProcessor::PoseDelta>::begin(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1[3];
  a2[1] = 0LL;
  a2[2] = v2;
  *a2 = *a1;
  return a2;
}
