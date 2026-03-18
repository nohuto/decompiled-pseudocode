/*
 * XREFs of PipProcessRestartPhase2 @ 0x140618DE8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PoFxIdleDevice @ 0x1400DC378 (PoFxIdleDevice.c)
 *     IoRequestDeviceEject @ 0x1401BE8FC (IoRequestDeviceEject.c)
 *     Template_qz @ 0x1401C1868 (Template_qz.c)
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404EA628 (PnpStartedDeviceNodeDependencyCheck.c)
 */

__int64 __fastcall PipProcessRestartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // r8d
  __int64 v6; // r8

  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceRestart_Start, a3, 2, *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( v4 >= 0 )
  {
    PipSetDevNodeState(a1, 776);
    if ( (*(_DWORD *)(a1 + 704) & 0x20) != 0 )
    {
      PoFxIdleDevice(*(_QWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 704) &= ~0x20u;
    }
    PnpStartedDeviceNodeDependencyCheck(a1);
  }
  else
  {
    v5 = 14;
    if ( v4 != -1073741102 )
      v5 = 10;
    PnpRequestDeviceRemoval(a1, 0, v5, v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceRestart_Stop, v6, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
