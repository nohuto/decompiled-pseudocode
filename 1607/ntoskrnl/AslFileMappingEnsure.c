/*
 * XREFs of AslFileMappingEnsure @ 0x1406C582C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1406C59F0 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x1406C5BB4 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C747C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7980 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1406C7B18 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C7F0C (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x1406C80D4 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x140571414 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int v3; // edi
  int *v4; // rsi
  _QWORD *v5; // rbp
  int FileKind; // eax
  int v7; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 592) )
  {
    if ( *(_DWORD *)(a1 + 576) == 1 )
      return 3221225758LL;
    return *(_QWORD *)(a1 + 544) == 0LL ? 0xC000046D : 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 544) )
    {
      return 0;
    }
    else
    {
      v4 = (int *)(a1 + 576);
      if ( *(_DWORD *)(a1 + 576) == 1 )
        return 3221225758LL;
      v5 = (_QWORD *)(a1 + 520);
      v3 = RtlFileMapMapView(a1 + 520, 0);
      if ( v3 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 571) )
        {
          *v4 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind(v5, v4);
          v3 = FileKind;
          if ( FileKind < 0 )
          {
            v7 = FileKind;
            AslLogCallPrintf(
              1LL,
              (unsigned int)"AslFileMappingEnsure",
              591,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
              a1,
              v7);
            *v4 = 3;
          }
        }
      }
    }
    return (unsigned int)v3;
  }
}
