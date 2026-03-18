/*
 * XREFs of PipSetDevNodeUserFlags @ 0x140545890
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1403F13A8 (PiProcessQueryDeviceState.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpShutdownDevices @ 0x140629A20 (PnpShutdownDevices.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PiProcessSetDeviceProblem @ 0x1406499F8 (PiProcessSetDeviceProblem.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 400) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)(a2 | v2)) & 0x47) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return result;
}
