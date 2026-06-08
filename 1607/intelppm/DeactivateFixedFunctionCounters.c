/*
 * XREFs of DeactivateFixedFunctionCounters @ 0x1C0002F30
 * Callers:
 *     SnapEnergyCounters @ 0x1C0003B20 (SnapEnergyCounters.c)
 *     UnInitEnergyCounters @ 0x1C001A270 (UnInitEnergyCounters.c)
 * Callees:
 *     <none>
 */

_DWORD *DeactivateFixedFunctionCounters()
{
  _DWORD *result; // rax

  __writemsr(0x38Du, 0LL);
  __writemsr(0x309u, 0LL);
  __writemsr(0x30Au, 0LL);
  __writemsr(0x30Bu, 0LL);
  __writemsr(0x38Fu, __readmsr(0x38Fu) & 0xFFFFFFF8FFFFFFFFuLL);
  result = *(_DWORD **)(*(_QWORD *)(DevExts + 8LL * KeGetPcr()->Prcb.Number) + 328LL);
  *result = 0;
  return result;
}
