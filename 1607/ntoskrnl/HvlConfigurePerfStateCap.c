/*
 * XREFs of HvlConfigurePerfStateCap @ 0x1401BEC8C
 * Callers:
 *     PpmPerfRegisterHvCap @ 0x140676548 (PpmPerfRegisterHvCap.c)
 * Callees:
 *     HvlpSetLogicalProcessorProperty @ 0x1401BC3A0 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStateCap(int a1, __int64 a2)
{
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-CC8h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v4 = *(_QWORD *)a2;
  DWORD2(v4) = v2;
  return HvlpSetLogicalProcessorProperty(a1, 3, &v4);
}
