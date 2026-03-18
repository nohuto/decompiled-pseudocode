/*
 * XREFs of ObpRegisterObject @ 0x1406AE194
 * Callers:
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlStringCbCopyA @ 0x1400F0684 (RtlStringCbCopyA.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectRefInfo @ 0x1406AD9C8 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x1406ADE50 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x1406E4034 (EtwTraceObject.c)
 */

void __fastcall ObpRegisterObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  char *v10; // r9
  char *PoolWithTag; // rax
  unsigned int v12; // r8d
  char *v13; // rdi
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  char *v16; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_1403D1290 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v6, (ULONG_PTR)&ObpStackTraceLock, v7);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( (ObpTraceFlags & 0x73) == 0
      || (ObpTraceFlags & 0x20) != 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) == 0
      || !ObpIsObjectPoolTagTraced(a1)
      || (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v16) < 0 )
    {
      goto LABEL_18;
    }
    v10 = v16;
    if ( !v16 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x17F8uLL, 0x7452624Fu);
      v16 = PoolWithTag;
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_18:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
        KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
        v14 = KeGetCurrentThread();
        v15 = v14->SpecialApcDisable + 1;
        v14->SpecialApcDisable = v15;
        if ( !v15 && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
          KiCheckForKernelApcDelivery();
        return;
      }
      v12 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      *((_QWORD *)PoolWithTag + 1) = *((_QWORD *)ObpObjectTable + v12);
      *((_QWORD *)ObpObjectTable + v12) = PoolWithTag;
      *((_WORD *)PoolWithTag + 17) = 508;
    }
    ++ObpNumTracedObjects;
    *(_QWORD *)v10 = a1;
    v13 = v16;
    RtlStringCbCopyA(
      v16 + 16,
      0x10uLL,
      (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[11]);
    *((_WORD *)v13 + 16) = 0;
    memset(v13 + 36, 0, 12LL * *((unsigned __int16 *)v13 + 17));
    *(_BYTE *)(a1 + 25) |= 1u;
    if ( (ObpTraceFlags & 0x40) != 0 )
      *(_BYTE *)(a1 + 25) |= 2u;
    goto LABEL_18;
  }
}
