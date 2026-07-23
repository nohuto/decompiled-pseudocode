/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x18002F25C
 * Callers:
 *     LdrpLoadKnownDll @ 0x180012030 (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 *     LdrpCorProcessImports @ 0x180087938 (LdrpCorProcessImports.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D19B0 (LdrpLogNewDllLoadInternal.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 48);
  v4 = LdrpMapImage(a2);
  v5 = v4;
  if ( v4 >= 0 && v4 != 1073741838 )
  {
    if ( v10 )
    {
      LdrpLoadContextReplaceModule(a1);
    }
    else
    {
      v5 = LdrpProcessMappedModule(v2, 1LL);
      if ( v5 >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 40);
        if ( MEMORY[0x7FFE0384]
          && ((MEMORY[0x7FFE0385] & 0x10) != 0
           || MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0) )
        {
          v9 = 0LL;
          if ( v6 )
            v9 = *(_QWORD *)(v6 + 48);
          LdrpLogNewDllLoadInternal(
            *(_QWORD *)(v2 + 48),
            v9,
            *(unsigned int *)(v2 + 268),
            *(unsigned __int16 *)(v2 + 72),
            *(_QWORD *)(v2 + 80));
        }
        v7 = *(_QWORD *)(a1 + 40);
        if ( v7 )
          *(_QWORD *)(v2 + 184) = *(_QWORD *)(v7 + 48);
        if ( (*(_BYTE *)(v2 + 104) & 4) != 0 )
        {
          if ( (*(_DWORD *)(v2 + 104) & 0x1000000) != 0 )
          {
            return (unsigned int)LdrpCorProcessImports(v2);
          }
          else
          {
            LdrpMapAndSnapDependency(a1);
            return (unsigned int)**(_DWORD **)(a1 + 32);
          }
        }
        else
        {
          LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14AEu);
          v5 = 0;
          *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 9;
        }
      }
    }
  }
  return (unsigned int)v5;
}
