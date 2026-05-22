/*
 * XREFs of ??E?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VRayStabilizationResult@@@std@@@std@@@std@@QEAA?AV01@H@Z @ 0x18004E7B4
 * Callers:
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18004E4D0 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<RayStabilizationResult>>>::operator++(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v2 = **(_QWORD ***)a1;
    if ( v2 )
      *a2 = *v2;
  }
  a2[2] = *(_QWORD *)(a1 + 16);
  result = a2;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
