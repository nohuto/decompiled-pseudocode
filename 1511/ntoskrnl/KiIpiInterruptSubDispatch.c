/*
 * XREFs of KiIpiInterruptSubDispatch @ 0x14015A800
 * Callers:
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiIpiProcessRequests @ 0x1400C6AB0 (KiIpiProcessRequests.c)
 */

__int64 __fastcall KiIpiInterruptSubDispatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CurrentThread; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // ecx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xEuLL);
  *(_BYTE *)(v4 - 87) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v8 = __rdtsc() - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v8;
    v9 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v8;
    v10 = v8 + v9;
    v11 = v10;
    if ( HIDWORD(v10) )
      v11 = -1;
    *(_DWORD *)(CurrentThread + 80) = v11;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v8, a4);
  }
  _enable();
  result = KiIpiProcessRequests();
  _disable();
  return result;
}
