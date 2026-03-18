/*
 * XREFs of KiInitializeProcessorGroupSchedulingData @ 0x140195CA8
 * Callers:
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140402BCC (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeProcessorGroupSchedulingData(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24280) = a1 + 24272;
  *(_QWORD *)(a1 + 24272) = a1 + 24272;
  *(_DWORD *)(a1 + 1624) = 408 * *(_DWORD *)(a1 + 36) + 128;
  result = KiGenerationEndTick;
  *(_QWORD *)(a1 + 23384) = KiGenerationEndTick;
  return result;
}
