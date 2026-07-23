/*
 * XREFs of EtwpTrackProviderBinary @ 0x1404CE898
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(__int64 a1, HANDLE *a2)
{
  signed __int64 v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // r14
  unsigned __int64 *v8; // rbp
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 *v14; // rdi
  signed __int64 v15; // rax
  __int64 v16; // rtt
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int *v21; // r15
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0LL;
  result = ObReferenceObjectByHandle(*a2, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = Object;
    v8 = (unsigned __int64 *)(*((_QWORD *)Object + 4) + 384LL);
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      v10[26] |= 1u;
    *(_QWORD *)(v7[4] + 392LL) = KeGetCurrentThread();
    if ( (*((_BYTE *)Object + 98) & 0x20) != 0 )
    {
      v5 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x20u);
      v11 = 0LL;
      v12 = 8LL;
      do
      {
        v13 = v7[4];
        if ( *(_DWORD *)(v13 + v11 + 112) )
        {
          v20 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v13 + v11 + 118), 0);
          v21 = (unsigned int *)v20;
          if ( v20 )
          {
            EtwpProviderArrivalCallback(v20, 1, (__int64)Object);
            EtwpReleaseLoggerContext(v21, 0);
          }
        }
        v11 += 32LL;
        --v12;
      }
      while ( v12 );
    }
    *(_QWORD *)(v7[4] + 392LL) = 0LL;
    v14 = (__int64 *)(v7[4] + 384LL);
    _m_prefetchw(v14);
    v15 = *v14;
    if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v15 - 16;
    if ( (v15 & 2) != 0 || (v16 = *v14, v16 != _InterlockedCompareExchange64(v14, v3, v15)) )
      ExfReleasePushLock(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
