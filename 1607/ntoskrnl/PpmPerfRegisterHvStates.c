/*
 * XREFs of PpmPerfRegisterHvStates @ 0x140676680
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x1401BAD24 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigurePcc @ 0x1401BEC40 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStates @ 0x1401BECBC (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x1401BED50 (HvlConfigureThrottleStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int LpIndexFromApicId; // esi
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rdi
  unsigned int v10; // eax

  v4 = 0;
  if ( (HvlEnlightenments & 8) != 0 )
  {
    LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4), a2, a3, a4);
    if ( LpIndexFromApicId == -1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 24);
      v8 = *(_OWORD **)(a1 + 8);
      v9 = *(_OWORD **)(a1 + 16);
      if ( v7 )
      {
        return (unsigned int)HvlConfigurePcc(LpIndexFromApicId, v7);
      }
      else
      {
        if ( v8 )
          v4 = HvlConfigurePerfStates(LpIndexFromApicId, v8);
        v10 = 0;
        if ( v9 )
          v10 = HvlConfigureThrottleStates(LpIndexFromApicId, v9);
        if ( !v4 )
          return v10;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
