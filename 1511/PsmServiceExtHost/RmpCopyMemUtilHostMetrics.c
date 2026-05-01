/*
 * XREFs of RmpCopyMemUtilHostMetrics @ 0x18001D3E8
 * Callers:
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x18001D1AC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
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

  v2 = *(_WORD *)(a2 + 54) & 0x16;
  if ( (*(_BYTE *)(a2 + 54) & 2) != 0 )
  {
    v2 = *(_WORD *)(a2 + 54) & 0x14;
    v5 = *(_QWORD *)(a2 + 16);
    *(_WORD *)(a1 + 54) |= 2u;
    *(_QWORD *)(a1 + 16) = v5;
  }
  else
  {
    *(_WORD *)(a1 + 54) &= ~2u;
  }
  if ( (v2 & 4) != 0 )
  {
    LOBYTE(v2) = v2 & 0xFB;
    v3 = *(_QWORD *)(a2 + 24);
    *(_WORD *)(a1 + 54) |= 4u;
    *(_QWORD *)(a1 + 24) = v3;
  }
  else
  {
    *(_WORD *)(a1 + 54) &= ~4u;
  }
  if ( (v2 & 0x10) != 0 )
  {
    LOBYTE(v2) = v2 & 0xEF;
    v6 = *(_QWORD *)(a2 + 32);
    *(_WORD *)(a1 + 54) |= 0x10u;
    *(_QWORD *)(a1 + 32) = v6;
  }
  else
  {
    *(_WORD *)(a1 + 54) &= ~0x10u;
  }
  if ( (v2 & 8) != 0 )
  {
    *(_WORD *)(a1 + 54) |= 8u;
    *(_WORD *)(a1 + 52) &= ~1u;
    result = *(_WORD *)(a2 + 52) & 1;
    *(_WORD *)(a1 + 52) |= result;
  }
  else
  {
    result = -9;
    *(_WORD *)(a1 + 54) &= ~8u;
  }
  return result;
}
