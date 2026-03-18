/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x14053A1D8
 * Callers:
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiControlCopyUserModeCallersBuffer(
        void *a1,
        char *Src,
        size_t Size,
        ULONG Alignment,
        char a5,
        int a6)
{
  size_t v6; // rdi

  v6 = (unsigned int)Size;
  if ( a5 )
  {
    if ( a6 )
    {
      if ( (_DWORD)Size )
      {
        if ( ((Alignment - 1) & (unsigned int)Src) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress || &Src[(unsigned int)Size] < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
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
