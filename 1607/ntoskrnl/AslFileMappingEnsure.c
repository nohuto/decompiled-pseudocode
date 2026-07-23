/*
 * XREFs of AslFileMappingEnsure @ 0x1406C5964
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1406C5B28 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x1406C5CEC (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x1406C6BBC (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C75B4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7AB8 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1406C7C50 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C8044 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x140571954 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  int *v4; // rsi
  _QWORD *v5; // rbp

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
      FileKind = RtlFileMapMapView(a1 + 520, 0);
      if ( FileKind >= 0 )
      {
        if ( *(_BYTE *)(a1 + 571) )
        {
          *v4 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind(v5, v4);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(1LL);
            *v4 = 3;
          }
        }
      }
    }
    return (unsigned int)FileKind;
  }
}
