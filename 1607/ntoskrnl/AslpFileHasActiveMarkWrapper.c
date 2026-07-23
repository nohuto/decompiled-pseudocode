/*
 * XREFs of AslpFileHasActiveMarkWrapper @ 0x1406C86D0
 * Callers:
 *     AslpFileGetExeWrapper @ 0x1406C77D8 (AslpFileGetExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileHasActiveMarkWrapper(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int16 v7; // ax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 i; // rdx

  v4 = 0;
  v5 = 0LL;
  *a1 = 0;
  v6 = *(_QWORD *)(a3 + 552);
  if ( *(_QWORD *)(a3 + 536) < v6 )
    v6 = *(_QWORD *)(a3 + 536);
  if ( v6 - 1025 > 0xFFFFFBFE || *(_DWORD *)(a3 + 596) || *(_DWORD *)(a3 + 592) )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 == 267 )
    {
      v5 = a2 + 152;
    }
    else if ( v7 == 523 )
    {
      v5 = a2 + 168;
    }
    if ( v5 && (v8 = (unsigned int)(*(_DWORD *)(v5 + 4) + 1024), v6 > v8) )
    {
      v9 = v6 - v8 + *(_QWORD *)(a3 + 544);
      for ( i = v9 + 998; i >= v9; --i )
      {
        if ( *(_QWORD *)i == 0x464F564D41534D54LL
          && *(_WORD *)(i + 8) == 1
          && *(unsigned int *)(i + 10) + 622LL + *(unsigned int *)(i + 14) + (unsigned __int64)*(unsigned int *)(i + 18) == *(_DWORD *)(i + 22) )
        {
          *a1 = 1;
          return v4;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return v4;
}
