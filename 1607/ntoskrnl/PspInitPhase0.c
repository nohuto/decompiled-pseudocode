/*
 * XREFs of PspInitPhase0 @ 0x14079E090
 * Callers:
 *     PsInitSystem @ 0x140793634 (PsInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14013C944 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     strcpy_s @ 0x1401531F4 (strcpy_s.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExCreateHandleTable @ 0x1404ACEEC (ExCreateHandleTable.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     PspValidateMitigationOptions @ 0x1404CE53C (PspValidateMitigationOptions.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PsChangeQuantumTable @ 0x1405455D4 (PsChangeQuantumTable.c)
 *     RtlRunOnceInitialize @ 0x140551E08 (RtlRunOnceInitialize.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 *     PspInitializeSiloStructures @ 0x14079DE5C (PspInitializeSiloStructures.c)
 *     PspIumInitialize @ 0x1407AA3D0 (PspIumInitialize.c)
 *     PspInitializeJobStructures @ 0x1407BB73C (PspInitializeJobStructures.c)
 */

bool __fastcall PspInitPhase0(PVOID StartContext)
{
  __int64 v2; // r9
  _RTL_RUN_ONCE *v3; // rcx
  _RTL_RUN_ONCE *v4; // rcx
  __int64 v5; // rdx
  _RTL_RUN_ONCE *v6; // rcx
  _RTL_RUN_ONCE *v7; // rcx
  __int64 v8; // rdx
  _RTL_RUN_ONCE *v9; // rcx
  _RTL_RUN_ONCE *v10; // rcx
  __int64 v11; // rax
  _KPROCESS *Process; // rcx
  char v13; // bl
  char v14; // bl
  int v15; // ebx
  __int64 *v16; // rdi
  void *v17; // rcx
  NTSTATUS v18; // eax
  _QWORD *v19; // rcx
  _QWORD v21[16]; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp+17h] BYREF
  PVOID Object; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+130h] [rbp+77h] BYREF

  PspMinimumWorkingSet += 30LL;
  PspMaximumWorkingSet += 300LL;
  if ( (int)PspValidateMitigationOptions(PspSystemMitigationOptions, 0LL) < 0 )
  {
    v2 = 0LL;
    PspSystemMitigationOptions = 0LL;
  }
  if ( (v2 & 0x30000000) != 0 )
    PspSystemMitigationOptions = v2 & 0xFFFFFFFFCFFFFFFFuLL;
  v3 = &PspCreateThreadNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v3);
    v3 = v4 + 1;
  }
  while ( v5 != 1 );
  v6 = &PspCreateProcessNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v6);
    v6 = v7 + 1;
  }
  while ( v8 != 1 );
  v9 = &PspLoadImageNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v9);
    v9 = v10 + 1;
  }
  while ( v11 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_1403015E8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  Process[1].Header.WaitListHead.Flink = 0LL;
  Process->KernelTime = 0;
  memset(v21, 0, 0x78uLL);
  LOWORD(v21[0]) = 120;
  v13 = BYTE2(v21[0]) | 8;
  *(_QWORD *)((char *)&v21[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v21 + 4) = 2048LL;
  v21[9] = PspJobDelete;
  HIDWORD(v21[5]) = 1544;
  v21[8] = PspJobClose;
  HIDWORD(v21[3]) = 2031647;
  BYTE2(v21[0]) = v13 & 0x7F;
  *(_OWORD *)((char *)&v21[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v21, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v21[1]) = 176;
    v14 = BYTE2(v21[0]) | 0x42;
    RtlInitUnicodeString(&DestinationString, L"Process");
    HIDWORD(v21[0]) = 32;
    v21[9] = PspProcessDelete;
    v21[5] = 0x7D000001000LL;
    v21[7] = PspProcessOpen;
    v21[8] = PspProcessClose;
    HIDWORD(v21[3]) = 0x1FFFFF;
    LODWORD(v21[4]) = 1052672;
    *(_OWORD *)((char *)&v21[1] + 4) = PspProcessMapping;
    BYTE2(v21[0]) = v14 | 0x80;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v21, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v21[0]) |= 0x80u;
      v21[9] = PspThreadDelete;
      HIDWORD(v21[0]) = 4;
      v21[7] = PspThreadOpen;
      v21[5] = 0x7E000000000LL;
      v21[8] = 0LL;
      HIDWORD(v21[3]) = 0x1FFFFF;
      LODWORD(v21[4]) = 1054720;
      *(_OWORD *)((char *)&v21[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v21, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        memset(v21, 0, 0x78uLL);
        v15 = 0;
        LOWORD(v21[0]) = 120;
        LODWORD(v21[1]) = 176;
        BYTE2(v21[0]) = BYTE2(v21[0]) & 0x7D | 2;
        v16 = PspMemoryReserveObjectSizes;
        HIDWORD(v21[4]) = 512;
        *(_OWORD *)((char *)&v21[1] + 4) = PspMemReserveMapping;
        HIDWORD(v21[3]) = 983043;
        while ( 1 )
        {
          HIDWORD(v21[5]) = *(_DWORD *)v16;
          if ( (int)ObCreateObjectType(
                      (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v15],
                      (__int64)v21,
                      0LL,
                      (__int64)(&PspMemoryReserveObjectTypes + v15)) < 0 )
            break;
          ++v15;
          ++v16;
          if ( v15 >= 2 )
          {
            if ( (unsigned __int8)PspInitializeJobStructures() )
            {
              if ( PspInitializeSiloStructures() )
              {
                qword_1402F9CD0 = 0LL;
                qword_1402F9CC8 = (__int64)&PspWorkingSetChangeHead;
                PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                PspAffinityUpdateLock = 0LL;
                PspCidTable = ExCreateHandleTable(0LL, 0LL);
                if ( PspCidTable )
                {
                  RtlRunOnceInitialize(&PsWin32CallBack);
                  RtlRunOnceInitialize(&PsWin32NullCallBack);
                  *(_BYTE *)(PspCidTable + 44) |= 1u;
                  qword_1403015D0 = (__int64)PspReaper;
                  qword_140301550 = (__int64)PspProcessRundownWorker;
                  PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                  PsReaperListHead = 0LL;
                  qword_1403015D8 = 0LL;
                  PsReaperWorkItem = 0LL;
                  qword_140301558 = 0LL;
                  PspProcessRundownWorkItem = 0LL;
                  PspProcessRundownCacheWorkItem.Parameter = 0LL;
                  PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                  v17 = (void *)(*((_QWORD *)PsIdleProcess + 107) & 0xFFFFFFFFFFFFFFF0uLL);
                  ObjectAttributes.Length = 48;
                  PspBootAccessToken = v17;
                  memset(&ObjectAttributes.RootDirectory, 0, 20);
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( PspCreateProcess(
                         &PspInitialSystemProcessHandle,
                         0x1FFFFFu,
                         (__int64)&ObjectAttributes,
                         0LL,
                         0,
                         0LL,
                         0LL,
                         0LL) >= 0 )
                  {
                    v18 = ObReferenceObjectByHandle(
                            PspInitialSystemProcessHandle,
                            0,
                            (POBJECT_TYPE)PsProcessType,
                            0,
                            &Object,
                            0LL);
                    PsInitialSystemProcess = (PEPROCESS)Object;
                    if ( v18 >= 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)Object + 435, 0x3000000u);
                      strcpy_s((char *)PsIdleProcess + 1104, 0xFuLL, "Idle");
                      strcpy_s((char *)&PsInitialSystemProcess[1].ActiveProcessors.Bitmap[12], 0xFuLL, "System");
                      PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15] = (unsigned __int64)ExAllocatePoolWithTag(
                                                                                                  NonPagedPoolNx,
                                                                                                  0x10uLL,
                                                                                                  0x61506553u);
                      v19 = (_QWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15];
                      if ( v19 )
                      {
                        *v19 = 0LL;
                        v19[1] = 0LL;
                        if ( PsCreateSystemThread(
                               &ThreadHandle,
                               0x1FFFFFu,
                               &ObjectAttributes,
                               0LL,
                               0LL,
                               (PKSTART_ROUTINE)Phase1Initialization,
                               StartContext) >= 0 )
                        {
                          ObCloseHandle(ThreadHandle, 0);
                          return (unsigned __int8)PspIumInitialize() != 0;
                        }
                      }
                    }
                  }
                }
              }
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
