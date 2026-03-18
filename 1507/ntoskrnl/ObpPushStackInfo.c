/*
 * XREFs of ObpPushStackInfo @ 0x14017E550
 * Callers:
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     ObDereferenceObjectEx @ 0x14000C4C0 (ObDereferenceObjectEx.c)
 *     IopQueueWorkItemProlog @ 0x14000DA70 (IopQueueWorkItemProlog.c)
 *     ExTimerRundown @ 0x14000E370 (ExTimerRundown.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140014FB0 (ObReferenceObjectByPointerWithTag.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     IoGetAttachedDeviceReference @ 0x1400CF130 (IoGetAttachedDeviceReference.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     IopQueueIrpToFileObject @ 0x140107B00 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     NtCancelTimer @ 0x140129E6C (NtCancelTimer.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424A60 (ObpReferenceProcessObjectByHandle.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x14001F4C0 (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140233478 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x14025D138 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x1406ADEB0 (ObpPushRefDerefInfo.c)
 */

__int64 __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v8; // ax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOL CanThreadFault; // eax
  int v13; // r9d
  int v14; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  if ( (xmmword_1403D1290 & 0x80u) != 0LL )
  {
    v8 = 4402;
    if ( !a2 )
      v8 = 4403;
    EtwTraceObjectOperation(v8, a1);
  }
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    result = KeAreInterruptsEnabled();
    if ( (_BYTE)result )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 2u )
      {
        result = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
        if ( (_WORD)result )
        {
          if ( (unsigned __int16)result < 0x10u )
            memset(&BackTrace[(unsigned __int16)result], 0, 8LL * (16 - (unsigned int)(unsigned __int16)result));
          _InterlockedExchangeAdd(&ObpStackSequence, 1u);
          CanThreadFault = MmCanThreadFault(v11, v10);
          LOBYTE(v14) = a2;
          if ( CanThreadFault )
            return ObpPushRefDerefInfo(a1, v14, a3, v13, BackTrace, a4);
          else
            return ObpDeferPushRefDerefInfo(a1, v14, a3, v13, (__int64)BackTrace, a4);
        }
      }
    }
  }
  return result;
}
