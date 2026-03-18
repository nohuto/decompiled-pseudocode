/*
 * XREFs of WdipSemAddScenarioToTable @ 0x1405AF2E8
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFreeScenario @ 0x1405AEF50 (WdipSemFreeScenario.c)
 *     WdipSemMergeScenarios @ 0x1405C5520 (WdipSemMergeScenarios.c)
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
    if ( dword_14032B1A0 )
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
        if ( (unsigned int)v3 >= dword_14032B1A0 )
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
      if ( (unsigned int)dword_14032B1A0 >= 0x40 )
        return (unsigned int)-1073741823;
      else
        WdipSemScenarioTable[dword_14032B1A0++] = a1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
