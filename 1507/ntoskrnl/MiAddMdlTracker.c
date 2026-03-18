/*
 * XREFs of MiAddMdlTracker @ 0x140213DCC
 * Callers:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x140120768 (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiGetInstructionPointer @ 0x140195D2C (MiGetInstructionPointer.c)
 *     MiLockTrackerCompare @ 0x140214134 (MiLockTrackerCompare.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // rsi
  bool v4; // bl
  __int64 v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbp
  void **v11; // r15
  _QWORD *v12; // rsi
  int v13; // eax
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  v8 = *(_QWORD *)&v3[1].ThreadSeed[4];
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
          v13 = MiLockTrackerCompare(BugCheckParameter3, v12);
          if ( v13 <= 0 )
          {
            if ( v13 >= 0 )
              KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v12, BugCheckParameter3, *(_QWORD *)(v8 + 8));
            v14 = (_QWORD *)*v12;
            if ( !*v12 )
              break;
          }
          else
          {
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
