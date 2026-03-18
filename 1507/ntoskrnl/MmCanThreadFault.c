/*
 * XREFs of MmCanThreadFault @ 0x14001F4C0
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 */

_BOOL8 __fastcall MmCanThreadFault(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  __int16 *v4; // r8
  unsigned __int16 v5; // cx
  __int64 v6; // rcx

  if ( !(unsigned __int8)KeAreInterruptsEnabled(a1, a2) )
    return 0LL;
  if ( KeGetCurrentIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 2) != 0 || !MmPhysicalMemoryBlock )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  v4 = &MiSystemPartition;
  if ( ((__int64)Process[2].ProfileListHead.Blink & 7) == 0 )
  {
    v5 = WORD2(Process[1].SecurePid);
    if ( v5 != 1023 )
      v4 = *(__int16 **)(qword_14034F0E8 + 8LL * v5);
  }
  v6 = *((_QWORD *)v4 + 657);
  return v6 && CurrentThread != *(struct _KTHREAD **)(v6 + 96);
}
