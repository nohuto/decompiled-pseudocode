/*
 * XREFs of GetSbitMetrics @ 0x1C001CBBC
 * Callers:
 *     sbit_GetMetrics @ 0x1C001D128 (sbit_GetMetrics.c)
 * Callees:
 *     sfac_ShaveSbitMetrics @ 0x1C001CD04 (sfac_ShaveSbitMetrics.c)
 *     sfac_GetSbitMetrics @ 0x1C001E778 (sfac_GetSbitMetrics.c)
 *     SubstituteVertMetrics @ 0x1C014604C (SubstituteVertMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DDA08 (SubstituteHorMetrics.c)
 */

__int64 __fastcall GetSbitMetrics(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 result; // rax
  int v11; // [rsp+C0h] [rbp+8h] BYREF
  int v12; // [rsp+D0h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 88) )
    return 0LL;
  v4 = a1 + 80;
  v5 = a1 + 78;
  v6 = a1 + 76;
  v7 = a1 + 74;
  v8 = a1 + 48;
  v9 = a1 + 46;
  result = sfac_GetSbitMetrics(
             a2,
             *(unsigned __int16 *)(a1 + 40),
             *(unsigned __int16 *)(a1 + 42),
             *(_DWORD *)(a1 + 4),
             a1 + 46,
             a1 + 48,
             a1 + 74,
             a1 + 76,
             a1 + 78,
             a1 + 80,
             a1 + 50,
             a1 + 52,
             (__int64)&v11,
             (__int64)&v12);
  if ( !(_DWORD)result )
  {
    if ( v11 || (result = SubstituteHorMetrics(a1, a2), !(_DWORD)result) )
    {
      if ( v12 || (result = SubstituteVertMetrics(a1, a2), !(_DWORD)result) )
      {
        result = sfac_ShaveSbitMetrics(
                   a2,
                   *(unsigned __int16 *)(a1 + 44),
                   *(_DWORD *)(a1 + 8),
                   *(_DWORD *)(a1 + 12),
                   *(_WORD *)(a1 + 94),
                   v9,
                   v8,
                   a1 + 66,
                   a1 + 68,
                   a1 + 70,
                   a1 + 72,
                   v7,
                   v6,
                   v5,
                   v4);
        if ( !(_DWORD)result )
        {
          *(_DWORD *)(a1 + 88) = 1;
          return 0LL;
        }
      }
    }
  }
  return result;
}
