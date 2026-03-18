/*
 * XREFs of sub_1C00D3D40 @ 0x1C00D3D40
 * Callers:
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     sub_1C00D3DAC @ 0x1C00D3DAC (sub_1C00D3DAC.c)
 */

__int64 __fastcall sub_1C00D3D40(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD **v6; // rbx
  _QWORD *i; // r11
  __int64 v8; // rcx

  if ( (unsigned int)sub_1C00D3DAC(a2, *(_QWORD *)(a2 + 696) + 2400LL * a3) )
    return 0LL;
  v6 = (_QWORD **)(a1 + 568);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = *(i - 1);
    if ( v8 != a2 && (unsigned int)sub_1C00D3DAC(v8, 0LL) )
      return 0LL;
  }
  return 1LL;
}
