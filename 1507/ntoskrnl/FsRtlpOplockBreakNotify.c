/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x14066D484
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14006D784 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r14
  char v12; // r14
  int v13; // ecx
  ULONG_PTR v14; // rdi
  signed __int32 v15; // eax
  unsigned int v16; // [rsp+88h] [rbp+10h]

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 152);
  CurrentThread = KeGetCurrentThread();
  v9 = KeAbPreAcquire(v7, 0LL, 0LL, a4);
  v11 = v9;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v7, 0) )
    ExpAcquireFastMutexContended(v7, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_QWORD *)(v7 + 8) = CurrentThread;
  v12 = 1;
  v13 = *(_DWORD *)(a1 + 144);
  if ( (v13 & 0x1F00F00) == 0 && *(_QWORD *)(a1 + 72) == a1 + 72 && (v13 & 0x20000) == 0 )
    goto LABEL_10;
  if ( (v13 & 0x80u) != 0 )
  {
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
LABEL_10:
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    result = 0LL;
    goto LABEL_14;
  }
  v12 = 0;
  a3->IoStatus.Status = 0;
  LOBYTE(v10) = 1;
  FsRtlpModifyThreadPriorities(a1, 0LL, v10);
  FsRtlpOplockSendModernAppTermination(a1, 0LL);
  result = FsRtlpWaitOnIrp(a1, (__int64)a3, 0LL, (__int64)FsRtlpNotifyOplockBreakComplete, 0LL, 0LL, 0, 0LL);
LABEL_14:
  v16 = result;
  if ( v12 )
  {
    v14 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(v14 + 8) = 0LL;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v14, v15);
    KeAbPostRelease(v14);
    return v16;
  }
  return result;
}
