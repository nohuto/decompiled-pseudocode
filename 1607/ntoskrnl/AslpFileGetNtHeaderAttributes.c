/*
 * XREFs of AslpFileGetNtHeaderAttributes @ 0x1406C7DB8
 * Callers:
 *     AslpFileGetHeaderAttributesPE @ 0x1406C7B18 (AslpFileGetHeaderAttributesPE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1406C7CD4 (AslpFileGetImageNtHeader.c)
 */

__int64 __fastcall AslpFileGetNtHeaderAttributes(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        __int64 a8)
{
  int ImageNtHeader; // eax
  unsigned int v13; // ebx
  __int64 v14; // r8
  int v15; // edx
  int v17; // [rsp+20h] [rbp-38h]
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  ImageNtHeader = AslpFileGetImageNtHeader(v18, a8);
  v13 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v14 = v18[0];
    *a2 = (unsigned __int8)*(_WORD *)(v18[0] + 70LL) + ((unsigned __int8)*(_WORD *)(v18[0] + 68LL) << 16);
    *a3 = *(_DWORD *)(v14 + 8);
    v15 = *(unsigned __int16 *)(v14 + 24);
    *a7 = v15;
    *a5 = *(_WORD *)(v14 + 4);
    if ( v15 == 267 || v15 == 523 )
    {
      *a1 = *(_DWORD *)(v14 + 88);
      *a4 = *(_DWORD *)(v14 + 80);
      *a6 = *(_WORD *)(v14 + 92);
      return 0;
    }
    else
    {
      *a1 = 0;
      *a4 = 0;
      *a6 = 0;
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    v17 = ImageNtHeader;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetNtHeaderAttributes",
      2702,
      (unsigned int)"AslpFileGetImageNtHeader failed [%x]",
      v17);
  }
  return v13;
}
