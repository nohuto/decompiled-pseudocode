/*
 * XREFs of VidSchGetDevicePageFaultInformation @ 0x1C0044F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetDevicePageFaultInformation(__int64 a1, _OWORD *a2)
{
  *a2 = *(_OWORD *)(a1 + 176);
  a2[1] = *(_OWORD *)(a1 + 192);
}
