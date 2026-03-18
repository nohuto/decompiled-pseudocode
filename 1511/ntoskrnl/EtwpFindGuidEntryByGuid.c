/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x140435E90
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpGetTraceGuidInfo @ 0x1404BF9D8 (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     EtwpGetTraceGroupInfo @ 0x1406602C4 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(_DWORD *a1, int a2)
{
  _QWORD *v3; // r14
  int v4; // ebx
  __int64 v5; // rsi
  __int64 SiloDriverState; // rax
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  _QWORD **v10; // rsi
  unsigned __int64 *v11; // rbp
  __int64 v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // rax

  v3 = 0LL;
  v4 = *a1 ^ a1[1] ^ a1[2] ^ a1[3];
  v5 = a2;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v7 = SiloDriverState + 1424;
  if ( SiloDriverState )
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
  CurrentThread = KeGetCurrentThread();
  v9 = v7 + 56LL * (v4 & 0x3F);
  v10 = (_QWORD **)(v9 + 16 * v5);
  --CurrentThread->KernelApcDisable;
  v11 = (unsigned __int64 *)(v9 + 48);
  v12 = KeAbPreAcquire(v9 + 48, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *v10;
  if ( *v10 != v10 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)a1 - v13[3];
      if ( *(_QWORD *)a1 == v13[3] )
        v14 = *((_QWORD *)a1 + 1) - v13[4];
      if ( !v14 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v13) )
        break;
      v13 = (_QWORD *)*v13;
      if ( v13 == v10 )
        goto LABEL_15;
    }
    v3 = v13;
  }
LABEL_15:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KeLeaveCriticalRegion();
  return v3;
}
