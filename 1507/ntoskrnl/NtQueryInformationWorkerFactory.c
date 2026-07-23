/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x140265974
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  _BYTE *v10; // rcx
  _DWORD *v11; // rcx
  char *v12; // rbx
  __int64 v13; // rdx
  int v14; // ecx
  _OWORD v15[8]; // [rsp+30h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( WorkerFactoryInformationClass != WorkerFactoryBasicInformation )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = WorkerFactoryInformation;
    if ( (unsigned __int64)WorkerFactoryInformation >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[119] = v10[119];
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = 120;
    }
  }
  else if ( ReturnLength )
  {
    *ReturnLength = 120;
  }
  if ( WorkerFactoryInformationLength != 120 )
    return -1073741820;
  result = ObReferenceObjectByHandle(WorkerFactoryHandle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    memset(v15, 0, 0x78uLL);
    v12 = (char *)Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    *(_QWORD *)&v15[1] = *((_QWORD *)v12 + 13);
    WORD4(v15[1]) = 0;
    BYTE10(v15[1]) = (v12[144] & 8) != 0;
    v13 = *((_QWORD *)v12 + 2);
    v14 = *(_DWORD *)(v13 + 28);
    BYTE11(v15[1]) = v14 == 0;
    BYTE12(v15[1]) = *((_DWORD *)v12 + 34) != 0;
    *(_WORD *)((char *)&v15[1] + 13) = *(_WORD *)(v13 + 32);
    LODWORD(v15[2]) = *((_DWORD *)v12 + 35);
    *(_QWORD *)((char *)&v15[2] + 4) = *((_QWORD *)v12 + 14);
    HIDWORD(v15[2]) = *((_DWORD *)v12 + 32);
    LODWORD(v15[3]) = v14;
    DWORD1(v15[3]) = *((_DWORD *)v12 + 31);
    DWORD2(v15[3]) = *(_DWORD *)(v13 + 24);
    *(_QWORD *)&v15[4] = 0LL;
    *((_QWORD *)&v15[4] + 1) = *((_QWORD *)v12 + 3);
    *(_QWORD *)&v15[5] = *((_QWORD *)v12 + 4);
    *((_QWORD *)&v15[5] + 1) = *(_QWORD *)(*((_QWORD *)v12 + 6) + 744LL);
    v15[6] = *(_OWORD *)(v12 + 56);
    LODWORD(v15[7]) = *((_DWORD *)v12 + 38);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(_OWORD *)WorkerFactoryInformation = 0LL;
    *((_OWORD *)WorkerFactoryInformation + 1) = v15[1];
    *((_OWORD *)WorkerFactoryInformation + 2) = v15[2];
    *((_OWORD *)WorkerFactoryInformation + 3) = v15[3];
    *((_OWORD *)WorkerFactoryInformation + 4) = v15[4];
    *((_OWORD *)WorkerFactoryInformation + 5) = v15[5];
    *((_OWORD *)WorkerFactoryInformation + 6) = v15[6];
    *((_QWORD *)WorkerFactoryInformation + 14) = *(_QWORD *)&v15[7];
    return 0;
  }
  return result;
}
