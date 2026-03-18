/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x140215810
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x14049E9B4 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtQueryInformationWorkerFactory(HANDLE Handle, int a2, ULONG64 a3, int a4, _DWORD *a5)
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
  if ( a2 != 7 )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[119] = v10[119];
    v11 = a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = 120;
    }
  }
  else if ( a5 )
  {
    *a5 = 120;
  }
  if ( a4 != 120 )
    return -1073741820;
  result = ObReferenceObjectByHandle(Handle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
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
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = v15[1];
    *(_OWORD *)(a3 + 32) = v15[2];
    *(_OWORD *)(a3 + 48) = v15[3];
    *(_OWORD *)(a3 + 64) = v15[4];
    *(_OWORD *)(a3 + 80) = v15[5];
    *(_OWORD *)(a3 + 96) = v15[6];
    *(_QWORD *)(a3 + 112) = *(_QWORD *)&v15[7];
    return 0;
  }
  return result;
}
