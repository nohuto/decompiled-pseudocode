/*
 * XREFs of PspApplyWorkingSetLimits @ 0x1406C43B8
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsJobPostCallback @ 0x14055C260 (PspSetJobLimitsJobPostCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x140213DAC (MmAdjustWorkingSetSize.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
  _BYTE v10[48]; // [rsp+30h] [rbp-40h] BYREF

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
    KiStackAttachProcess(*(_KPROCESS **)(v2 + 16), 0, (__int64)v10);
    MmAdjustWorkingSetSize(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 32), 0, 1);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v2 + 16), 1);
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140323A70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140323A70);
  KeAbPostRelease((ULONG_PTR)&qword_140323A70);
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
