/*
 * XREFs of DpiFdoDpcForIsr @ 0x1C000C360
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DpiFdoDpcForIsr(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 40);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(Dpc, &EventProfilerEnter, SystemArgument1, 4013LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(v4 + 1328), &LockHandle);
  *(LARGE_INTEGER *)(v4 + 16 * (*(unsigned int *)(v4 + 1336) + 84LL)) = KeQueryPerformanceCounter(0LL);
  (*(void (__fastcall **)(_QWORD))(v5 + 192))(*(_QWORD *)(v4 + 48));
  *(LARGE_INTEGER *)(v4 + 16LL * *(unsigned int *)(v4 + 1336) + 1352) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(v4 + 1336) = ((unsigned __int8)*(_DWORD *)(v4 + 1336) + 1) & 0x3F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v7, 4013LL);
}
