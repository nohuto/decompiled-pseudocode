/*
 * XREFs of ObpDeregisterObject @ 0x140667748
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400ED7E0 (NtAssociateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwTraceObject @ 0x1406A1D5C (EtwTraceObject.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbp
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rax

  if ( (xmmword_1403AA2D0 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  if ( (*(_BYTE *)(a1 + 25) & 3) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v4, (ULONG_PTR)&ObpStackTraceLock);
    if ( v6 )
      v6[26] |= 1u;
    if ( (ObpTraceFlags & 0x73) == 0 )
      goto LABEL_19;
    v7 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
    v8 = (_QWORD *)*((_QWORD *)ObpObjectTable + v7);
    if ( !v8 )
      goto LABEL_19;
    do
    {
      if ( *v8 == a1 )
        break;
      v3 = v8;
      v8 = (_QWORD *)v8[1];
    }
    while ( v8 );
    if ( v8 )
    {
      v9 = v8[1];
      if ( v3 )
        v3[1] = v9;
      else
        *((_QWORD *)ObpObjectTable + v7) = v9;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v8, 0x7452624Fu);
    }
    else
    {
LABEL_19:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
