/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x1406C5A48
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x1406C7238 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x140571954 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
