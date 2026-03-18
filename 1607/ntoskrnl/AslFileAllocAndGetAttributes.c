/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1406C6A84
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C582C (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1406C7100 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1406C747C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1406C7900 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1406C7980 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1406C7B18 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1406C7F0C (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionAttributes @ 0x1406C8028 (AslpFileGetVersionAttributes.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1406C94E0 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  _DWORD *v7; // rax
  int v8; // eax
  _DWORD *v9; // rcx
  int PeExportNameExeWrapper; // eax
  const char *v11; // r9
  int v12; // r8d
  int v13; // edi
  __int64 i; // r13
  int VersionAttributes; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-38h]

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
    PeExportNameExeWrapper = AslFileMappingEnsure(a2);
    v5 = PeExportNameExeWrapper;
    if ( PeExportNameExeWrapper == -1073741801 )
    {
      if ( !*(_DWORD *)(a2 + 592) )
      {
        PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
        v5 = PeExportNameExeWrapper;
        if ( PeExportNameExeWrapper < 0 )
        {
          v11 = "AslpFileLargeEnsureLargeFileMapping failed [%x]";
          v12 = 491;
LABEL_28:
          LODWORD(v19) = PeExportNameExeWrapper;
          AslLogCallPrintf(1LL, (unsigned int)"AslFileAllocAndGetAttributes", v12, (_DWORD)v11, v19);
          return v5;
        }
        goto LABEL_31;
      }
    }
    else if ( PeExportNameExeWrapper >= 0 )
    {
LABEL_31:
      v13 = 0;
      for ( i = 0LL; ; i += 32LL )
      {
        if ( ((a3 >> v13) & 1) == 0 || (*(_DWORD *)(a1 + i + 24) & 3) != 0 )
          goto LABEL_45;
        if ( v13 > 23 )
        {
          switch ( v13 )
          {
            case 24:
              goto LABEL_42;
            case 25:
LABEL_75:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v11 = "AslpFileGetPeExportNameExeWrapper failed [%x]";
                v12 = 611;
                goto LABEL_28;
              }
              break;
            case 26:
              goto LABEL_73;
            case 27:
              PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v11 = "AslpFileGetClrVersionAttribute failed [%x]";
                v12 = 620;
                goto LABEL_28;
              }
              break;
            case 28:
              PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v11 = "AslpFileGetFileKindDetailAttribute failed [%x]";
                v12 = 586;
                goto LABEL_28;
              }
              break;
            default:
              if ( v13 > 31 )
                goto LABEL_68;
LABEL_58:
              PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v11 = "AslpFileGetHeaderAttributesPE failed [%x]";
                v12 = 601;
                goto LABEL_28;
              }
              break;
          }
        }
        else
        {
          if ( v13 == 23 )
            goto LABEL_75;
          if ( v13 <= 17 )
          {
            switch ( v13 )
            {
              case 17:
                switch ( *(_DWORD *)(a2 + 576) )
                {
                  case 4:
                    v17 = 1LL;
                    break;
                  case 5:
                    v17 = 2LL;
                    break;
                  case 6:
                    v17 = 3LL;
                    break;
                  default:
                    v17 = 0LL;
                    break;
                }
                *(_DWORD *)(a1 + 568) |= 1u;
                *(_DWORD *)(a1 + 544) = 2;
                *(_QWORD *)(a1 + 552) = 4LL;
                *(_QWORD *)(a1 + 560) = v17;
                goto LABEL_45;
              case 0:
LABEL_68:
                v18 = *(_QWORD *)(a2 + 536);
                *(_DWORD *)(a1 + 1048) |= 1u;
                *(_DWORD *)(a1 + 24) |= 1u;
                *(_QWORD *)(a1 + 16) = (unsigned int)v18;
                *(_DWORD *)(a1 + 1024) = 3;
                *(_QWORD *)(a1 + 1032) = 8LL;
                *(_QWORD *)(a1 + 1040) = v18;
                *(_DWORD *)a1 = 2;
                *(_QWORD *)(a1 + 8) = 4LL;
                goto LABEL_45;
              case 1:
                goto LABEL_58;
            }
            if ( v13 != 2 )
            {
              if ( v13 <= 2 )
                return (unsigned int)-1073741595;
LABEL_42:
              VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
              if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              {
                LODWORD(v19) = VersionAttributes;
                AslLogCallPrintf(
                  1LL,
                  (unsigned int)"AslFileAllocAndGetAttributes",
                  558,
                  (unsigned int)"AslpFileGetVersionAttributes failed [%x]",
                  v19);
              }
              goto LABEL_45;
            }
LABEL_73:
            PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
            v5 = PeExportNameExeWrapper;
            if ( PeExportNameExeWrapper < 0 )
            {
              v11 = "AslpFileGetChecksumAttributes failed [%x]";
              v12 = 640;
              goto LABEL_28;
            }
            goto LABEL_45;
          }
          if ( v13 <= 19 || v13 > 21 )
            goto LABEL_58;
          PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
          v5 = PeExportNameExeWrapper;
          if ( PeExportNameExeWrapper < 0 )
          {
            v11 = "AslpFileGetHeaderAttributesNE failed [%x]";
            v12 = 630;
            goto LABEL_28;
          }
        }
LABEL_45:
        if ( ++v13 >= 33 )
          return 0;
      }
    }
    v11 = "AslFileMappingEnsure failed [%x]";
    v12 = 495;
    goto LABEL_28;
  }
  return 0;
}
