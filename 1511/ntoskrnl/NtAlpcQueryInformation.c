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

__int64 __fastcall NtAlpcQueryInformation(HANDLE Handle, int a2, ULONG64 a3, unsigned int a4, ULONG64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned __int64 v11; // rdx
  ULONG64 v12; // rax
  unsigned __int64 v13; // rax
  PVOID v14; // rdi
  ULONG64 v15; // r14
  _DWORD *v16; // rcx
  NTSTATUS v17; // esi
  NTSTATUS BasicInfo; // eax
  int v20; // r15d
  int v21; // r15d
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v23; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a3 )
  {
    v17 = -1073741811;
    goto LABEL_26;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v14 = 0LL;
    v15 = a5;
    goto LABEL_19;
  }
  if ( ((a2 - 3) & 0xFFFFFFF7) == 0 )
  {
LABEL_10:
    v14 = 0LL;
    goto LABEL_11;
  }
  if ( a4 )
  {
    v11 = a3;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a3 + a4 - 1LL;
    if ( a3 > v12 || v12 >= MmUserProbeAddress )
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
  v15 = a5;
  if ( a5 )
  {
    v16 = (_DWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
  }
LABEL_19:
  if ( Handle )
  {
    v17 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &v23, 0LL);
    v14 = v23;
    if ( v17 < 0 )
      goto LABEL_26;
  }
  if ( !a2 )
  {
    BasicInfo = AlpcpPortQueryBasicInfo(v14, a3, a4, v15);
LABEL_23:
    v17 = BasicInfo;
    goto LABEL_24;
  }
  v20 = a2 - 3;
  if ( !v20 )
  {
    LOBYTE(Object) = PreviousMode;
    BasicInfo = AlpcpPortQueryConnectedSidInfo(v14, a3, a3, v15, Object);
    goto LABEL_23;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    BasicInfo = AlpcpPortQueryServerInfo((int)v14, a3, a4, v15, PreviousMode);
    goto LABEL_23;
  }
  if ( v21 == 7 )
  {
    BasicInfo = AlpcpWaitForPortReferences((_DWORD)v14, a3, a4, v15, PreviousMode);
    goto LABEL_23;
  }
  v17 = -1073741811;
LABEL_24:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_26:
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
