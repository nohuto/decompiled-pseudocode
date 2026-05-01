/*
 * XREFs of RmpCopyMemUtilHostMetrics @ 0x18001912C
 * Callers:
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x180018EEC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpCopyMemUtilHostMetrics(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v3; // rax
  __int16 result; // ax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = *(_WORD *)(a2 + 62) & 0x2C;
  if ( (*(_BYTE *)(a2 + 62) & 4) != 0 )
  {
    v2 = *(_WORD *)(a2 + 62) & 0x28;
    v5 = *(_QWORD *)(a2 + 16);
    *(_WORD *)(a1 + 62) |= 4u;
    *(_QWORD *)(a1 + 16) = v5;
  }
  else
  {
    *(_WORD *)(a1 + 62) &= ~4u;
  }
  if ( (v2 & 8) != 0 )
  {
    LOBYTE(v2) = v2 & 0xF7;
    v3 = *(_QWORD *)(a2 + 24);
    *(_WORD *)(a1 + 62) |= 8u;
    *(_QWORD *)(a1 + 24) = v3;
  }
  else
  {
    *(_WORD *)(a1 + 62) &= ~8u;
  }
  if ( (v2 & 0x20) != 0 )
  {
    LOBYTE(v2) = v2 & 0xDF;
    v6 = *(_QWORD *)(a2 + 32);
    *(_WORD *)(a1 + 62) |= 0x20u;
    *(_QWORD *)(a1 + 32) = v6;
  }
  else
  {
    *(_WORD *)(a1 + 62) &= ~0x20u;
  }
  if ( (v2 & 0x10) != 0 )
  {
    *(_WORD *)(a1 + 62) |= 0x10u;
    *(_WORD *)(a1 + 60) &= ~1u;
    result = *(_WORD *)(a2 + 60) & 1;
    *(_WORD *)(a1 + 60) |= result;
  }
  else
  {
    result = -17;
    *(_WORD *)(a1 + 62) &= ~0x10u;
  }
  return result;
}
