/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x140572F94
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x140491A90 (EtwpCalculateUpdateNotification.c)
 *     EtwpBuildNotificationPacket @ 0x1404928BC (EtwpBuildNotificationPacket.c)
 *     EtwpIsGuidAllowed @ 0x1404929F4 (EtwpIsGuidAllowed.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  signed __int64 v4; // rbx
  _QWORD *result; // rax
  __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 *v8; // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  _OWORD *v11; // rdi
  __int64 *v12; // rdi
  signed __int64 v13; // rax
  unsigned __int64 v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  unsigned __int8 v19; // r8
  __int64 v20; // rdx
  unsigned __int8 v21; // cl
  __int64 v22; // rax
  unsigned __int8 v23; // dl
  char v24; // r9
  __int64 v25; // r8
  _OWORD *v26; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 904), a1, 0);
  v6 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = result + 48;
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(result + 48), 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      v10[26] |= 1u;
    v6[49] = (__int64)KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v6, 0LL, 0, &v26);
    v11 = v26;
    *(_DWORD *)v26 = 3;
    *(_OWORD *)((char *)v11 + 40) = *(_OWORD *)a1;
    *((_DWORD *)v11 + 9) = PsGetCurrentThreadProcessId();
    if ( !EtwpIsGuidAllowed(a2, a1) )
    {
      v12 = (__int64 *)v6[5];
LABEL_8:
      while ( v12 != v6 + 5 )
      {
        v18 = (__int64)v12;
        v12 = (__int64 *)*v12;
        v19 = *(_BYTE *)(v18 + 101);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v18 + 40);
          v21 = 0;
          while ( 1 )
          {
            v22 = 32LL * v21;
            if ( *(_DWORD *)(v22 + v20 + 112) )
            {
              if ( *(unsigned __int16 *)(v22 + v20 + 118) == *(_DWORD *)a2 )
                break;
            }
            if ( ++v21 >= 8u )
              goto LABEL_8;
          }
          v23 = 1 << v21;
          if ( 1 << v21 && (v19 & v23) != 0 )
          {
            v24 = *(_BYTE *)(v18 + 101);
            *(_BYTE *)(v18 + 101) = v19 & ~v23;
            EtwpCalculateUpdateNotification(v18, v23, v19, v24, 2, 0, &v26);
            EtwpSendDataBlock(v18, (__int64)v26, v25);
          }
        }
      }
    }
    v6[49] = 0LL;
    _m_prefetchw(v8);
    v13 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v13 - 16;
    if ( (v13 & 2) != 0 || (v14 = *v8, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v4, v13)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    return (_QWORD *)EtwpUnreferenceGuidEntry(v6);
  }
  return result;
}
