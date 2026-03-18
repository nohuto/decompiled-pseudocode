/*
 * XREFs of EtwpRundownNotifications @ 0x140438E14
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReleaseQueueEntry @ 0x1404CE5F0 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, PVOID **a2)
{
  __int64 v2; // r14
  signed __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  PVOID ***v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  _QWORD *v12; // rbx
  __int64 v13; // rax
  PVOID **v14; // rcx
  PVOID ***v15; // rax
  PVOID **v16; // r9
  PVOID ****v17; // r8
  PVOID **v18; // r8
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1080);
  v3 = 0LL;
  if ( v2 && (v2 & 1) == 0 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (signed __int64 *)(v2 + 8);
    v7 = KeAbPreAcquire(v2 + 8, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 8), v7, v2 + 8);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = (PVOID ***)(v2 + 16);
    if ( *v9 != (PVOID **)v9 )
    {
      v14 = *v9;
      while ( v14 != (PVOID **)v9 )
      {
        v15 = (PVOID ***)v14;
        v14 = (PVOID **)*v14;
        if ( v15[3] == a2 )
        {
          v16 = *v15;
          v17 = (PVOID ****)v15[1];
          if ( (*v15)[1] != (PVOID *)v15 || *v17 != v15 )
            __fastfail(3u);
          *v17 = (PVOID ***)v16;
          v16[1] = (PVOID *)v17;
          v18 = (PVOID **)P[0];
          v15[1] = (PVOID **)P;
          *v15 = v18;
          if ( v18[1] != P )
            __fastfail(3u);
          v18[1] = (PVOID *)v15;
          P[0] = v15;
        }
      }
    }
    _m_prefetchw(v6);
    v10 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v10 - 16;
    if ( (v10 & 2) != 0 || (v11 = *v6, v11 != _InterlockedCompareExchange64(v6, v3, v10)) )
      ExfReleasePushLock((_QWORD *)(v2 + 8));
    KeAbPostRelease(v2 + 8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      v13 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      EtwpUnreferenceDataBlock(v12[2]);
      EtwpReleaseQueueEntry(v12);
    }
  }
}
