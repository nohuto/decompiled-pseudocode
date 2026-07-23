/*
 * XREFs of PopRegisterEnergyEstimation @ 0x140171DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopRegisterEnergyEstimation(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  PopComputeEnergy = a1;
  PopSnapEnergyCounters = a2;
}
