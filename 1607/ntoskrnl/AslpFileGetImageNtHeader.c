/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1406C7E0C
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x1406C5CEC (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x1406C73E0 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x1406C77D8 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1406C7EF0 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x1406C8DDC (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 576) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 544);
    v5 = *(int *)(v4 + 60);
    v6 = v5 + v4;
    v7 = v5 + 264;
    if ( *(_QWORD *)(a2 + 536) < v7 || *(_QWORD *)(a2 + 552) < v7 )
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL);
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
    AslLogCallPrintf(1LL);
  }
  return v3;
}
