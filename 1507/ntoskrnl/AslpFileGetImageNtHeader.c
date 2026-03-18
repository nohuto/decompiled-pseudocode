/*
 * XREFs of AslpFileGetImageNtHeader @ 0x140706E90
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x1407058A4 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x140706390 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x140706788 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x140706F68 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x140707DC4 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( *(_DWORD *)(a2 + 576) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 544);
    v5 = *(int *)(v4 + 60);
    if ( *(_QWORD *)(a2 + 536) >= (unsigned __int64)(v5 + 264) )
    {
      *a1 = v5 + v4;
      return 0;
    }
    else
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    v3 = -1073741637;
    AslLogCallPrintf(1LL);
  }
  return v3;
}
