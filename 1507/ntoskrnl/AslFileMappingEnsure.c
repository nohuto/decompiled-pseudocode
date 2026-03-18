/*
 * XREFs of AslFileMappingEnsure @ 0x14070556C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1407056E0 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x1407058A4 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x140705C78 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140706564 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140706A4C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140706BE4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetVersionBlock @ 0x140707230 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x1405AACC0 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  int *v3; // rsi
  _QWORD *v5; // rbp

  if ( *(_QWORD *)(a1 + 544) )
  {
    return 0;
  }
  else
  {
    v3 = (int *)(a1 + 576);
    if ( *(_DWORD *)(a1 + 576) == 1 )
      return 3221225758LL;
    v5 = (_QWORD *)(a1 + 520);
    FileKind = RtlFileMapMapView(a1 + 520, 0);
    if ( FileKind >= 0 )
    {
      if ( *(_BYTE *)(a1 + 571) )
      {
        *v3 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(v5, v3);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(1LL);
          *v3 = 3;
        }
      }
    }
  }
  return (unsigned int)FileKind;
}
