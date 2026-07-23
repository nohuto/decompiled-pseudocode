/*
 * XREFs of MiAddMdlTracker @ 0x1401E298C
 * Callers:
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x140099F54 (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiGetInstructionPointer @ 0x140171D98 (MiGetInstructionPointer.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // r14
  bool v4; // bl
  __int64 v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rsi
  void **v11; // r15
  _QWORD *v12; // rdx
  ULONG_PTR v13; // rax
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  v8 = *(_QWORD *)&v3[1].ThreadSeed[6];
  if ( v8 && *(_DWORD *)(v8 + 24) )
  {
    v9 = ExAllocateFromNPagedLookasideList(&Lookaside);
    v10 = (unsigned __int64)v9;
    if ( v9 )
    {
      v9[3] = BugCheckParameter3;
      v11 = (void **)(v9 + 8);
      v9[5] = a2;
      v9[4] = *(_QWORD *)(BugCheckParameter3 + 32);
      *((_DWORD *)v9 + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
      *((_DWORD *)v9 + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
      v9[7] = *(_QWORD *)(BugCheckParameter3 + 48);
      memset(v9 + 8, 0, 0x40uLL);
      if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)(v10 + 64), &BackTraceHash) )
      {
        *(_QWORD *)(v10 + 72) = retaddr;
        *v11 = MiGetInstructionPointer();
      }
      *(_DWORD *)(v10 + 128) = a3;
      *(_QWORD *)(v10 + 136) = v3;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 16), &LockHandle);
      v12 = *(_QWORD **)v8;
      if ( *(_QWORD *)v8 )
      {
        while ( 1 )
        {
          v13 = v12[3];
          if ( BugCheckParameter3 < v13 )
          {
            v14 = (_QWORD *)*v12;
            if ( !*v12 )
              break;
          }
          else
          {
            if ( BugCheckParameter3 <= v13 )
              KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v12, BugCheckParameter3, *(_QWORD *)(v8 + 8));
            v14 = (_QWORD *)v12[1];
            if ( !v14 )
            {
              v4 = 1;
              break;
            }
          }
          v12 = v14;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v8, (unsigned __int64)v12, v4, v10);
      *(_QWORD *)(v8 + 8) += a2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      *(_DWORD *)(v8 + 24) = 0;
    }
  }
}
