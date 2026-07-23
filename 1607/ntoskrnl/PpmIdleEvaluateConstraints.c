/*
 * XREFs of PpmIdleEvaluateConstraints @ 0x14013C1BC
 * Callers:
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 * Callees:
 *     PoAllProcessorsDeepIdle @ 0x1400BED5C (PoAllProcessorsDeepIdle.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall PpmIdleEvaluateConstraints(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rsi
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v6; // r11
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 23808);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v6 = PerformanceCounter;
  *(LARGE_INTEGER *)(v2 + 480) = PerformanceCounter;
  *a2 = InterruptTimePrecise;
  *(_QWORD *)(v2 + 488) = *(_QWORD *)(a1 + 23832) + *(_QWORD *)(a1 + 24008);
  *(_BYTE *)(v2 + 522) = *(_BYTE *)(a1 + 24218);
  *(_BYTE *)(v2 + 520) = *(_BYTE *)(a1 + 23864);
  *(_BYTE *)(v2 + 521) = *(_BYTE *)(a1 + 23865);
  *(_BYTE *)(v2 + 523) = 1;
  if ( *(_BYTE *)(a1 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 524) = 1;
    *(_WORD *)(v2 + 36) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 524) = 0;
  }
  if ( *(_BYTE *)(v2 + 1) )
  {
    *(_WORD *)(v2 + 36) |= 0x100u;
    *(_DWORD *)(v2 + 512) = *(_DWORD *)(v2 + 24);
  }
  else
  {
    *(_DWORD *)(v2 + 512) = -1;
  }
  return v6;
}
