/*
 * XREFs of UpdateLastInput @ 0x1C0071150
 * Callers:
 *     SetProtocolType @ 0x1C00705B0 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x1C0070A64 (PowerConnectionEvent.c)
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     IsTimeFromLastInput @ 0x1C00783D0 (IsTimeFromLastInput.c)
 *     Template_qhq @ 0x1C00B7994 (Template_qhq.c)
 */

void __fastcall UpdateLastInput(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  glinp = a1;
  dword_1C011A4F8 = a2;
  if ( a2 <= 0xE )
  {
    v2 = 23183;
    if ( _bittest(&v2, a2) )
      qword_1C011A4F0 = a1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x2000000000008000LL) != 0
    && (qword_1C0118B18 & 0x2000000000008000LL) == qword_1C0118B18
    && giPowerOffTimeOutMs > 0
    && (unsigned int)IsTimeFromLastInput()
    && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    Template_qhq(v3, (unsigned int)&DisplayTimeoutResetEvent, v4, v5, gProtocolType == 0, giPowerOffTimeOutMs);
  }
}
