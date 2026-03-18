/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x140148AD0
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  unsigned __int8 CurrentIrql; // si
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140353538);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353538, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353538);
  }
  if ( !P || dword_140353540 == P[41] )
  {
    v2 = Object;
    if ( Object )
    {
      Object = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, dword_140353530);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353538, retaddr);
  else
    _InterlockedAnd64(&qword_140353538, 0LL);
  __writecr8(CurrentIrql);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
