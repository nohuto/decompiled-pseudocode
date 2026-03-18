/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x140680EBC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x14067FAB0 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x140680738 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1406814D8 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14068181C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x140681C84 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140681D04 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140681E9C (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140682284 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetSizeAttribute @ 0x1406823A0 (AslpFileGetSizeAttribute.c)
 *     AslpFileGetVersionAttributes @ 0x140682468 (AslpFileGetVersionAttributes.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int PeExportNameExeWrapper; // ebx
  int v6; // ecx
  _DWORD *v7; // rax
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // edi
  _DWORD *i; // r13
  __int64 v12; // rax
  int VersionAttributes; // eax

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
        if ( v6 >= 32 )
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
        if ( v8 != 1 && (v8 <= 16 || v8 > 19 && v8 != 22 && v8 <= 27) )
          *v9 |= 2u;
        ++v8;
        v9 += 8;
      }
      while ( v8 < 32 );
    }
    PeExportNameExeWrapper = AslFileMappingEnsure(a2);
    if ( PeExportNameExeWrapper < 0 )
    {
LABEL_24:
      AslLogCallPrintf(1LL);
      return (unsigned int)PeExportNameExeWrapper;
    }
    v10 = 0;
    for ( i = (_DWORD *)(a1 + 24); ; i += 8 )
    {
      if ( ((a3 >> v10) & 1) != 0 && (*i & 3) == 0 )
      {
        if ( v10 > 22 )
        {
          if ( v10 == 23 )
            goto LABEL_66;
          if ( v10 != 24 )
          {
            if ( v10 == 25 )
            {
LABEL_66:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_24;
              goto LABEL_67;
            }
            if ( v10 != 26 )
            {
              if ( v10 == 27 )
              {
                PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
                if ( PeExportNameExeWrapper < 0 )
                  goto LABEL_24;
                goto LABEL_67;
              }
              if ( v10 == 28 )
              {
                PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
                if ( PeExportNameExeWrapper < 0 )
                  goto LABEL_24;
                goto LABEL_67;
              }
LABEL_57:
              PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_24;
              goto LABEL_67;
            }
LABEL_35:
            PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_24;
            goto LABEL_67;
          }
          goto LABEL_63;
        }
        if ( v10 == 22 )
          goto LABEL_57;
        if ( v10 <= 16 )
        {
          if ( v10 < 3 )
          {
            if ( !v10 )
            {
              PeExportNameExeWrapper = AslpFileGetSizeAttribute(a1, *(_QWORD *)(a2 + 520));
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_24;
              goto LABEL_67;
            }
            if ( v10 == 1 )
              goto LABEL_57;
            if ( v10 != 2 )
              return (unsigned int)-1073741595;
            goto LABEL_35;
          }
LABEL_63:
          VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
          if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
            AslLogCallPrintf(1LL);
          goto LABEL_67;
        }
        if ( v10 == 17 )
        {
          switch ( *(_DWORD *)(a2 + 576) )
          {
            case 4:
              v12 = 1LL;
              break;
            case 5:
              v12 = 2LL;
              break;
            case 6:
              v12 = 3LL;
              break;
            default:
              v12 = 0LL;
              break;
          }
          *(_DWORD *)(a1 + 568) |= 1u;
          *(_DWORD *)(a1 + 544) = 2;
          *(_QWORD *)(a1 + 552) = 4LL;
          *(_QWORD *)(a1 + 560) = v12;
        }
        else
        {
          if ( v10 <= 19 )
            goto LABEL_57;
          PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
          if ( PeExportNameExeWrapper < 0 )
            goto LABEL_24;
        }
      }
LABEL_67:
      if ( ++v10 >= 32 )
        return 0;
    }
  }
  return 0;
}
