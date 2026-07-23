/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x140677BCC
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405816A0 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmNotifyDeviceInput @ 0x140676EB8 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x140678998 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayBurst @ 0x140678A98 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionTerminalInput @ 0x140678CA8 (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x140677DFC (TtmiSetPendingOnOffRequest.c)
 */

char __fastcall TtmiResetTerminalTimeouts(int a1, __int64 a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // r9d

  *(_QWORD *)(a2 + 72) = MEMORY[0xFFFFF78000000008];
  v5 = *(_DWORD *)(a2 + 36);
  if ( (v5 == 3 || !a5) && v5 != 2 )
    return 0;
  v6 = a3;
  LOBYTE(a3) = 1;
  TtmiSetPendingOnOffRequest(a1, a2, a3, v6, a4);
  return 1;
}
