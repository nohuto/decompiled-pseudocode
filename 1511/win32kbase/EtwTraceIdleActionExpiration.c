/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x1C007F4A0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     Template_qqqqh @ 0x1C00AE6C4 (Template_qqqqh.c)
 */

char __fastcall EtwTraceIdleActionExpiration(int a1, int a2, __int64 a3, int a4)
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
          return Template_qqqqh(a1, a2, gProtocolType == 0, a4, a1, a2, glinp, gProtocolType == 0);
      }
    }
  }
  return result;
}
