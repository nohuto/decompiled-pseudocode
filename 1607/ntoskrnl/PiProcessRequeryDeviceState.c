/*
 * XREFs of PiProcessRequeryDeviceState @ 0x14054619C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiProcessQueryDeviceState @ 0x1403F026C (PiProcessQueryDeviceState.c)
 */

__int64 __fastcall PiProcessRequeryDeviceState(__int64 a1)
{
  _QWORD *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = 0;
  v3 = *(_DWORD *)(*(_QWORD *)(v1[39] + 40LL) + 300LL);
  if ( v3 == 776 )
  {
    PiProcessQueryDeviceState(v1);
  }
  else if ( (unsigned int)(v3 - 787) <= 1 )
  {
    return (unsigned int)-1073741738;
  }
  return v2;
}
