/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x140705C78
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x14070556C (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x140706220 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140706564 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1407069CC (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140706A4C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140706BE4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetSizeAttribute @ 0x1407070BC (AslpFileGetSizeAttribute.c)
 *     AslpFileGetVersionAttributes @ 0x140707184 (AslpFileGetVersionAttributes.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // ecx
  _DWORD *v6; // rax
  int ClrVersionAttribute; // ebx
  int v9; // edi
  _DWORD *v10; // r13
  __int64 v11; // rax
  int VersionAttributes; // eax

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 576) == 1 )
    {
      v5 = 0;
      v6 = (_DWORD *)(a1 + 24);
      while ( v5 && v5 != 17 )
      {
        if ( v5 == 28 )
        {
          *((_QWORD *)v6 - 1) = 1LL;
LABEL_10:
          *v6 |= 1u;
          *(v6 - 6) = 2;
          *((_QWORD *)v6 - 2) = 4LL;
          goto LABEL_11;
        }
        *v6 |= 2u;
LABEL_11:
        ++v5;
        v6 += 8;
        if ( v5 >= 32 )
          return 0;
      }
      *((_QWORD *)v6 - 1) = 0LL;
      goto LABEL_10;
    }
    ClrVersionAttribute = AslFileMappingEnsure(a2);
    if ( ClrVersionAttribute < 0 )
    {
LABEL_15:
      AslLogCallPrintf(1LL);
      return (unsigned int)ClrVersionAttribute;
    }
    v9 = 0;
    v10 = (_DWORD *)(a1 + 24);
    do
    {
      if ( ((a3 >> v9) & 1) != 0 && (*v10 & 3) == 0 )
      {
        if ( v9 > 23 )
        {
          if ( v9 != 24 )
          {
            if ( v9 == 25 )
              goto LABEL_48;
            if ( v9 != 26 )
            {
              if ( v9 == 27 )
              {
                ClrVersionAttribute = AslpFileGetClrVersionAttribute(a1, a2);
                if ( ClrVersionAttribute < 0 )
                  goto LABEL_15;
                goto LABEL_57;
              }
              if ( v9 == 28 )
              {
                ClrVersionAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
                if ( ClrVersionAttribute < 0 )
                  goto LABEL_15;
                goto LABEL_57;
              }
              if ( (unsigned int)(v9 - 29) > 2 )
                return (unsigned int)-1073741595;
LABEL_48:
              ClrVersionAttribute = AslpFileGetHeaderAttributesPE(a1, a2);
              if ( ClrVersionAttribute < 0 )
                goto LABEL_15;
              goto LABEL_57;
            }
LABEL_26:
            ClrVersionAttribute = AslpFileGetChecksumAttributes(a1, a2);
            if ( ClrVersionAttribute < 0 )
              goto LABEL_15;
            goto LABEL_57;
          }
          goto LABEL_54;
        }
        if ( v9 >= 22 )
          goto LABEL_48;
        if ( v9 <= 16 )
        {
          if ( v9 < 3 )
          {
            if ( !v9 )
            {
              ClrVersionAttribute = AslpFileGetSizeAttribute(a1, *(_QWORD *)(a2 + 520));
              if ( ClrVersionAttribute < 0 )
                goto LABEL_15;
              goto LABEL_57;
            }
            if ( v9 == 1 )
              goto LABEL_48;
            if ( v9 != 2 )
              return (unsigned int)-1073741595;
            goto LABEL_26;
          }
LABEL_54:
          VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
          if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
            AslLogCallPrintf(1LL);
          goto LABEL_57;
        }
        if ( v9 == 17 )
        {
          switch ( *(_DWORD *)(a2 + 576) )
          {
            case 4:
              v11 = 1LL;
              break;
            case 5:
              v11 = 2LL;
              break;
            case 6:
              v11 = 3LL;
              break;
            default:
              v11 = 0LL;
              break;
          }
          *(_DWORD *)(a1 + 568) |= 1u;
          *(_DWORD *)(a1 + 544) = 2;
          *(_QWORD *)(a1 + 552) = 4LL;
          *(_QWORD *)(a1 + 560) = v11;
        }
        else
        {
          if ( v9 <= 19 )
            goto LABEL_48;
          ClrVersionAttribute = AslpFileGetHeaderAttributesNE(a1, a2);
          if ( ClrVersionAttribute < 0 )
            goto LABEL_15;
        }
      }
LABEL_57:
      ++v9;
      v10 += 8;
    }
    while ( v9 < 32 );
  }
  return 0;
}
