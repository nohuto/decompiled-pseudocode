/*
 * XREFs of UpdateLastInput @ 0x1C000E9A0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     SetProtocolType @ 0x1C0062ED0 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x1C0068D58 (PowerConnectionEvent.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     IsTimeFromLastInput @ 0x1C0074560 (IsTimeFromLastInput.c)
 *     Template_qhq @ 0x1C00AE1D8 (Template_qhq.c)
 */

void __fastcall UpdateLastInput(int a1, unsigned int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  glinp = a1;
  dword_1C01030EC = a2;
  if ( a2 <= 0xE )
  {
    v2 = 23183;
    if ( _bittest(&v2, a2) )
      dword_1C01030E8 = a1;
  }
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x2000000000008000LL) != 0
    && (qword_1C01020B8 & 0x2000000000008000LL) == qword_1C01020B8
    && giPowerOffTimeOutMs > 0
    && (unsigned int)IsTimeFromLastInput()
    && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    Template_qhq(v3, (unsigned int)&DisplayTimeoutResetEvent, v4, v5, gProtocolType == 0, giPowerOffTimeOutMs);
  }
}
