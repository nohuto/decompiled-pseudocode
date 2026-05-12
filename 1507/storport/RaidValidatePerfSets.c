/*
 * XREFs of RaidValidatePerfSets @ 0x1C002C054
 * Callers:
 *     RaidRegisterPerfStates @ 0x1C002B3F8 (RaidRegisterPerfStates.c)
 * Callees:
 *     RaidGetStorPoFxPerfState @ 0x1C0027110 (RaidGetStorPoFxPerfState.c)
 */

char __fastcall RaidValidatePerfSets(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  _QWORD *i; // r9
  _DWORD *v5; // rsi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int j; // r11d
  _DWORD *StorPoFxPerfState; // rax
  int v10; // r11d

  v2 = a2;
  if ( a2 < 4 )
  {
    v3 = 0;
    if ( !a2 )
      return 1;
    for ( i = (_QWORD *)(a1 + 24); ; i += 5 )
    {
      v5 = i - 3;
      if ( i == (_QWORD *)24 || *v5 != 1 || *((_DWORD *)i - 5) < 0x28u )
        break;
      v6 = *((_DWORD *)i - 1);
      if ( v6 )
      {
        if ( v6 != 1 || *i > i[1] )
          return 0;
      }
      else
      {
        v7 = *(_DWORD *)i;
        if ( (unsigned int)(*(_DWORD *)i - 1) > 7 )
          return 0;
        for ( j = 0; j < v7; j = v10 + 1 )
        {
          StorPoFxPerfState = (_DWORD *)RaidGetStorPoFxPerfState(v5, j);
          if ( *StorPoFxPerfState != 1 || StorPoFxPerfState[1] < 0x18u )
            return 0;
        }
      }
      if ( ++v3 >= v2 )
        return 1;
    }
  }
  return 0;
}
