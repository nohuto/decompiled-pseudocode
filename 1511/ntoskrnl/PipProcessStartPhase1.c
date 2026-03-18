/*
 * XREFs of PipProcessStartPhase1 @ 0x1404F29BC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     Template_qz @ 0x1401C1868 (Template_qz.c)
 *     IopUncacheInterfaceInformation @ 0x1404A0F04 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14060DE98 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14060E128 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14060E224 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 1, *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(a1 + 32), 1);
    if ( !*(_DWORD *)(a1 + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(a1, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v8, 0LL),
          started >= 0) )
    {
      started = PnpStartDeviceNode(a1, 0LL, a2);
    }
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return (unsigned int)started;
}
