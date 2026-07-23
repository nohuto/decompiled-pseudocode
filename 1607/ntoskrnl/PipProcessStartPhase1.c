/*
 * XREFs of PipProcessStartPhase1 @ 0x1404846CC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     Template_qz @ 0x1401D0BD8 (Template_qz.c)
 *     PnpStartDeviceNode @ 0x1403EFF98 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x140484758 (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140642388 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642618 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140642714 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(__int64 a1, int a2, __int64 a3)
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
    IopUncacheInterfaceInformation(*(_QWORD *)(a1 + 32), 1LL);
    if ( !*(_DWORD *)(a1 + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(a1, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v8, 0LL),
          started >= 0) )
    {
      started = PnpStartDeviceNode(a1, 0, a2);
    }
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceStart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return (unsigned int)started;
}
