/*
 * XREFs of PspApplyWorkingSetLimits @ 0x140641E10
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x1404C50C0 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x1401D2A7C (MmAdjustWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  PVOID **v4; // rax
  PVOID *v5; // rbx
  PVOID *result; // rax
  PVOID *v7; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  $D4FCF91253F76F57393CBFE908971F67 v10; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  while ( 1 )
  {
    v2 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    v3 = *(_QWORD *)PspWorkingSetChangeHead;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || *(_QWORD *)(v3 + 8) != PspWorkingSetChangeHead )
    {
      __fastfail(3u);
    }
    PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead;
    *(_QWORD *)(v3 + 8) = &PspWorkingSetChangeHead;
    v4 = (PVOID **)p_P;
    *(_QWORD *)v2 = &P;
    *(_QWORD *)(v2 + 8) = v4;
    if ( *v4 != &P )
      __fastfail(3u);
    *v4 = (PVOID *)v2;
    p_P = (PVOID *)v2;
    KiStackAttachProcess(*(_KPROCESS **)(v2 + 16), 0LL, (__int64)&v10);
    MmAdjustWorkingSetSize(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 32), 0LL, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v2 + 16), 1);
    KiUnstackDetachProcess(&v10, 0LL);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402D4950, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402D4950);
  KeAbPostRelease((ULONG_PTR)&qword_1402D4950);
  while ( 1 )
  {
    v5 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      break;
    v7 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v7[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v7[1] = &P;
    ObfDereferenceObjectWithTag(v5[2], 0x624A7350u);
    ExFreePoolWithTag(v5, 0x72437350u);
  }
  return result;
}
