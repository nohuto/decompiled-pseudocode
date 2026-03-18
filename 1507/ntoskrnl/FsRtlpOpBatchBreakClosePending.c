/*
 * XREFs of FsRtlpOpBatchBreakClosePending @ 0x14066D2C4
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

__int64 __fastcall FsRtlpOpBatchBreakClosePending(__int64 a1, __int64 a2, IRP *a3, __int64 a4)
{
  ULONG_PTR v8; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  _QWORD **v13; // rcx
  unsigned int v14; // eax
  ULONG_PTR v15; // rbx
  signed __int32 v16; // eax
  unsigned int v17; // [rsp+68h] [rbp+20h]

  v17 = 0;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 152);
    CurrentThread = KeGetCurrentThread();
    v10 = KeAbPreAcquire(v8, 0LL, 0LL, a4);
    v11 = v10;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v8, 0) )
      ExpAcquireFastMutexContended(v8, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *(_QWORD *)(v8 + 8) = CurrentThread;
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) && (v12 = *(_DWORD *)(a1 + 144), (v12 & 0x700) != 0) )
    {
      if ( (v12 & 0x82) != 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
        FsRtlpClearOwnerThread(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        if ( (*(_DWORD *)(a1 + 144) & 2) != 0 )
          ObfDereferenceObject(*(PVOID *)(a1 + 8));
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        *(_QWORD *)(a1 + 8) = 0LL;
        while ( 1 )
        {
          v13 = (_QWORD **)(a1 + 88);
          if ( *v13 == v13 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(*v13);
        }
      }
      else
      {
        v14 = v12 & 0xFE0FF0FF;
        *(_DWORD *)(a1 + 144) = v14;
        *(_DWORD *)(a1 + 144) = v14 | 0x800;
      }
    }
    else
    {
      v17 = -1073741597;
    }
    a3->IoStatus.Status = v17;
    IofCompleteRequest(a3, 1);
    v15 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(v15 + 8) = 0LL;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v15, v16);
    KeAbPostRelease(v15);
    return v17;
  }
  else
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
    return 3221225699LL;
  }
}
