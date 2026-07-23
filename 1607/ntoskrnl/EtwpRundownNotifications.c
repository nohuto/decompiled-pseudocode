/*
 * XREFs of EtwpRundownNotifications @ 0x14040C788
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x14040D8A0 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  signed __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rsi
  _QWORD **v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // r8
  _QWORD *v20; // r8
  __int64 v21; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1080);
  v3 = 0LL;
  if ( v2 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (signed __int64 *)(v2 + 16);
    v7 = (_BYTE *)KeAbPreAcquire(v2 + 16, 0LL, 0);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 16), v7, v2 + 16);
    if ( v8 )
      v8[26] |= 1u;
    v9 = (_QWORD **)(v2 + 24);
    if ( *v9 != v9 )
    {
      v16 = *v9;
      while ( v16 != v9 )
      {
        v17 = v16;
        v16 = (_QWORD *)*v16;
        if ( v17[3] == a2 )
        {
          v18 = *v17;
          v19 = (_QWORD *)v17[1];
          if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          v20 = P[0];
          if ( *((PVOID **)P[0] + 1) != P )
            __fastfail(3u);
          *v17 = P[0];
          v17[1] = P;
          v20[1] = v17;
          P[0] = v17;
        }
      }
    }
    _m_prefetchw(v6);
    v10 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v10 - 16;
    if ( (v10 & 2) != 0 || (v11 = *v6, v11 != _InterlockedCompareExchange64(v6, v3, v10)) )
      ExfReleasePushLock((_QWORD *)(v2 + 16));
    KeAbPostRelease(v2 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    while ( 1 )
    {
      v15 = P[0];
      if ( P[0] == P )
        break;
      v21 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v21 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v21 + 8) = P;
      EtwpUnreferenceDataBlock(v15[2]);
      EtwpReleaseQueueEntry(v15);
    }
  }
}
