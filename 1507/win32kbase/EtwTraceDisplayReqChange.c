/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C000733C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 * Callees:
 *     Template_qhq @ 0x1C00A9D2C (Template_qhq.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C00FEA58 - 1;
    if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u && (qword_1C00FEA40 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C00FEA48 & 0x2000000000008000LL) == qword_1C00FEA48 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qhq(a1, (unsigned int)&DisplayReqChangeEvent, 0x8000, a4, gProtocolType == 0, dword_1C00FFF80);
      }
    }
  }
  return result;
}
