/*
 * XREFs of KiResetScb @ 0x1400A5454
 * Callers:
 *     KiUpdateCpuTargetByRate @ 0x1400A51E8 (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x1400A547C (KiUpdateCpuTargetByWeight.c)
 * Callees:
 *     <none>
 */

void __fastcall KiResetScb(__int64 a1)
{
  bool v1; // zf

  *(_BYTE *)(a1 + 112) &= 0xF1u;
  v1 = (*(_BYTE *)(a1 + 112) & 0x20) == 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 116) = 0;
  if ( !v1 )
    *(_DWORD *)(a1 + 128) = 0;
}
