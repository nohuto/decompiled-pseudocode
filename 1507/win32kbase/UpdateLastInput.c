/*
 * XREFs of UpdateLastInput @ 0x1C0007440
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     PowerConnectionEvent @ 0x1C00791B4 (PowerConnectionEvent.c)
 *     SetProtocolType @ 0x1C0079380 (SetProtocolType.c)
 * Callees:
 *     IsTimeFromLastInput @ 0x1C0011A90 (IsTimeFromLastInput.c)
 *     Template_qhq @ 0x1C00A9D2C (Template_qhq.c)
 */

void __fastcall UpdateLastInput(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  glinp = a1;
  dword_1C00FFD28 = a2;
  if ( a2 <= 0xE )
  {
    v2 = 23183;
    if ( _bittest(&v2, a2) )
      qword_1C00FFD20 = a1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x2000000000008000LL) != 0
    && (qword_1C00FEA48 & 0x2000000000008000LL) == qword_1C00FEA48
    && giPowerOffTimeOutMs > 0
    && (unsigned int)IsTimeFromLastInput(giPowerOffTimeOutMs)
    && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    Template_qhq(v3, (unsigned int)&DisplayTimeoutResetEvent, v4, v5, gProtocolType == 0, giPowerOffTimeOutMs);
  }
}
