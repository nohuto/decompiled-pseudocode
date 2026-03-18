/*
 * XREFs of EtwTraceIdleStatus @ 0x1C0078B20
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqqqqqq @ 0x1C00B809C (Template_qqqqqqq.c)
 */

char __fastcall EtwTraceIdleStatus(__int64 a1, __int64 a2, int a3, int a4)
{
  char result; // al
  __int64 v5; // rdx

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C0118B28 - 1;
    if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u && (qword_1C0118B10 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C0118B18 & 0x2000000000008000LL) == qword_1C0118B18 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
        {
          v5 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          return Template_qqqqqqq(0, (int)v5 - (int)glinp, a3, a4, (unsigned __int8)v5 - (unsigned __int8)glinp);
        }
      }
    }
  }
  return result;
}
