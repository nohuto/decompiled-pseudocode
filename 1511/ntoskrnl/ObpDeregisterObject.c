/*
 * XREFs of ObpDeregisterObject @ 0x14062F65C
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwTraceObject @ 0x14066104C (EtwTraceObject.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rax

  if ( (xmmword_140382290 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  if ( (*(_BYTE *)(a1 + 25) & 3) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v4 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v4, (ULONG_PTR)&ObpStackTraceLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
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
