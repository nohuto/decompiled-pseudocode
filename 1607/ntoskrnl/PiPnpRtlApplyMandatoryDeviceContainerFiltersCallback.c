/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x1404D1F88
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1404DCDC0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 result; // rax

  v3 = a2 + 2;
  result = PiPnpRtlApplyMandatoryDeviceFilters(*a2, *(_QWORD *)(a1 + 16), 0, a2[1], (__int64)(a2 + 2));
  if ( (int)result >= 0 )
    *a3 = *v3;
  return result;
}
