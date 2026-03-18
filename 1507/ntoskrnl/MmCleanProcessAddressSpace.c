/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1404B2FA4
 * Callers:
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     MiDeleteVadBitmap @ 0x1400087D0 (MiDeleteVadBitmap.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiBeginProcessClean @ 0x1400DDC48 (MiBeginProcessClean.c)
 *     PsReturnProcessQuota @ 0x1400EE610 (PsReturnProcessQuota.c)
 *     MiCleanWorkingSet @ 0x1401088D4 (MiCleanWorkingSet.c)
 *     MiUnlinkWorkingSet @ 0x140124DCC (MiUnlinkWorkingSet.c)
 *     MiCleanCfg @ 0x14012851C (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x14012A494 (ExFreeSvmAsid.c)
 *     MiReturnPartitionResidentAvailable @ 0x140195D78 (MiReturnPartitionResidentAvailable.c)
 *     MiClearCommitReleaseState @ 0x14020EF3C (MiClearCommitReleaseState.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     MiContractWsSwapPageFile @ 0x1404FB15C (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x14054D8B4 (MiDereferenceSession.c)
 *     MiCleanPhysicalProcessPages @ 0x1406A5EEC (MiCleanPhysicalProcessPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  __int16 *ProcessPartition; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  BOOL v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  ULONG_PTR v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int16 *v27; // rax
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  bool v30; // zf
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(BugCheckParameter2 + 772);
  if ( (v2 & 0x20) != 0 && (*(_BYTE *)(BugCheckParameter2 + 1491) & 0xC0) == 0xC0 )
  {
LABEL_5:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    ExFreeSvmAsid();
    CurrentThread = KeGetCurrentThread();
    v7 = MiBeginProcessClean((__int64)CurrentThread, BugCheckParameter2, v5, v6);
    ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2, v9, v10);
      if ( !*(_QWORD *)(BugCheckParameter2 + 1544) )
        break;
      v11 = *(_QWORD *)(BugCheckParameter2 + 1544);
      MiReferenceVad(v11);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
      MiLockVad((__int64)CurrentThread, v11, v12, v13);
      if ( (unsigned int)MiVadDeleted(v11) == 1 )
      {
        MiWaitForVadDeletion(v14);
        MiUnlockAndDereferenceVad((char *)v11);
      }
      else
      {
        v15 = *(_DWORD *)(v11 + 48);
        if ( (v15 & 0x8000) == 0 || (v15 & 7) == 1 )
          MiUnmapVad(v14, 0LL);
        else
          MiDeleteVad(v14, 0);
      }
    }
    MEMORY[0xFFFFF58010804228] = &Event;
    v16 = _InterlockedAdd((volatile signed __int32 *)0xFFFFF58010804218LL, 0xFFFFFFFF) != 0;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
    if ( v16 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter2 + 1491) & 0xC0) == 0xC0 )
      MiClearCommitReleaseState(BugCheckParameter2 + 1272);
    MiCleanCfg(v18, v17, v19, v20);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2, v21, v22);
    MEMORY[0xFFFFF58010804228] = 0LL;
    if ( *(_QWORD *)(BugCheckParameter2 + 1032) )
      MiCleanPhysicalProcessPages(BugCheckParameter2);
    MiDeleteVadBitmap(BugCheckParameter2);
    if ( *(_QWORD *)(BugCheckParameter2 + 1064) )
      *(_QWORD *)(BugCheckParameter2 + 1064) = 0LL;
    v24 = MiCleanWorkingSet(BugCheckParameter2, v23);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    PsReturnProcessQuota(BugCheckParameter2, v25, v24);
    if ( ProcessPartition == MiSystemPartition )
    {
      MiReturnResidentAvailable(v24);
      _InterlockedExchangeAdd64(&qword_14034F800, v24);
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v24);
    }
    MiUnlinkWorkingSet(BugCheckParameter2 + 1272, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x10000) != 0 )
      MiDereferenceSession();
    if ( v7 )
      MiContractWsSwapPageFile(ProcessPartition);
    return;
  }
  if ( (v2 & 0x20) != 0 || (v3 = (v2 >> 10) & 3, v3 <= 1) )
  {
    v30 = (v2 & 0x10000) == 0;
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_5;
    MiChargeWsles(BugCheckParameter2 + 1272, 8LL - *(_QWORD *)(BugCheckParameter2 + 1368), 0);
    PsReturnProcessQuota(BugCheckParameter2, v26, *(_QWORD *)(BugCheckParameter2 + 1368) - 8LL);
    v27 = MiGetProcessPartition(BugCheckParameter2);
    if ( v27 == MiSystemPartition )
    {
      MiReturnResidentAvailable(*(_QWORD *)(BugCheckParameter2 + 1368) - 8LL);
      _InterlockedExchangeAdd64(&qword_14034F808, *(_QWORD *)(BugCheckParameter2 + 1368) - 8LL);
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)v27, *(_QWORD *)(BugCheckParameter2 + 1368) - 8LL);
    }
    v28 = *(_DWORD *)(BugCheckParameter2 + 772);
    do
    {
      v29 = v28;
      v28 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(BugCheckParameter2 + 772),
              v28 & 0xFFFFF3FF | 0x400,
              v28);
    }
    while ( v29 != v28 );
    v30 = (*(_DWORD *)(BugCheckParameter2 + 772) & 0x10000) == 0;
  }
  if ( !v30 )
    MiDereferenceSession();
}
