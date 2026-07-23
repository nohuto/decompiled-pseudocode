/*
 * XREFs of WdipSemAddScenarioToTable @ 0x14056628C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFreeScenario @ 0x140565EF4 (WdipSemFreeScenario.c)
 *     WdipSemMergeScenarios @ 0x140566344 (WdipSemMergeScenarios.c)
 */

__int64 __fastcall WdipSemAddScenarioToTable(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rdx

  v1 = 0;
  if ( a1 )
  {
    v3 = 0LL;
    if ( dword_1402FDEC0 )
    {
      while ( 1 )
      {
        v4 = WdipSemScenarioTable[v3];
        v5 = *(_QWORD *)v4 - *(_QWORD *)a1;
        if ( *(_QWORD *)v4 == *(_QWORD *)a1 )
          v5 = *(_QWORD *)(v4 + 8) - *(_QWORD *)(a1 + 8);
        if ( !v5 && *(_WORD *)(v4 + 16) == *(_WORD *)(a1 + 16) )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= dword_1402FDEC0 )
          goto LABEL_7;
      }
      v1 = WdipSemMergeScenarios(a1, WdipSemScenarioTable[v3]);
      if ( v1 >= 0 )
      {
        WdipSemScenarioTable[v3] = a1;
        WdipSemFreeScenario(v4);
      }
    }
    else
    {
LABEL_7:
      if ( (unsigned int)dword_1402FDEC0 >= 0x40 )
        return (unsigned int)-1073741823;
      else
        WdipSemScenarioTable[dword_1402FDEC0++] = a1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
