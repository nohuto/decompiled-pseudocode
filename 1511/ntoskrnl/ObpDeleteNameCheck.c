/*
 * XREFs of ObpDeleteNameCheck @ 0x1404701A0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x14009C3BC (ObpDereferenceNamedObject.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     ObpDeleteDirectoryEntry @ 0x1404ABE68 (ObpDeleteDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404C4630 (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  signed __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  PVOID v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  __int64 v11; // rtt
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  __int64 v17; // rtt
  signed __int64 v18; // rax
  __int64 v19; // rtt
  signed __int64 v20; // rax
  __int64 v21; // rtt
  __int64 v22[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v23; // [rsp+4Eh] [rbp-2Ah]
  int v24; // [rsp+50h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
    v3 = a1 - v2;
    if ( a1 != v2 )
    {
      v4 = 0LL;
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = KeAbPreAcquire(a1 + 16, 0LL, 0LL);
        v7 = v6;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v6, a1 + 16);
        if ( v7 )
          *(_BYTE *)(v7 + 26) |= 1u;
        v8 = *(PVOID *)v3;
        if ( !*(_QWORD *)v3 || (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
          break;
        ObfReferenceObject(*(PVOID *)v3);
        _m_prefetchw((const void *)(a1 + 16));
        v9 = *(_QWORD *)(a1 + 16);
        v10 = v9 - 16;
        if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v10 = 0LL;
        if ( (v9 & 2) != 0
          || (v11 = *(_QWORD *)(a1 + 16),
              v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v9)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegion();
        v23 = 0;
        v24 = -60876;
        *(_OWORD *)v22 = 0LL;
        ObpLockDirectoryExclusive((__int64)v22, (__int64)v8);
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        v13 = KeAbPreAcquire(a1 + 16, 0LL, 0LL);
        v14 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v13, a1 + 16);
        if ( v14 )
          *(_BYTE *)(v14 + 26) |= 1u;
        if ( *(PVOID *)v3 == v8 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          if ( !*(_DWORD *)(v3 + 24) )
          {
            if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
              ObpDeleteSymbolicLinkName(a1 + 48);
            ObpLookupDirectoryEntryEx(*(PVOID *)v3, 0, (__int64)v22);
            ObpDeleteDirectoryEntry(v22);
          }
          ObpReleaseLookupContext((__int64)v22);
          _m_prefetchw((const void *)(a1 + 16));
          v18 = *(_QWORD *)(a1 + 16);
          if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v4 = v18 - 16;
          if ( (v18 & 2) != 0
            || (v19 = *(_QWORD *)(a1 + 16),
                v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v4, v18)) )
          {
            ExfReleasePushLock((_QWORD *)(a1 + 16));
          }
          KeAbPostRelease(a1 + 16);
          KeLeaveCriticalRegion();
          ObDereferenceObject(v8);
          return;
        }
        ObpReleaseLookupContext((__int64)v22);
        _m_prefetchw((const void *)(a1 + 16));
        v15 = *(_QWORD *)(a1 + 16);
        v16 = v15 - 16;
        if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v16 = 0LL;
        if ( (v15 & 2) != 0
          || (v17 = *(_QWORD *)(a1 + 16),
              v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v16, v15)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegion();
        ObDereferenceObject(v8);
      }
      v20 = *(_QWORD *)(a1 + 16);
      _m_prefetchw((const void *)(a1 + 16));
      if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v20 - 16;
      if ( (v20 & 2) != 0
        || (v21 = *(_QWORD *)(a1 + 16),
            v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v4, v20)) )
      {
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      }
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
    }
  }
}
