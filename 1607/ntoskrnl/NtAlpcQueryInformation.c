/*
 * XREFs of NtAlpcQueryInformation @ 0x140475C40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x140475E60 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x1404CF5F4 (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14065641C (AlpcpPortQueryServerSessionInfo.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  PVOID v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  bool v14; // cc
  unsigned __int64 v15; // rdx
  PVOID v16; // rdi
  PULONG v17; // r14
  __int64 v18; // rcx
  __int32 v19; // esi
  __int32 v20; // esi
  __int32 v21; // esi
  int ServerSessionInfo; // eax
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v10 = -1073741811;
    goto LABEL_40;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v16 = 0LL;
    v17 = ReturnLength;
    goto LABEL_24;
  }
  if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( !Length )
    {
      v16 = 0LL;
      PortInformation = (PVOID)0x7FFFFFFF0000LL;
      goto LABEL_18;
    }
    v12 = (unsigned __int64)PortInformation;
    if ( ((unsigned __int8)PortInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)PortInformation + Length - 1;
    v14 = (unsigned __int64)PortInformation <= v13;
    PortInformation = (PVOID)0x7FFFFFFF0000LL;
    if ( !v14 || v13 >= 0x7FFFFFFF0000LL )
    {
      v16 = 0LL;
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
      goto LABEL_18;
    }
    v15 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v12 = *(_BYTE *)v12;
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v12 != v15 );
  }
  else
  {
    PortInformation = (PVOID)0x7FFFFFFF0000LL;
  }
  v16 = 0LL;
LABEL_18:
  v17 = ReturnLength;
  if ( ReturnLength )
  {
    v18 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
LABEL_24:
  if ( PortHandle )
  {
    v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL);
    v16 = v25;
    if ( v10 < 0 )
      goto LABEL_40;
  }
  if ( PortInformationClass )
  {
    v19 = PortInformationClass - 3;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 7;
        if ( v21 )
        {
          if ( v21 != 1 )
          {
            v10 = -1073741811;
            goto LABEL_38;
          }
          ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v16, v6, Length, v17);
        }
        else
        {
          ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v16, (_DWORD)v6, Length, (_DWORD)v17, PreviousMode);
        }
      }
      else
      {
        ServerSessionInfo = AlpcpPortQueryServerInfo((int)v16, (int)v6, Length, (int)v17, PreviousMode);
      }
    }
    else
    {
      LOBYTE(Object) = PreviousMode;
      ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v16, v6, PortInformation, v17, Object);
    }
  }
  else
  {
    ServerSessionInfo = AlpcpPortQueryBasicInfo(v16, v6, Length, v17);
  }
  v10 = ServerSessionInfo;
LABEL_38:
  if ( v16 )
    ObfDereferenceObject(v16);
LABEL_40:
  KeLeaveCriticalRegion();
  return v10;
}
