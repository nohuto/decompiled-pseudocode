/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1406C6BBC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C5964 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1406C7238 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C75B4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1406C7A38 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7AB8 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1406C7C50 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C8044 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionAttributes @ 0x1406C8160 (AslpFileGetVersionAttributes.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1406C9618 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int PeExportNameExeWrapper; // ebx
  int v6; // ecx
  _DWORD *v7; // rax
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // edi
  __int64 i; // r13
  int VersionAttributes; // eax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 576) == 1 )
    {
      v6 = 0;
      v7 = (_DWORD *)(a1 + 24);
      while ( v6 && v6 != 17 )
      {
        if ( v6 == 28 )
        {
          *((_QWORD *)v7 - 1) = 1LL;
LABEL_11:
          *v7 |= 1u;
          *(v7 - 6) = 2;
          *((_QWORD *)v7 - 2) = 4LL;
          goto LABEL_12;
        }
        *v7 |= 2u;
LABEL_12:
        ++v6;
        v7 += 8;
        if ( v6 >= 33 )
          return 0;
      }
      *((_QWORD *)v7 - 1) = 0LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a2 + 592) )
    {
      v8 = 0;
      v9 = (_DWORD *)(a1 + 24);
      do
      {
        if ( v8 != 1 && (v8 <= 16 || v8 > 19 && v8 != 22 && (v8 <= 27 || v8 > 31)) )
          *v9 |= 2u;
        ++v8;
        v9 += 8;
      }
      while ( v8 < 33 );
    }
    v10 = AslFileMappingEnsure(a2);
    PeExportNameExeWrapper = v10;
    if ( v10 == -1073741801 )
    {
      if ( *(_DWORD *)(a2 + 592) )
        goto LABEL_27;
      PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( PeExportNameExeWrapper < 0 )
        goto LABEL_27;
    }
    else if ( v10 < 0 )
    {
LABEL_27:
      AslLogCallPrintf(1LL);
      return (unsigned int)PeExportNameExeWrapper;
    }
    v11 = 0;
    for ( i = 0LL; ; i += 32LL )
    {
      if ( ((a3 >> v11) & 1) != 0 && (*(_DWORD *)(a1 + i + 24) & 3) == 0 )
      {
        if ( v11 > 23 )
        {
          switch ( v11 )
          {
            case 24:
              goto LABEL_41;
            case 25:
LABEL_74:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            case 26:
LABEL_72:
              PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            case 27:
              PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            case 28:
              PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
          }
          if ( v11 <= 31 )
            goto LABEL_57;
        }
        else
        {
          if ( v11 == 23 )
            goto LABEL_74;
          if ( v11 > 17 )
          {
            if ( v11 > 19 && v11 <= 21 )
            {
              PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            }
LABEL_57:
            PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_27;
            goto LABEL_44;
          }
          if ( v11 == 17 )
          {
            switch ( *(_DWORD *)(a2 + 576) )
            {
              case 4:
                v15 = 1LL;
                break;
              case 5:
                v15 = 2LL;
                break;
              case 6:
                v15 = 3LL;
                break;
              default:
                v15 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v15;
            goto LABEL_44;
          }
          if ( v11 )
          {
            if ( v11 == 1 )
              goto LABEL_57;
            if ( v11 == 2 )
              goto LABEL_72;
            if ( v11 <= 2 )
              return (unsigned int)-1073741595;
LABEL_41:
            VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
            if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              AslLogCallPrintf(1LL);
            goto LABEL_44;
          }
        }
        v16 = *(_QWORD *)(a2 + 536);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v16;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v16;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
      }
LABEL_44:
      if ( ++v11 >= 33 )
        return 0;
    }
  }
  return 0;
}
