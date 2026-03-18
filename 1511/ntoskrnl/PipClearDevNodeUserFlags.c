/*
 * XREFs of PipClearDevNodeUserFlags @ 0x1404ECD04
 * Callers:
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 *     PiProcessQueryDeviceState @ 0x1404ECBB8 (PiProcessQueryDeviceState.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PnpRestartDeviceNode @ 0x14060388C (PnpRestartDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
