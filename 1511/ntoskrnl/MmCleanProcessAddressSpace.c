/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1403E7980
 * Callers:
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 * Callees:
 *     MiBeginProcessClean @ 0x14001BE64 (MiBeginProcessClean.c)
 *     ExFreeSvmAsid @ 0x14001BF7C (ExFreeSvmAsid.c)
 *     MiUnlinkWorkingSet @ 0x14001C13C (MiUnlinkWorkingSet.c)
 *     PsReturnProcessQuota @ 0x14001C2A4 (PsReturnProcessQuota.c)
 *     MiCleanWorkingSet @ 0x14001C2D0 (MiCleanWorkingSet.c)
 *     MiDeleteVadBitmap @ 0x14001C358 (MiDeleteVadBitmap.c)
 *     MiCleanCfg @ 0x14001F518 (MiCleanCfg.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     MiReturnPartitionResidentAvailable @ 0x140166F8C (MiReturnPartitionResidentAvailable.c)
 *     MiClearCommitReleaseState @ 0x1401CF714 (MiClearCommitReleaseState.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 *     MiContractWsSwapPageFile @ 0x1403B592C (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x1403E7BF8 (MiDereferenceSession.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiCleanPhysicalProcessPages @ 0x140626B7C (MiCleanPhysicalProcessPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  struct _KTHREAD *CurrentThread; // rsi
  BOOL v5; // r14d
  int *ProcessPartition; // rbp
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  BOOL v11; // ebx
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int *v16; // rax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  bool v19; // zf
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(BugCheckParameter2 + 772);
  if ( (v2 & 0x20) != 0 && (*(_BYTE *)(BugCheckParameter2 + 1499) & 0xC0) == 0xC0 )
  {
LABEL_5:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    ExFreeSvmAsid();
    CurrentThread = KeGetCurrentThread();
    v5 = MiBeginProcessClean((__int64)CurrentThread, BugCheckParameter2);
    ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
      v7 = *(_DWORD **)(BugCheckParameter2 + 1552);
      if ( !v7 )
        break;
      MiReferenceVad(*(_QWORD *)(BugCheckParameter2 + 1552));
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
      MiLockVad((__int64)CurrentThread, (__int64)v7);
      if ( MiVadDeleted((__int64)v7) )
      {
        MiWaitForVadDeletion(v8);
        MiUnlockAndDereferenceVad(v7);
      }
      else
      {
        v10 = v7[12];
        if ( (v10 & 0x8000) == 0 || (v10 & 7) == 1 )
          MiUnmapVad(v8, 0LL);
        else
          MiDeleteVad(v8, 0, v9);
      }
    }
    MEMORY[0xFFFFF58010804270] = &Event;
    v11 = _InterlockedAdd((volatile signed __int32 *)0xFFFFF58010804260LL, 0xFFFFFFFF) != 0;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter2);
    if ( v11 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter2 + 1499) & 0xC0) == 0xC0 )
      MiClearCommitReleaseState(BugCheckParameter2 + 1280);
    MiCleanCfg();
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    MEMORY[0xFFFFF58010804270] = 0LL;
    if ( *(_QWORD *)(BugCheckParameter2 + 1032) )
      MiCleanPhysicalProcessPages(BugCheckParameter2);
    MiDeleteVadBitmap(BugCheckParameter2);
    v12 = *(_QWORD **)(BugCheckParameter2 + 1064);
    if ( v12 && *v12 )
      *v12 = 0LL;
    v13 = MiCleanWorkingSet(BugCheckParameter2);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v14, v13);
    if ( ProcessPartition == MiSystemPartition )
    {
      MiReturnResidentAvailable(v13);
      _InterlockedExchangeAdd64(&qword_1402FF380, v13);
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v13);
    }
    MiUnlinkWorkingSet(BugCheckParameter2 + 1280, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x10000) != 0 )
      MiDereferenceSession();
    if ( v5 )
      MiContractWsSwapPageFile((__int64)ProcessPartition);
    return;
  }
  if ( (v2 & 0x20) != 0 || (v3 = (v2 >> 10) & 3, v3 <= 1) )
  {
    v19 = (v2 & 0x10000) == 0;
  }
  else
  {
    if ( v3 != 2 )
      goto LABEL_5;
    MiChargeWsles(BugCheckParameter2 + 1280, 8LL - *(_QWORD *)(BugCheckParameter2 + 1376), 0LL);
    PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v15, *(_QWORD *)(BugCheckParameter2 + 1376) - 8LL);
    v16 = MiGetProcessPartition(BugCheckParameter2);
    if ( v16 == MiSystemPartition )
    {
      MiReturnResidentAvailable(*(_QWORD *)(BugCheckParameter2 + 1376) - 8LL);
      _InterlockedExchangeAdd64(&qword_1402FF388, *(_QWORD *)(BugCheckParameter2 + 1376) - 8LL);
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)v16, *(_QWORD *)(BugCheckParameter2 + 1376) - 8LL);
    }
    v17 = *(_DWORD *)(BugCheckParameter2 + 772);
    do
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(BugCheckParameter2 + 772),
              v17 & 0xFFFFF3FF | 0x400,
              v17);
    }
    while ( v18 != v17 );
    v19 = (*(_DWORD *)(BugCheckParameter2 + 772) & 0x10000) == 0;
  }
  if ( !v19 )
    MiDereferenceSession();
}
