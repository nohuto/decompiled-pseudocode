/*
 * XREFs of RaidAdapterCacheOperationalPowerRange @ 0x1C002CDF8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidGetStorPoFxPerfState @ 0x1C002CEC0 (RaidGetStorPoFxPerfState.c)
 */

char __fastcall RaidAdapterCacheOperationalPowerRange(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11
  unsigned int v6; // r10d
  _DWORD *i; // rax
  char result; // al
  __int64 v9; // rax
  unsigned int v10; // r10d
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 StorPoFxPerfState; // rax
  int v14; // r10d
  unsigned __int64 v15; // rcx

  v3 = 0LL;
  v4 = -1LL;
  v6 = 0;
  if ( !a2 )
    return 0;
  for ( i = (_DWORD *)(a3 + 24); *(i - 1) || !*i || *(i - 2) != 3; i += 10 )
  {
    if ( ++v6 >= a2 )
      return 0;
  }
  v9 = v6;
  v10 = 0;
  v11 = a3 + 40 * v9;
  v12 = *(_DWORD *)(v11 + 24);
  if ( v12 )
  {
    do
    {
      StorPoFxPerfState = RaidGetStorPoFxPerfState(v11, v10);
      v15 = *(_QWORD *)(StorPoFxPerfState + 8);
      if ( v15 > v3 )
        v3 = *(_QWORD *)(StorPoFxPerfState + 8);
      if ( v15 < v4 )
        v4 = *(_QWORD *)(StorPoFxPerfState + 8);
      v10 = v14 + 1;
    }
    while ( v10 < v12 );
  }
  *(_QWORD *)(a1 + 32) = v3;
  result = 1;
  *(_QWORD *)(a1 + 40) = v4;
  return result;
}
