/*
 * XREFs of MiStackTheftFreezeProcessors @ 0x1401E65E4
 * Callers:
 *     MiJumpStackTarget @ 0x1401E63E8 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14009E2E0 (MiLockNestedPageAtDpcInline.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14012FA64 (KeIpiGenericCall.c)
 */

__int64 __fastcall MiStackTheftFreezeProcessors(ULONG_PTR Context)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax

  v2 = 48LL * *(_QWORD *)(Context + 8) - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(Context + 60) = ActiveProcessorCount;
  *(_DWORD *)(Context + 56) = ActiveProcessorCount;
  KeIpiGenericCall(MiStackTheftIsr, Context);
  __writecr8(CurrentIrql);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
