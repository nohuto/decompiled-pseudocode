/*
 * XREFs of EtwTraceIdleStatus @ 0x1C0074C90
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqqqqqq @ 0x1C00AE8E0 (Template_qqqqqqq.c)
 */

char __fastcall EtwTraceIdleStatus(__int64 a1, __int64 a2, int a3, int a4)
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
          return Template_qqqqqqq(
                   (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                 - glinp,
                   MEMORY[0xFFFFF78000000320],
                   a3,
                   a4,
                   ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - glinp);
      }
    }
  }
  return result;
}
