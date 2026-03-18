/*
 * XREFs of ObpPushRefDerefInfo @ 0x1406ADEB0
 * Callers:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x1406AE0D8 (ObpPushStackInfoQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     ObpGetObjectRefInfo @ 0x1406AD9C8 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1406ADAE0 (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x1406AE154 (ObpRefillWorkItemFreeList.c)
 */

void __fastcall ObpPushRefDerefInfo(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r14d
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  unsigned __int16 *v17; // rdi
  unsigned __int16 TraceIndex; // r9
  unsigned __int16 i; // r8
  __int64 v20; // rcx
  __int16 v21; // dx
  __int64 v22; // rcx
  __int16 v23; // ax
  unsigned __int16 *v24; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a4;
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v11, (ULONG_PTR)&ObpStackTraceLock, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v24) >= 0 )
    {
      v17 = v24;
      if ( v24 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v17[16]; i; *(_DWORD *)&v17[2 * v20 + 22] = *(_DWORD *)&v17[6 * i-- + 16] )
          {
            if ( v7 >= *(_DWORD *)&v17[6 * i + 12] )
              break;
            v20 = 3LL * i;
            *(_QWORD *)&v17[2 * v20 + 18] = *(_QWORD *)&v17[6 * i + 12];
          }
          if ( a2 )
            v21 = 0x8000;
          else
            v21 = 0;
          v22 = 3LL * i;
          v17[2 * v22 + 20] = TraceIndex | v21;
          v17[2 * v22 + 21] = a3;
          *(_DWORD *)&v17[6 * i + 18] = v7;
          *(_DWORD *)&v17[2 * v22 + 22] = a6;
          ++v17[16];
        }
      }
    }
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
      ObpRefillWorkItemFreeList();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v15 = KeGetCurrentThread();
    v23 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v23;
    if ( !v23 )
      goto LABEL_26;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v15 = KeGetCurrentThread();
    v16 = v15->SpecialApcDisable + 1;
    v15->SpecialApcDisable = v16;
    if ( !v16 )
    {
LABEL_26:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery();
    }
  }
}
