/*
 * XREFs of WdipSemAddContextEventToScenario @ 0x1405663D0
 * Callers:
 *     WdipSemMergeScenarios @ 0x140566344 (WdipSemMergeScenarios.c)
 * Callees:
 *     WdipSemFastAllocate @ 0x1404C70F0 (WdipSemFastAllocate.c)
 *     WdipSemMergeEvents @ 0x140566518 (WdipSemMergeEvents.c)
 */

__int64 __fastcall WdipSemAddContextEventToScenario(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  PSLIST_ENTRY v9; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(unsigned int *)(a1 + 48);
    v6 = 0;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD **)(a1 + 8LL * v6 + 56);
        v8 = *(_QWORD *)a2 - *v7;
        if ( *(_QWORD *)a2 == *v7 )
          v8 = *(_QWORD *)(a2 + 8) - v7[1];
        if ( !v8 )
          break;
        if ( ++v6 >= (unsigned int)v5 )
          goto LABEL_8;
      }
      WdipSemMergeEvents(*(_QWORD *)(a1 + 8LL * v6 + 56), a2, v5, v7);
    }
    else
    {
LABEL_8:
      if ( (unsigned int)v5 >= 0x7C )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        v9 = WdipSemFastAllocate(0, 0x30u);
        if ( v9 )
        {
          *v9 = *(PSLIST_ENTRY)a2;
          v9[1] = *(PSLIST_ENTRY)(a2 + 16);
          v9[2] = *(PSLIST_ENTRY)(a2 + 32);
          *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 48))++ + 56) = v9;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
