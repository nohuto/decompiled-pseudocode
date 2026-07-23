/*
 * XREFs of NtAlpcQueryInformation @ 0x14048BF30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x14048C120 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x14048C354 (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryServerInfo @ 0x14050FEAC (AlpcpPortQueryServerInfo.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned __int64 v11; // rdx
  ULONG64 v12; // rax
  unsigned __int64 v13; // rax
  PVOID v14; // rdi
  PULONG v15; // r14
  _DWORD *v16; // rcx
  int v17; // esi
  int BasicInfo; // eax
  __int32 v20; // r15d
  __int32 v21; // r15d
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v23; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v17 = -1073741811;
    goto LABEL_26;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v14 = 0LL;
    v15 = ReturnLength;
    goto LABEL_19;
  }
  if ( ((PortInformationClass - 3) & 0xFFFFFFF7) == 0 )
  {
LABEL_10:
    v14 = 0LL;
    goto LABEL_11;
  }
  if ( Length )
  {
    v11 = (unsigned __int64)PortInformation;
    if ( ((unsigned __int8)PortInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (ULONG64)PortInformation + Length - 1;
    if ( (unsigned __int64)PortInformation > v12 || v12 >= MmUserProbeAddress )
    {
      v14 = 0LL;
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
      goto LABEL_11;
    }
    v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v11 = *(_BYTE *)v11;
      v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v11 != v13 );
    goto LABEL_10;
  }
  v14 = 0LL;
LABEL_11:
  v15 = ReturnLength;
  if ( ReturnLength )
  {
    v16 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
  }
LABEL_19:
  if ( PortHandle )
  {
    v17 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v23, 0LL);
    v14 = v23;
    if ( v17 < 0 )
      goto LABEL_26;
  }
  if ( PortInformationClass == AlpcBasicInformation )
  {
    BasicInfo = AlpcpPortQueryBasicInfo(v14, PortInformation, Length, v15);
LABEL_23:
    v17 = BasicInfo;
    goto LABEL_24;
  }
  v20 = PortInformationClass - 3;
  if ( !v20 )
  {
    LOBYTE(Object) = PreviousMode;
    BasicInfo = AlpcpPortQueryConnectedSidInfo(v14, PortInformation, PortInformation, v15, Object);
    goto LABEL_23;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    BasicInfo = AlpcpPortQueryServerInfo((int)v14, (int)PortInformation, Length, (int)v15, PreviousMode);
    goto LABEL_23;
  }
  if ( v21 == 7 )
  {
    BasicInfo = AlpcpWaitForPortReferences((_DWORD)v14, (_DWORD)PortInformation, Length, (_DWORD)v15, PreviousMode);
    goto LABEL_23;
  }
  v17 = -1073741811;
LABEL_24:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_26:
  KeLeaveCriticalRegion();
  return v17;
}
