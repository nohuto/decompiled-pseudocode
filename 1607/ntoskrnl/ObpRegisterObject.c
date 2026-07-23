/*
 * XREFs of ObpRegisterObject @ 0x1406682E0
 * Callers:
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     RtlStringCbCopyA @ 0x1400C76AC (RtlStringCbCopyA.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectRefInfo @ 0x140667B6C (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x140667FF4 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x1406A1E94 (EtwTraceObject.c)
 */

__int64 __fastcall ObpRegisterObject(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  char *v7; // r9
  char *PoolWithTag; // rax
  unsigned int v9; // r8d
  char *v10; // rdi
  char *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_1403AA2D0 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v4, (ULONG_PTR)&ObpStackTraceLock);
    if ( v6 )
      v6[26] |= 1u;
    if ( (ObpTraceFlags & 0x73) == 0
      || (ObpTraceFlags & 0x20) != 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) == 0
      || !ObpIsObjectPoolTagTraced(a1)
      || (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v11) < 0 )
    {
      goto LABEL_18;
    }
    v7 = v11;
    if ( !v11 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x17F8uLL, 0x7452624Fu);
      v11 = PoolWithTag;
      v7 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_18:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
        KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
        return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v9 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      *((_QWORD *)PoolWithTag + 1) = *((_QWORD *)ObpObjectTable + v9);
      *((_QWORD *)ObpObjectTable + v9) = PoolWithTag;
      *((_WORD *)PoolWithTag + 17) = 508;
    }
    ++ObpNumTracedObjects;
    *(_QWORD *)v7 = a1;
    v10 = v11;
    RtlStringCbCopyA(
      v11 + 16,
      0x10uLL,
      (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[12]);
    *((_WORD *)v10 + 16) = 0;
    memset(v10 + 36, 0, 12LL * *((unsigned __int16 *)v10 + 17));
    *(_BYTE *)(a1 + 25) |= 1u;
    if ( (ObpTraceFlags & 0x40) != 0 )
      *(_BYTE *)(a1 + 25) |= 2u;
    goto LABEL_18;
  }
  return result;
}
