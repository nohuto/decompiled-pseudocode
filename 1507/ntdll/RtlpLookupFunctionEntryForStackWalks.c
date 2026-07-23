/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x1800136F0
 * Callers:
 *     RtlpSameFunction @ 0x180011420 (RtlpSameFunction.c)
 *     RtlpWalkFrameChain @ 0x1800126E0 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(char *BaseAddress, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  unsigned int v6; // r9d
  unsigned int *v7; // r11
  char *v8; // rbx
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // eax

  v4 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)BaseAddress < v4 || (unsigned __int64)BaseAddress >= v4 + *(unsigned int *)(a2 + 16) )
  {
    if ( (unsigned __int64)BaseAddress < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
      || (unsigned __int64)BaseAddress >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                                        + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
    {
      v5 = RtlpxLookupFunctionTable(BaseAddress);
    }
    else
    {
      *(PS_MITIGATION_OPTIONS_MAP *)a2 = LdrSystemDllInitBlock.MitigationOptionsMap;
      v5 = *(_QWORD *)a2;
    }
  }
  else
  {
    v5 = *(_QWORD *)a2;
  }
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 20) / 0xCu;
    v7 = 0LL;
    if ( v6 )
    {
      v8 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
      v9 = (unsigned int *)(v5 + 12LL * (v6 - 1));
      if ( (unsigned __int64)v8 < *v9 )
      {
        v10 = 0;
        v11 = v6 - 2;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v12);
          if ( (unsigned __int64)v8 < *v9 )
          {
            v11 = v12 - 1;
          }
          else
          {
            if ( (unsigned __int64)v8 < v9[3] )
              break;
            v10 = v12 + 1;
          }
        }
      }
      if ( (unsigned __int64)v8 >= *v9 && (unsigned __int64)v8 < v9[1] )
      {
        v7 = v9;
        v13 = v9[2];
        if ( (v13 & 1) != 0 )
          return (unsigned int *)(*(_QWORD *)(a2 + 8) - 1LL + v13);
      }
    }
    return v7;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
}
