/*
 * XREFs of AslpFileGetExeWrapper @ 0x140681A40
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x140682284 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140682058 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x14068298C (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x140682B94 (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x140683834 (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0;
  v7 = 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v7, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v5 = v7;
  if ( (unsigned int)AslpFileHasSecuromWrapper(v7) )
  {
    *a1 = 1;
    return 0;
  }
  ImageNtHeader = AslpFileHasActiveMarkWrapper(&v7, v5, a2);
  if ( ImageNtHeader >= 0 )
  {
    if ( (_DWORD)v7 )
    {
      *a1 = 2;
    }
    else if ( *(_DWORD *)v5 == 17744 && *(_BYTE *)(v5 + 26) == 83 && *(_BYTE *)(v5 + 27) == 82 )
    {
      *a1 = 3;
    }
    else if ( (unsigned int)AslpHasStarForceWrapper(v5) )
    {
      *a1 = 4;
    }
    return 0;
  }
  if ( ImageNtHeader == -1073741275 )
  {
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
