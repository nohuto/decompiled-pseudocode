/*
 * XREFs of MmCleanProcessAddressSpace @ 0x14045EDFC
 * Callers:
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 * Callees:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002BE60 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BED0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BFB0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14002C370 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14002C37C (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002C390 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CFD0 (UNLOCK_ADDRESS_SPACE.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     PsReturnProcessQuota @ 0x1400750A4 (PsReturnProcessQuota.c)
 *     MiDeleteVadBitmap @ 0x1400750D0 (MiDeleteVadBitmap.c)
 *     MiCleanCfg @ 0x140075528 (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x140075598 (ExFreeSvmAsid.c)
 *     MiBeginProcessClean @ 0x1400755E8 (MiBeginProcessClean.c)
 *     MiUnlinkWorkingSet @ 0x140101484 (MiUnlinkWorkingSet.c)
 *     MiCleanWorkingSet @ 0x14010159C (MiCleanWorkingSet.c)
 *     MiReturnPartitionResidentAvailable @ 0x1401718E8 (MiReturnPartitionResidentAvailable.c)
 *     MiClearCommitReleaseState @ 0x1401DF84C (MiClearCommitReleaseState.c)
 *     MiWaitForVadDeletion @ 0x1401F7718 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x14042EEF0 (MiUnmapVad.c)
 *     MiCleanEmbryonicProcess @ 0x14045F008 (MiCleanEmbryonicProcess.c)
 *     MiDereferenceSession @ 0x14045F498 (MiDereferenceSession.c)
 *     MiContractWsSwapPageFile @ 0x1404F1C0C (MiContractWsSwapPageFile.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // r12d
  int *ProcessPartition; // rax
  __int64 v5; // rbp
  int *v6; // r15
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  BOOL v10; // ebx
  _QWORD *v11; // rdx
  ULONG_PTR v12; // rbx
  __int64 v13; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)MiCleanEmbryonicProcess() != 1 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    CurrentThread = KeGetCurrentThread();
    v3 = MiBeginProcessClean((__int64)CurrentThread, BugCheckParameter2);
    ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
    v5 = qword_140327F90;
    v6 = ProcessPartition;
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
      v9 = *(_QWORD *)(BugCheckParameter2 + 1568);
      if ( !v9 )
        break;
      MiReferenceVad(*(_QWORD *)(BugCheckParameter2 + 1568));
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
      MiLockVad((__int64)CurrentThread, v9);
      if ( (unsigned int)MiVadDeleted(v9) == 1 )
      {
        MiWaitForVadDeletion(v7);
        MiUnlockAndDereferenceVad((char *)v9);
      }
      else
      {
        v8 = *(_DWORD *)(v9 + 48);
        if ( (v8 & 0x8000) == 0 || (v8 & 7) == 1 )
          MiUnmapVad(v7, 0);
        else
          MiDeleteVad(v7, 0);
      }
    }
    *(_QWORD *)(v5 + 276840568) = &Event;
    v10 = _InterlockedAdd((volatile signed __int32 *)(v5 + 276840552), 0xFFFFFFFF) != 0;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
    if ( v10 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter2 + 1467) & 0xC0) == 0xC0 )
      MiClearCommitReleaseState(BugCheckParameter2 + 1280);
    ExFreeSvmAsid();
    MiCleanCfg();
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    *(_QWORD *)(v5 + 276840568) = 0LL;
    if ( *(_QWORD *)(BugCheckParameter2 + 1032) )
      MiCleanPhysicalProcessPages(BugCheckParameter2);
    MiDeleteVadBitmap(BugCheckParameter2);
    v11 = *(_QWORD **)(BugCheckParameter2 + 1064);
    if ( v11 && *v11 )
      *v11 = 0LL;
    v12 = MiCleanWorkingSet(BugCheckParameter2);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    PsReturnProcessQuota(BugCheckParameter2, v13, v12);
    if ( v6 == MiSystemPartition )
      MiReturnResidentAvailable(v12);
    else
      MiReturnPartitionResidentAvailable((__int64)v6, v12);
    MiUnlinkWorkingSet(BugCheckParameter2 + 1280, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x10000) != 0 )
      MiDereferenceSession();
    if ( v3 )
      MiContractWsSwapPageFile(v6);
  }
}
