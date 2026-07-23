/*
 * XREFs of PspInitPhase0 @ 0x1407C344C
 * Callers:
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14015F474 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     strcpy_s @ 0x140177924 (strcpy_s.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 *     PspValidateMitigationOptions @ 0x140553B58 (PspValidateMitigationOptions.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 *     PsChangeQuantumTable @ 0x140581874 (PsChangeQuantumTable.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 *     RtlRunOnceInitialize @ 0x1405B5B34 (RtlRunOnceInitialize.c)
 *     PspInitializeSiloStructures @ 0x1407E4ED8 (PspInitializeSiloStructures.c)
 *     PspInitializeJobStructures @ 0x1407E7E94 (PspInitializeJobStructures.c)
 *     PspIumInitialize @ 0x1407E8D88 (PspIumInitialize.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  _KPROCESS *Process; // rcx
  char v15; // bl
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // bl
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  __int64 *v24; // rdi
  void *v25; // rcx
  NTSTATUS v26; // eax
  _QWORD *v27; // rcx
  _QWORD v29[16]; // [rsp+40h] [rbp-79h] BYREF
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
    v9 = v12 + 1;
  }
  while ( v13 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation, v10, v11);
  PspActiveProcessLock = 0LL;
  qword_14032C5E8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  Process[1].Header.WaitListHead.Flink = 0LL;
  Process->KernelTime = 0;
  memset(v29, 0, 0x78uLL);
  LOWORD(v29[0]) = 120;
  v15 = BYTE2(v29[0]) | 8;
  *(_QWORD *)((char *)&v29[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v29 + 4) = 2048LL;
  v29[9] = PspJobDelete;
  HIDWORD(v29[5]) = 1320;
  v29[8] = PspJobClose;
  HIDWORD(v29[3]) = 2031647;
  BYTE2(v29[0]) = v15 & 0x7F;
  *(_OWORD *)((char *)&v29[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1, v16, v17) >= 0 )
  {
    LODWORD(v29[1]) = 176;
    v18 = BYTE2(v29[0]) | 0x42;
    RtlInitUnicodeString(&DestinationString, L"Process");
    HIDWORD(v29[0]) = 32;
    v29[9] = PspProcessDelete;
    v29[5] = 0x7B000001000LL;
    v29[7] = PspProcessOpen;
    v29[8] = PspProcessClose;
    HIDWORD(v29[3]) = 0x1FFFFF;
    LODWORD(v29[4]) = 1052672;
    *(_OWORD *)((char *)&v29[1] + 4) = PspProcessMapping;
    BYTE2(v29[0]) = v18 | 0x80;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3, v19, v20) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v29[0]) |= 0x80u;
      v29[9] = PspThreadDelete;
      HIDWORD(v29[0]) = 4;
      v29[7] = PspThreadOpen;
      v29[5] = 0x7C000000000LL;
      v29[8] = 0LL;
      HIDWORD(v29[3]) = 0x1FFFFF;
      LODWORD(v29[4]) = 1054720;
      *(_OWORD *)((char *)&v29[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3, v21, v22) >= 0 )
      {
        memset(v29, 0, 0x78uLL);
        v23 = 0;
        LOWORD(v29[0]) = 120;
        LODWORD(v29[1]) = 176;
        BYTE2(v29[0]) = BYTE2(v29[0]) & 0x7D | 2;
        v24 = PspMemoryReserveObjectSizes;
        HIDWORD(v29[4]) = 512;
        *(_OWORD *)((char *)&v29[1] + 4) = PspMemReserveMapping;
        HIDWORD(v29[3]) = 983043;
        while ( 1 )
        {
          HIDWORD(v29[5]) = *(_DWORD *)v24;
          if ( (int)ObCreateObjectType(
                      (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v23],
                      (__int64)v29,
                      0LL,
                      (__int64)(&PspMemoryReserveObjectTypes + v23)) < 0 )
            break;
          ++v23;
          ++v24;
          if ( v23 >= 2 )
          {
            PspInitializeJobStructures();
            if ( (unsigned __int8)PspInitializeSiloStructures() )
            {
              qword_140323A70 = 0LL;
              qword_140323A68 = (__int64)&PspWorkingSetChangeHead;
              PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
              PspAffinityUpdateLock = 0LL;
              PspCidTable = ExCreateHandleTable(0LL, 0LL);
              if ( PspCidTable )
              {
                RtlRunOnceInitialize(&PsWin32CallBack);
                *(_BYTE *)(PspCidTable + 44) |= 1u;
                qword_14032C570 = (__int64)PspReaper;
                qword_14032C590 = (__int64)PspProcessRundownWorker;
                PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                PsReaperListHead = 0LL;
                qword_14032C578 = 0LL;
                PsReaperWorkItem = 0LL;
                qword_14032C598 = 0LL;
                PspProcessRundownWorkItem = 0LL;
                PspProcessRundownCacheWorkItem.Parameter = 0LL;
                PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                v25 = (void *)(*((_QWORD *)PsIdleProcess + 107) & 0xFFFFFFFFFFFFFFF0uLL);
                ObjectAttributes.Length = 48;
                PspBootAccessToken = v25;
                memset(&ObjectAttributes.RootDirectory, 0, 20);
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( PspCreateProcess(
                       &PspInitialSystemProcessHandle,
                       0x1FFFFF,
                       (__int64)&ObjectAttributes,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0LL) >= 0 )
                {
                  v26 = ObReferenceObjectByHandle(
                          PspInitialSystemProcessHandle,
                          0,
                          (POBJECT_TYPE)PsProcessType,
                          0,
                          &Object,
                          0LL);
                  PsInitialSystemProcess = (PEPROCESS)Object;
                  if ( v26 >= 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)Object + 429, 0x3000u);
                    strcpy_s((char *)PsIdleProcess + 1096, 0xFuLL, "Idle");
                    strcpy_s((char *)&PsInitialSystemProcess[1].ActiveProcessors.Bitmap[11], 0xFuLL, "System");
                    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = (unsigned __int64)ExAllocatePoolWithTag(
                                                                                                NonPagedPoolNx,
                                                                                                0x10uLL,
                                                                                                0x61506553u);
                    v27 = (_QWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
                    if ( v27 )
                    {
                      *v27 = 0LL;
                      v27[1] = 0LL;
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
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
