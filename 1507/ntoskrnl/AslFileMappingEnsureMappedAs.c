/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x140705624
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x140706220 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x1405AACC0 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  int *v1; // rsi
  _QWORD *v4; // rbp
  int v5; // eax
  int FileKind; // ebx

  v1 = (int *)(a1 + 576);
  if ( *(_DWORD *)(a1 + 576) == 1 )
    return 3221225758LL;
  v4 = (_QWORD *)(a1 + 520);
  v5 = RtlFileMapMapView(a1 + 520, 0);
  FileKind = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 571) )
    {
      *v1 = 6;
    }
    else
    {
      FileKind = AslpFileMappingGetFileKind(v4, v1);
      if ( FileKind < 0 )
      {
        AslLogCallPrintf(1LL);
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 571) )
  {
    return 0;
  }
  return (unsigned int)FileKind;
}
