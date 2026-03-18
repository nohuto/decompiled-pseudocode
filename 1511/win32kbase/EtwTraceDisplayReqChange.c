/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C000EC20
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 * Callees:
 *     Template_qhq @ 0x1C00AE1D8 (Template_qhq.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al

  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C01020C8 - 1;
    if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u && (qword_1C01020B0 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C01020B8 & 0x2000000000008000LL) == qword_1C01020B8 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qhq(a1, (unsigned int)&DisplayReqChangeEvent, 0x8000, a4, gProtocolType == 0, dword_1C010472C);
      }
    }
  }
  return result;
}
