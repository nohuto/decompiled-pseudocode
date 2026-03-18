/*
 * XREFs of AslpFileMappingGetFileKind @ 0x1405AACC0
 * Callers:
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     AslFileMappingEnsure @ 0x14070556C (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x140705624 (AslFileMappingEnsureMappedAs.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileMappingGetFileKind(_QWORD *a1, int *a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = a1[2];
  v4 = 0;
  if ( !v3 || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  v5 = 3;
  if ( v3 < 0x40 )
  {
    *a2 = 3;
    return 0LL;
  }
  v6 = a1[3];
  if ( (unsigned __int64)(v6 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -1073741811;
    AslLogCallPrintf(1, (unsigned int)"AslpFileMappingGetFileKind", 1025, (unsigned int)"File mapping invalid [%x]");
  }
  else if ( *(_WORD *)v6 == 23117 )
  {
    v5 = 4;
    v7 = *(unsigned int *)(v6 + 60);
    if ( v3 >= v7 + 4 )
    {
      if ( *(_DWORD *)(v7 + v6) == 17744 )
      {
        v5 = 6;
      }
      else if ( *(_WORD *)(v7 + v6) == 17742 )
      {
        v5 = 5;
      }
    }
  }
  *a2 = v5;
  return v4;
}
