/*
 * XREFs of EtwpAddGuidEntry @ 0x1404CED18
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PsEqualCurrentServerSilo @ 0x140079760 (PsEqualCurrentServerSilo.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1404B68D8 (EtwpFreeGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1404CEEAC (EtwpAllocGuidEntry.c)
 */

__int64 __fastcall EtwpAddGuidEntry(_DWORD *a1, int a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v5; // r14
  int v6; // edi
  __int64 SiloDriverState; // rax
  __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  __int64 *v11; // r15
  unsigned __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *i; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v2 = a2;
  result = EtwpAllocGuidEntry();
  v5 = result;
  if ( result )
  {
    v6 = *a1 ^ a1[1] ^ a1[2] ^ a1[3];
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v8 = SiloDriverState + 1424;
    if ( SiloDriverState )
      PsDereferenceMonitorContextServerSilo(SiloDriverState);
    CurrentThread = KeGetCurrentThread();
    v10 = v8 + 56LL * (v6 & 0x3F);
    v11 = (__int64 *)(v10 + 16 * v2);
    --CurrentThread->KernelApcDisable;
    v12 = (unsigned __int64 *)(v10 + 48);
    v13 = KeAbPreAcquire(v10 + 48, 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v13, (ULONG_PTR)v12);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    for ( i = (__int64 *)*v11; i != v11; i = (__int64 *)*i )
    {
      v16 = *(_QWORD *)a1 - i[3];
      if ( *(_QWORD *)a1 == i[3] )
        v16 = *((_QWORD *)a1 + 1) - i[4];
      if ( !v16 && EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v12);
          KeAbPostRelease((ULONG_PTR)v12);
          KeLeaveCriticalRegion();
          _InterlockedAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL);
          EtwpFreeGuidEntry((_QWORD *)v5);
          return (__int64)i;
        }
        break;
      }
    }
    *(_BYTE *)(v5 + 376) = PsEqualCurrentServerSilo(0LL);
    v17 = (_QWORD *)*v11;
    *(_QWORD *)v5 = *v11;
    *(_QWORD *)(v5 + 8) = v11;
    if ( (__int64 *)v17[1] != v11 )
      __fastfail(3u);
    v17[1] = v5;
    i = (__int64 *)v5;
    *v11 = v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    return (__int64)i;
  }
  return result;
}
