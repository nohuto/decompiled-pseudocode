/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x14068081C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x14067CED8 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x1406814D8 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x14053FCE0 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  __int64 result; // rax
  int *v3; // rsi
  _QWORD *v4; // rbp
  int v5; // eax
  int FileKind; // edi

  if ( *(_DWORD *)(a1 + 592) )
  {
    result = 3221226605LL;
    if ( *(_DWORD *)(a1 + 576) == 1 )
      return 3221225758LL;
  }
  else
  {
    v3 = (int *)(a1 + 576);
    if ( *(_DWORD *)(a1 + 576) == 1 )
    {
      return 3221225758LL;
    }
    else
    {
      v4 = (_QWORD *)(a1 + 520);
      v5 = RtlFileMapMapView(a1 + 520, 0);
      FileKind = v5;
      if ( v5 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 571) )
        {
          *v3 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind(v4, v3);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(1LL);
            *v3 = 3;
          }
        }
      }
      else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 571) )
      {
        return 0;
      }
      return (unsigned int)FileKind;
    }
  }
  return result;
}
