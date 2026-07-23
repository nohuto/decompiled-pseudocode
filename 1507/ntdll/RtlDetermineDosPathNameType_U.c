/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x180057B40
 * Callers:
 *     LdrpGetDllPath @ 0x180036A08 (LdrpGetDllPath.c)
 *     RtlDosSearchPath_U @ 0x180057930 (RtlDosSearchPath_U.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     LdrpResValidateFilePath @ 0x1800CCFA8 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

RTL_PATH_TYPE __cdecl RtlDetermineDosPathNameType_U(PCWSTR DosFileName)
{
  WCHAR v2; // ax

  if ( *DosFileName == 92 || *DosFileName == 47 )
  {
    if ( DosFileName[1] == 92 || DosFileName[1] == 47 )
    {
      if ( DosFileName[2] == 46 || DosFileName[2] == 63 )
      {
        v2 = DosFileName[3];
        if ( v2 == 92 || v2 == 47 )
          return 6;
        else
          return v2 != 0 ? 1 : 7;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( *DosFileName && DosFileName[1] == 58 )
  {
    if ( DosFileName[2] == 92 || DosFileName[2] == 47 )
      return 2;
    else
      return 3;
  }
  else
  {
    return 5;
  }
}
