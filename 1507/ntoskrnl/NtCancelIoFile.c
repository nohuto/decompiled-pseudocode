/*
 * XREFs of NtCancelIoFile @ 0x1404A81DC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x140074834 (IopCancelIrpsInFileObjectList.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

NTSTATUS __stdcall NtCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v7; // rcx
  int v8; // edi
  _DWORD *v9; // rcx
  struct _KTHREAD *v10; // rax
  unsigned __int8 CurrentIrql; // r12
  void **p_FirstArgument; // rdi
  void **FirstArgument; // rbx
  PVOID v14; // rbx
  char v16; // bl
  unsigned __int8 v17; // dl
  void **i; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v20; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-38h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v9 )
    {
      if ( (*v9 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v20 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v20, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v20);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v8 = -1073739504;
        }
      }
    }
  }
  if ( v8 < 0 )
    return v8;
  v10 = KeGetCurrentThread();
  ++v10->OtherOperationCount;
  __incgsdword(0x2E64u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_FirstArgument = &CurrentThread[1].FirstArgument;
  FirstArgument = (void **)CurrentThread[1].FirstArgument;
  if ( &CurrentThread[1].FirstArgument != FirstArgument )
  {
    do
    {
      if ( FirstArgument[20] == Object )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(FirstArgument - 4));
      }
      FirstArgument = (void **)*FirstArgument;
    }
    while ( p_FirstArgument != FirstArgument );
  }
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    Interval.QuadPart = -100000LL;
    while ( 2 )
    {
      v16 = 0;
      v17 = KeGetCurrentIrql();
      __writecr8(1uLL);
      for ( i = (void **)*p_FirstArgument; p_FirstArgument != i; i = (void **)*i )
      {
        if ( i[20] == Object )
        {
          v16 = 1;
          break;
        }
      }
      __writecr8(v17);
      if ( v16 )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        continue;
      }
      break;
    }
  }
  v14 = Object;
  IopCancelIrpsInFileObjectList(
    (__int64)Object,
    (int)KeGetCurrentThread()->ApcState.Process,
    0,
    (int)KeGetCurrentThread(),
    1,
    0);
  IoStatusBlock->Status = 0;
  IoStatusBlock->Information = 0LL;
  ObfDereferenceObject(v14);
  return 0;
}
