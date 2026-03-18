/*
 * XREFs of PipProcessRestartPhase2 @ 0x1406973D8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x1401FA164 (IoRequestDeviceEject.c)
 *     Template_qz @ 0x1401FD450 (Template_qz.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140461408 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpRequestDeviceRemoval @ 0x140534B48 (PnpRequestDeviceRemoval.c)
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
    PnpRequestDeviceRemoval(a1, 0, v5);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceRestart_Stop, v6, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
