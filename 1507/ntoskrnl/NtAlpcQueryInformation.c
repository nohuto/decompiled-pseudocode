/*
 * XREFs of NtAlpcQueryInformation @ 0x14051F860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x14051FAA0 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x14051FDBC (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14069FD0C (AlpcpPortQueryServerSessionInfo.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v12; // rcx
  ULONG64 v13; // rdx
  unsigned __int64 v14; // rdx
  PVOID v15; // rdi
  unsigned int *v16; // r14
  _DWORD *v17; // rcx
  __int32 v18; // esi
  __int32 v19; // esi
  __int32 v20; // esi
  NTSTATUS ServerSessionInfo; // eax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v26; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v10 = -1073741811;
    goto LABEL_39;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v15 = 0LL;
    v16 = ReturnLength;
    goto LABEL_23;
  }
  if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( !Length )
    {
      v15 = 0LL;
      goto LABEL_17;
    }
    v12 = (unsigned __int64)PortInformation;
    if ( ((unsigned __int8)PortInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (ULONG64)PortInformation + Length - 1;
    if ( (unsigned __int64)PortInformation > v13 || v13 >= MmUserProbeAddress )
    {
      v15 = 0LL;
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
      goto LABEL_17;
    }
    v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v12 = *(_BYTE *)v12;
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v12 != v14 );
  }
  v15 = 0LL;
LABEL_17:
  v16 = ReturnLength;
  if ( ReturnLength )
  {
    v17 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = *v17;
  }
LABEL_23:
  if ( PortHandle )
  {
    v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v26, 0LL);
    v15 = v26;
    if ( v10 < 0 )
      goto LABEL_39;
  }
  if ( PortInformationClass )
  {
    v18 = PortInformationClass - 3;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 7;
        if ( v20 )
        {
          if ( v20 != 1 )
          {
            v10 = -1073741811;
            goto LABEL_37;
          }
          ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v15, PortInformation, Length, v16);
        }
        else
        {
          ServerSessionInfo = AlpcpWaitForPortReferences(
                                (_DWORD)v15,
                                (_DWORD)PortInformation,
                                Length,
                                (_DWORD)v16,
                                PreviousMode);
        }
      }
      else
      {
        ServerSessionInfo = AlpcpPortQueryServerInfo((__int64)v15, (__int64)PortInformation, Length, v16, PreviousMode);
      }
    }
    else
    {
      LOBYTE(Object) = PreviousMode;
      ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v15, PortInformation, PortInformation, v16, Object);
    }
  }
  else
  {
    ServerSessionInfo = AlpcpPortQueryBasicInfo(v15, PortInformation, Length, v16);
  }
  v10 = ServerSessionInfo;
LABEL_37:
  if ( v15 )
    ObfDereferenceObject(v15);
LABEL_39:
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
