/*
 * XREFs of AslpFileGetClrVersion @ 0x1406C72A8
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x1406C747C (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1406C7CD4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1406C93D0 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileGetClrVersion(_BYTE *a1, __int64 a2)
{
  unsigned int *v4; // rdi
  int ImageNtHeader; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rax
  const char *v11; // r9
  int v12; // r8d
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v16, a2);
  v6 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v7 = v16;
    v8 = *(_WORD *)(v16 + 24);
    if ( v8 == 267 )
    {
      v4 = (unsigned int *)(v16 + 232);
    }
    else if ( v8 == 523 )
    {
      v4 = (unsigned int *)(v16 + 248);
    }
    if ( !v4 )
      return (unsigned int)-1073741701;
    v9 = *v4;
    if ( !(_DWORD)v9 || v4[1] < 0x48 )
      return (unsigned int)-1073741701;
    v10 = AslpImageRvaToVa(v16, a2 + 520, v9);
    if ( v10 )
    {
      if ( *(_WORD *)(v10 + 4) != 2 )
        return (unsigned int)-1073741637;
      v13 = (_DWORD *)AslpImageRvaToVa(v7, a2 + 520, *(unsigned int *)(v10 + 8));
      if ( v13 )
      {
        if ( *v13 != 1112167234 )
        {
          v6 = -1073741637;
          v11 = "Invalid COR20 Metadata signature encountered";
          v12 = 4183;
          goto LABEL_13;
        }
        v14 = (unsigned int)v13[3];
        if ( (unsigned __int64)(v14 - 1) <= 0xFE )
        {
          memmove(a1, v13 + 4, (unsigned int)v14);
          a1[v14] = 0;
          return 0;
        }
        v11 = "CLR version string null or too long";
        v12 = 4195;
      }
      else
      {
        v11 = "Invalid COR20 Metadata virtual address encountered";
        v12 = 4173;
      }
    }
    else
    {
      v11 = "Invalid COM Descriptor virtual address encountered";
      v12 = 4153;
    }
    v6 = -1073741701;
LABEL_13:
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetClrVersion", v12, (_DWORD)v11);
    return v6;
  }
  AslLogCallPrintf(
    1LL,
    (unsigned int)"AslpFileGetClrVersion",
    4124,
    (unsigned int)"AslpFileGetImageNtHeader failed [%x]",
    ImageNtHeader);
  return v6;
}
