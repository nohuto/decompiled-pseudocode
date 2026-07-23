/*
 * XREFs of ObpPushStackInfo @ 0x1401E6504
 * Callers:
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ExTimerRundown @ 0x14002D6A8 (ExTimerRundown.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140079DFC (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IopQueueIrpToFileObject @ 0x14008F8D0 (IopQueueIrpToFileObject.c)
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14009E120 (ObReferenceObjectByPointerWithTag.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     IopDropIrp @ 0x1400DF7D8 (IopDropIrp.c)
 *     ObDereferenceObjectEx @ 0x1400E2764 (ObDereferenceObjectEx.c)
 *     NtCancelTimer @ 0x1400EC6FC (NtCancelTimer.c)
 *     IopQueueWorkItemProlog @ 0x140101A80 (IopQueueWorkItemProlog.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1404369A0 (ObReferenceFileObjectForWrite.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x140028250 (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x1401E6408 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x14020DECC (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x14062FE84 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v8; // ax
  USHORT v9; // ax
  BOOL CanThreadFault; // eax
  int v11; // r9d
  int v12; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  if ( (xmmword_140382290 & 0x80u) != 0LL )
  {
    v8 = 4402;
    if ( !a2 )
      v8 = 4403;
    EtwTraceObjectOperation(v8, a1);
  }
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    if ( (unsigned __int8)KeAreInterruptsEnabled() )
    {
      if ( KeGetCurrentIrql() <= 2u )
      {
        v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
        if ( v9 )
        {
          if ( v9 < 0x10u )
            memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
          _InterlockedExchangeAdd(&ObpStackSequence, 1u);
          CanThreadFault = MmCanThreadFault();
          LOBYTE(v12) = a2;
          if ( CanThreadFault )
            ObpPushRefDerefInfo(a1, v12, a3, v11, BackTrace, a4);
          else
            ObpDeferPushRefDerefInfo(a1, a2, a3, v11, (_SLIST_ENTRY *)BackTrace, a4);
        }
      }
    }
  }
}
