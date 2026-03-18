/*
 * XREFs of ExpTimerDpcRoutine @ 0x14012B7B8
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KiCustomAccessRoutine0 @ 0x14018DB60 (KiCustomAccessRoutine0.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  char *v4; // rbx
  struct _KDPC *v5; // rdi
  int v6; // esi
  volatile signed __int32 *v7; // r15
  __int64 v8; // [rsp+0h] [rbp-1A8h] BYREF
  int v9; // [rsp+34h] [rbp-174h]
  __int64 v10; // [rsp+101h] [rbp-A7h]
  __int64 v11; // [rsp+149h] [rbp-5Fh]
  unsigned __int64 v12; // [rsp+151h] [rbp-57h]
  __int64 *v13; // [rsp+178h] [rbp-30h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v13 = &v8;
  v4 = (char *)DeferredContext;
  v5 = Dpc;
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v9 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v12 = SystemArgument1;
    v10 = __ROL8__(DeferredContext, SystemArgument1);
    v11 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
    v5 = (struct _KDPC *)__ROL8__(v11, v12);
    v4 = (char *)__ROR8__(v10, v12);
    v5->DeferredContext = v4;
    v5->Type = 19;
  }
  v6 = 0;
  v7 = (volatile signed __int32 *)(v4 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4 + 64);
  }
  else if ( _interlockedbittestandset64(v7, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v4 + 16);
  }
  if ( (v4[244] & 1) != 0 )
  {
    if ( !KeInsertQueueApc((__int64)(v4 + 72), MEMORY[0xFFFFF78000000014], HIDWORD(MEMORY[0xFFFFF78000000014]), 0) )
      v6 = 1;
    if ( *((_DWORD *)v4 + 60) )
    {
      if ( --v6 < 0 )
      {
        ObfReferenceObjectWithTag(v4, 0x746C6644u);
        v6 = 0;
      }
      if ( (v4[244] & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)v4,
             (LARGE_INTEGER)(-10000LL * *((int *)v4 + 60)),
             0,
             *((_DWORD *)v4 + 76),
             v5) )
      {
        ++v6;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4 + 64, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  if ( v6 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
}
