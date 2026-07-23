/*
 * XREFs of sub_1403E1000 @ 0x1403E1000
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     CcAdjustBcbDepth @ 0x140169420 (CcAdjustBcbDepth.c)
 */

BOOLEAN __fastcall sub_1403E1000(PKDPC Dpc)
{
  _QWORD *v1; // r9
  unsigned __int64 ProcessorHistory_low; // rdx
  char SystemArgument1; // bl
  unsigned __int64 DeferredContext; // r8
  char *v6; // rbp
  _QWORD *v7; // r10
  const char *i; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  const char *v11; // rax
  int v12; // edx
  PKDEFERRED_ROUTINE v13; // rdi
  unsigned __int8 *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // eax
  BOOLEAN result; // al
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PKDPC *DpcStack; // rbx
  PKDPC v22; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v1 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  v6 = (char *)Dpc[2].DpcListEntry.Next + *(unsigned int *)v1;
  v22 = Dpc;
  v7 = v6;
  for ( i = v6; i < &v6[ProcessorHistory_low]; i += 64 )
    _mm_prefetch(i, 0);
  if ( (unsigned int)ProcessorHistory_low >= 8 )
  {
    v9 = ProcessorHistory_low >> 3;
    do
    {
      DeferredContext = __ROL8__(*v7++ ^ DeferredContext, SystemArgument1);
      LODWORD(ProcessorHistory_low) = ProcessorHistory_low - 8;
      --v9;
    }
    while ( v9 );
  }
  for ( ; (_DWORD)ProcessorHistory_low; LODWORD(ProcessorHistory_low) = ProcessorHistory_low - 1 )
  {
    v10 = *(unsigned __int8 *)v7;
    v7 = (_QWORD *)((char *)v7 + 1);
    DeferredContext = __ROL8__(v10 ^ DeferredContext, SystemArgument1);
  }
  v11 = (const char *)v1;
  if ( v1 < (_QWORD *)((char *)v1 + 12) )
  {
    do
    {
      _mm_prefetch(v11, 0);
      v11 += 64;
    }
    while ( v11 < (const char *)v1 + 12 );
  }
  v12 = 4;
  v13 = (PKDEFERRED_ROUTINE)__ROL8__(DeferredContext ^ *v1, SystemArgument1);
  v14 = (unsigned __int8 *)(v1 + 1);
  do
  {
    v15 = *v14++;
    v13 = (PKDEFERRED_ROUTINE)__ROL8__(v15 ^ (unsigned __int64)v13, SystemArgument1);
    --v12;
  }
  while ( v12 );
  v16 = -1200000000 - (unsigned int)ExGenRandom(1) % 100000000LL;
  v17 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v16, 0, v17 % 0x2710, Dpc);
  if ( v13 != Dpc[2].DeferredRoutine )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive || &v22 > DpcStack || &v22 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].InitialStack = 0LL;
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v23 = 0xC48E45A7451D01FAuLL;
    CcAdjustBcbDepth(
      (unsigned int)__ROL4__(16960, 90),
      __ROR8__(0xC48E45A7451D01FAuLL, 91),
      0LL,
      (__int64)v6,
      (unsigned int)__ROR4__(-2147483583, 94),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x1403E1216LL);
  }
  return result;
}
