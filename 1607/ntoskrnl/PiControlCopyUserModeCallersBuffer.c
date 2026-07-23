/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x1404E3424
 * Callers:
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiControlCopyUserModeCallersBuffer(
        void *a1,
        char *Src,
        size_t Size,
        ULONG Alignment,
        char a5,
        int a6)
{
  size_t v6; // rsi

  v6 = (unsigned int)Size;
  if ( a5 )
  {
    if ( a6 )
    {
      if ( (_DWORD)Size )
      {
        if ( ((Alignment - 1) & (unsigned int)Src) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      ProbeForWrite(a1, (unsigned int)Size, Alignment);
    }
    memmove(a1, Src, v6);
    return 0LL;
  }
  else
  {
    memmove(a1, Src, (unsigned int)Size);
    return 0LL;
  }
}
