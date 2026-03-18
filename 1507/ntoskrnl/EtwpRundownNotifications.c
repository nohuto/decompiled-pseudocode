/*
 * XREFs of EtwpRundownNotifications @ 0x1404CEEAC
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, PVOID **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  PVOID ***v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  PVOID **v19; // rcx
  PVOID ***v20; // rax
  PVOID **v21; // r9
  PVOID ****v22; // r8
  PVOID **v23; // r8
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 1080);
  if ( v4 && (v4 & 1) == 0 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (signed __int64 *)(v4 + 8);
    v8 = KeAbPreAcquire(v4 + 8, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 8), v8, v4 + 8, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = (PVOID ***)(v4 + 16);
    if ( *v11 != (PVOID **)v11 )
    {
      v19 = *v11;
      while ( v19 != (PVOID **)v11 )
      {
        v20 = (PVOID ***)v19;
        v19 = (PVOID **)*v19;
        if ( v20[3] == a2 )
        {
          v21 = *v20;
          v22 = (PVOID ****)v20[1];
          if ( (*v20)[1] != (PVOID *)v20 || *v22 != v20 )
            __fastfail(3u);
          *v22 = (PVOID ***)v21;
          v21[1] = (PVOID *)v22;
          v23 = (PVOID **)P[0];
          v20[1] = (PVOID **)P;
          *v20 = v23;
          if ( v23[1] != P )
            __fastfail(3u);
          v23[1] = (PVOID *)v20;
          P[0] = v20;
        }
      }
    }
    _m_prefetchw(v7);
    v12 = *v7;
    v13 = *v7 - 16;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *v7, v14 != _InterlockedCompareExchange64(v7, v13, v12)) )
      ExfReleasePushLock((_QWORD *)(v4 + 8), (__int64)v11);
    KeAbPostRelease(v4 + 8);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    while ( 1 )
    {
      v17 = P[0];
      if ( P[0] == P )
        break;
      v18 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v18 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v18 + 8) = P;
      EtwpUnreferenceDataBlock(v17[2]);
      EtwpReleaseQueueEntry(v17);
    }
  }
}
