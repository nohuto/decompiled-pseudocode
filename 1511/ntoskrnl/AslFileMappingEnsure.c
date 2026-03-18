/*
 * XREFs of AslFileMappingEnsure @ 0x140680738
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1406808FC (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140680AC0 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x140680EBC (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14068181C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140681D04 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140681E9C (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140682284 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x140682514 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x14053FCE0 (AslpFileMappingGetFileKind.c)
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
