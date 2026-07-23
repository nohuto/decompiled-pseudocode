/*
 * XREFs of ObpDeleteNameCheck @ 0x1404054E0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x14000BBF4 (ObpDereferenceNamedObject.c)
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObMakeTemporaryObject @ 0x1404CD494 (ObMakeTemporaryObject.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 *     ObpDeleteDirectoryEntry @ 0x1404B3390 (ObpDeleteDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404D1CA4 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpDeleteNameCheck(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  signed __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rbp
  PVOID v8; // rbp
  signed __int64 v9; // rax
  __int64 v10; // rtt
  signed __int64 v11; // rax
  __int64 v12; // rtt
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  __int64 v15; // rtt
  struct _KTHREAD *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // r15
  signed __int64 v19; // rax
  __int64 v20; // rtt
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  __int64 v23; // rtt
  __int128 v24; // [rsp+30h] [rbp-48h] BYREF
  __int16 v25; // [rsp+4Eh] [rbp-2Ah]
  int v26; // [rsp+50h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
    return;
  v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3];
  v3 = a1 - v2;
  if ( a1 == v2 )
    return;
  v4 = 0LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (_BYTE *)KeAbPreAcquire(a1 + 16, 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v6, a1 + 16);
    if ( v7 )
      v7[26] |= 1u;
    v8 = *(PVOID *)v3;
    if ( !*(_QWORD *)v3 )
    {
      _m_prefetchw((const void *)(a1 + 16));
      v11 = *(_QWORD *)(a1 + 16);
      if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v11 - 16;
      if ( (v11 & 2) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        if ( v12 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v4, v11) )
          goto LABEL_15;
      }
LABEL_21:
      ExfReleasePushLock((_QWORD *)(a1 + 16));
LABEL_15:
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
      return;
    }
    if ( (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
    {
      _m_prefetchw((const void *)(a1 + 16));
      v9 = *(_QWORD *)(a1 + 16);
      if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v9 - 16;
      if ( (v9 & 2) == 0 )
      {
        v10 = *(_QWORD *)(a1 + 16);
        if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v4, v9) )
          goto LABEL_15;
      }
      goto LABEL_21;
    }
    ObfReferenceObject(*(PVOID *)v3);
    _m_prefetchw((const void *)(a1 + 16));
    v13 = *(_QWORD *)(a1 + 16);
    if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v14 = v13 - 16;
    else
      v14 = 0LL;
    if ( (v13 & 2) != 0
      || (v15 = *(_QWORD *)(a1 + 16),
          v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v14, v13)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 + 16));
    }
    KeAbPostRelease(a1 + 16);
    KeLeaveCriticalRegion();
    v25 = 0;
    v26 = -60876;
    v24 = 0LL;
    ObpLockDirectoryExclusive((__int64)&v24, (__int64)v8);
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (_BYTE *)KeAbPreAcquire(a1 + 16, 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v17, a1 + 16);
    if ( v18 )
      v18[26] |= 1u;
    if ( *(PVOID *)v3 == v8 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
      break;
    ObpReleaseLookupContext((__int64)&v24);
    _m_prefetchw((const void *)(a1 + 16));
    v21 = *(_QWORD *)(a1 + 16);
    v22 = v21 - 16;
    if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (v21 & 2) != 0
      || (v23 = *(_QWORD *)(a1 + 16),
          v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v22, v21)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 + 16));
    }
    KeAbPostRelease(a1 + 16);
    KeLeaveCriticalRegion();
    PsDereferenceSiloContext(v8);
  }
  if ( !*(_DWORD *)(v3 + 24) )
  {
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
      ObpDeleteSymbolicLinkName(a1 + 48);
    ObpLookupDirectoryEntryEx(*(_QWORD *)v3, v3 + 8, 0, 0, 0, (__int64)&v24);
    ObpDeleteDirectoryEntry(&v24);
  }
  ObpReleaseLookupContext((__int64)&v24);
  _m_prefetchw((const void *)(a1 + 16));
  v19 = *(_QWORD *)(a1 + 16);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v19 - 16;
  if ( (v19 & 2) != 0
    || (v20 = *(_QWORD *)(a1 + 16), v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v4, v19)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 16));
  }
  KeAbPostRelease(a1 + 16);
  KeLeaveCriticalRegion();
  PsDereferenceSiloContext(v8);
}
