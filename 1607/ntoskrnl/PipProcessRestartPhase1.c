/*
 * XREFs of PipProcessRestartPhase1 @ 0x14064DEDC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpUnlockMountableDevice @ 0x1401CDE9C (PnpUnlockMountableDevice.c)
 *     Template_qz @ 0x1401D0DAC (Template_qz.c)
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int started; // edi

  v3 = a3;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceRestart_Start, a3, 1, *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    started = PnpStartDeviceNode(a1, 1, a2);
    if ( (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x1000000);
    }
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceRestart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return started;
}
