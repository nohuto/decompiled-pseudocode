/*
 * XREFs of strcpy_s @ 0x1401498A4
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     HdlspGetLine @ 0x1406D7450 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1406D7F74 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *a1 = 0;
      PopPoCoalescinCallback();
      return v4;
    }
    v5 = a1 - Src;
    do
    {
      v6 = *Src;
      Src[v5] = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( !SizeInBytes )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    PopPoCoalescinCallback();
    return 22;
  }
}
