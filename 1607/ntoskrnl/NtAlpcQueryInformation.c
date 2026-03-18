/*
 * XREFs of NtAlpcQueryInformation @ 0x140476D70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x140476F90 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x1404ED53C (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140656338 (AlpcpPortQueryServerSessionInfo.c)
 *     ExRaiseAccessViolation @ 0x1406B6048 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcQueryInformation(
        HANDLE Handle,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  bool v14; // cc
  unsigned __int64 v15; // rdx
  PVOID v16; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  int v19; // esi
  int v20; // esi
  int v21; // esi
  NTSTATUS ServerSessionInfo; // eax
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a3 )
  {
    v10 = -1073741811;
    goto LABEL_40;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v16 = 0LL;
    v17 = a5;
    goto LABEL_24;
  }
  if ( ((a2 - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( !a4 )
    {
      v16 = 0LL;
      a3 = 0x7FFFFFFF0000LL;
      goto LABEL_18;
    }
    v12 = a3;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a4 + a3 - 1;
    v14 = a3 <= v13;
    a3 = 0x7FFFFFFF0000LL;
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
    a3 = 0x7FFFFFFF0000LL;
  }
  v16 = 0LL;
LABEL_18:
  v17 = a5;
  if ( a5 )
  {
    v18 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
LABEL_24:
  if ( Handle )
  {
    v10 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL);
    v16 = v25;
    if ( v10 < 0 )
      goto LABEL_40;
  }
  if ( a2 )
  {
    v19 = a2 - 3;
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
          ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v16, v6, a4, v17);
        }
        else
        {
          ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v16, v6, a4, v17, PreviousMode);
        }
      }
      else
      {
        ServerSessionInfo = AlpcpPortQueryServerInfo((int)v16, v6, a4, v17, PreviousMode);
      }
    }
    else
    {
      LOBYTE(Object) = PreviousMode;
      ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v16, v6, a3, v17, Object);
    }
  }
  else
  {
    ServerSessionInfo = AlpcpPortQueryBasicInfo(v16, v6, a4, v17);
  }
  v10 = ServerSessionInfo;
LABEL_38:
  if ( v16 )
    ObfDereferenceObject(v16);
LABEL_40:
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
