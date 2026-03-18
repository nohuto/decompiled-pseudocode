/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1406C7CD4
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x1406C5BB4 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x1406C72A8 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x1406C76A0 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1406C7DB8 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x1406C8CA4 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]

  if ( *(_DWORD *)(a2 + 576) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 544);
    v5 = *(int *)(v4 + 60);
    v6 = v5 + v4;
    v7 = v5 + 264;
    if ( *(_QWORD *)(a2 + 536) < v7 || *(_QWORD *)(a2 + 552) < v7 )
    {
      v3 = -1073741701;
      v10 = -1073741701;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetImageNtHeader",
        2816,
        (unsigned int)"File mapping invalid [%x]",
        v10);
    }
    else
    {
      *a1 = v6;
      return 0;
    }
  }
  else
  {
    v3 = -1073741637;
    v9 = -1073741637;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetImageNtHeader",
      2804,
      (unsigned int)"File mapping not a PE [%x]",
      v9);
  }
  return v3;
}
