/*
 * XREFs of KiDpcWatchdogCaptureStack @ 0x1401D1C3C
 * Callers:
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 */

int __fastcall KiDpcWatchdogCaptureStack(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a1 + 25000);
  if ( *(_QWORD *)(a1 + 25008) + 416LL > v2 + 8 * ((unsigned __int64)(unsigned int)KiDpcWatchdogProfileArrayLength - 2) )
    *(_QWORD *)(a1 + 25008) = v2;
  v3 = *(_QWORD *)(a1 + 25008);
  LODWORD(v4) = RtlWalkFrameChain((PVOID *)(v3 + 8), 0x32u, 0x200u);
  if ( (unsigned int)(v4 - 3) <= 0x31 )
  {
    *(_WORD *)v3 = v4 - 2;
    *(_QWORD *)(a1 + 25008) += 8LL * (unsigned int)(v4 - 2) + 16;
    v5 = *(_QWORD **)(a1 + 25008);
    *v5 = 0LL;
    v5[1] = 0LL;
    v4 = *(_QWORD *)(a1 + 25008);
    *(_QWORD *)(v4 - 8) = 0LL;
  }
  return v4;
}
