/*
 * XREFs of AslFileMappingGetFileKindDetail @ 0x1406C59F0
 * Callers:
 *     AslpFileGetFileKindDetailAttribute @ 0x1406C7900 (AslpFileGetFileKindDetailAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C582C (AslFileMappingEnsure.c)
 *     AslFileMappingGetImageTypeEx @ 0x1406C5BB4 (AslFileMappingGetImageTypeEx.c)
 */

__int64 __fastcall AslFileMappingGetFileKindDetail(int *a1, __int64 a2)
{
  bool v3; // zf
  int v5; // ebx
  int ImageType; // eax
  unsigned int v7; // edi
  const char *v8; // r9
  int v9; // r8d
  __int64 v11; // [rsp+20h] [rbp-18h]
  __int16 v12; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int16 v13; // [rsp+78h] [rbp+40h] BYREF
  int v14; // [rsp+80h] [rbp+48h] BYREF
  int v15; // [rsp+88h] [rbp+50h] BYREF

  v3 = *(_DWORD *)(a2 + 576) == 1;
  v5 = 0;
  v13 = 0;
  v12 = 0;
  v15 = 0;
  v14 = 0;
  if ( v3 )
  {
    v5 = 1;
LABEL_37:
    v7 = 0;
    goto LABEL_38;
  }
  ImageType = AslFileMappingEnsure(a2);
  v7 = ImageType;
  if ( ImageType >= 0 )
  {
    switch ( *(_DWORD *)(a2 + 576) )
    {
      case 3:
        v5 = 2;
        goto LABEL_37;
      case 4:
        v5 = 3;
        goto LABEL_37;
      case 5:
        v5 = 4;
        goto LABEL_37;
    }
    if ( *(_DWORD *)(a2 + 576) != 6 )
    {
      v7 = -1073741823;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslFileMappingGetFileKindDetail",
        1388,
        (unsigned int)"Unhandled ASL_FILE_KIND: %d",
        *(_DWORD *)(a2 + 576));
      goto LABEL_38;
    }
    ImageType = AslFileMappingGetImageTypeEx(
                  (unsigned int)&v13,
                  (unsigned int)&v12,
                  (unsigned int)&v14,
                  (unsigned int)&v15,
                  a2);
    v7 = ImageType;
    if ( ImageType >= 0 )
    {
      if ( v14 )
      {
        if ( v12 == 523 )
        {
          v5 = 15;
        }
        else if ( (v15 & 0x20002) == 0x20002 )
        {
          v5 = 14;
        }
        else
        {
          v5 = 13 - ((v15 & 0x20003) != 1);
        }
      }
      else if ( v12 == 523 )
      {
        if ( v13 == 512 )
        {
          v5 = 11;
        }
        else if ( v13 == 34404 )
        {
          v5 = 9;
        }
        else
        {
          v5 = 10;
          if ( v13 != 43620 )
            v5 = 8;
        }
      }
      else if ( v13 == 332 )
      {
        v5 = 6;
      }
      else if ( v13 == 448 || v13 == 452 )
      {
        v5 = 7;
      }
      else
      {
        v5 = 5;
      }
      goto LABEL_37;
    }
    v8 = "AslFileMappingGetImageTypeEx failed [%x]";
    v9 = 1398;
  }
  else
  {
    v8 = "AslFileMappingEnsure failed [%x]";
    v9 = 1353;
  }
  LODWORD(v11) = ImageType;
  AslLogCallPrintf(1LL, (unsigned int)"AslFileMappingGetFileKindDetail", v9, (_DWORD)v8, v11);
LABEL_38:
  if ( a1 )
    *a1 = v5;
  return v7;
}
