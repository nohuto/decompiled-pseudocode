/*
 * XREFs of PipClearDevNodeUserFlags @ 0x1403F14F4
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1403F13A8 (PiProcessQueryDeviceState.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PnpRestartDeviceNode @ 0x14062DC88 (PnpRestartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 400);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 400) = v3;
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)v3) & 0x47) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      result = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29LL);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 30LL);
    }
  }
  return result;
}
