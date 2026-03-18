/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x1404CE270
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGuidInfo @ 0x14053DADC (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     EtwpDisallowedGuidAddition @ 0x140551628 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14058D7E4 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 */

char *__fastcall EtwpFindGuidEntryByGuid(_DWORD *a1, int a2)
{
  __int64 v2; // rsi
  void *CurrentServerSilo; // r15
  char *v5; // r14
  char *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rsi
  unsigned __int64 *v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r9
  char *v13; // rbx
  __int64 v14; // rax
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax

  v2 = a2;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  v5 = 0LL;
  v6 = (char *)&EtwpGuidHashTable + 56 * ((*a1 ^ a1[1] ^ a1[2] ^ a1[3]) & 0x3F);
  CurrentThread = KeGetCurrentThread();
  v8 = &v6[16 * v2];
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)(v6 + 48);
  v11 = KeAbPreAcquire((ULONG_PTR)(v6 + 48), 0LL, 0LL, v10);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v11, (ULONG_PTR)v9, v12);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v13 = *(char **)v8;
  if ( *(char **)v8 != v8 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)a1 - *((_QWORD *)v13 + 3);
      if ( *(_QWORD *)a1 == *((_QWORD *)v13 + 3) )
        v14 = *((_QWORD *)a1 + 1) - *((_QWORD *)v13 + 4);
      if ( !v14 && CurrentServerSilo == *((void **)v13 + 47) && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v13) )
        break;
      v13 = *(char **)v13;
      if ( v13 == v8 )
        goto LABEL_14;
    }
    v5 = v13;
  }
LABEL_14:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( CurrentServerSilo )
    PspDereferenceSiloObject(CurrentServerSilo);
  return v5;
}
