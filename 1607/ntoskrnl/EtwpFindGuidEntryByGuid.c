/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x14040E490
 * Callers:
 *     NtTraceEvent @ 0x1400D5560 (NtTraceEvent.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040E5E0 (EtwpRegisterUMGuid.c)
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x1404EA104 (EtwpGetTraceGuidInfo.c)
 *     EtwpDisallowedGuidAddition @ 0x140572A54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FB14 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A0190 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     EtwpReferenceGuidEntry @ 0x14040E5A0 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, int a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  unsigned __int64 *v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rax

  v4 = 0LL;
  v5 = 56LL * ((*a2 ^ a2[1] ^ a2[3] ^ a2[2]) & 0x3F) + a1 + 1424;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(v5 + 48);
  v9 = KeAbPreAcquire(v5 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, v9, (ULONG_PTR)v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *v7;
  if ( *v7 != v7 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)a2 - v10[3];
      if ( *(_QWORD *)a2 == v10[3] )
        v11 = *((_QWORD *)a2 + 1) - v10[4];
      if ( !v11 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v10) )
        break;
      v10 = (_QWORD *)*v10;
      if ( v10 == v7 )
        goto LABEL_13;
    }
    v4 = v10;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v4;
}
