/*
 * XREFs of NtOpenThreadTokenEx @ 0x140433000
 * Callers:
 *     NtOpenThreadToken @ 0x1404334E4 (NtOpenThreadToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     PsRestoreImpersonation @ 0x140435590 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x140435730 (PsDisableImpersonation.c)
 *     PsSwapImpersonationToken @ 0x140435BE0 (PsSwapImpersonationToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x14043666C (SepSetTokenTrust.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C9270 (SepCreateImpersonationTokenDacl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v7; // r14d
  PHANDLE v8; // rsi
  _QWORD *v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // r9
  _DWORD *v12; // rdi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r9
  _DWORD *v17; // rbx
  void *v18; // r12
  signed __int64 *v19; // rbx
  __int16 v20; // ax
  char v21; // r13
  __int64 v22; // rax
  struct _KPROCESS *v23; // rdi
  PACCESS_TOKEN v24; // rbx
  NTSTATUS v25; // r15d
  ACL *v26; // rdi
  PVOID v27; // rbx
  NTSTATUS inserted; // eax
  __int64 v29; // rdx
  char v30; // [rsp+40h] [rbp-E8h]
  BOOLEAN v31; // [rsp+41h] [rbp-E7h]
  char v32; // [rsp+42h] [rbp-E6h]
  bool v33; // [rsp+43h] [rbp-E5h]
  PVOID Object; // [rsp+48h] [rbp-E0h] BYREF
  PVOID v35; // [rsp+50h] [rbp-D8h] BYREF
  int v36; // [rsp+58h] [rbp-D0h]
  PACL Dacl; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-C0h]
  HANDLE Handle; // [rsp+70h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-B0h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+88h] [rbp-A0h] BYREF
  int v42; // [rsp+98h] [rbp-90h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-88h]
  __int64 v44; // [rsp+A8h] [rbp-80h]
  ULONG v45; // [rsp+B0h] [rbp-78h]
  _BYTE *v46; // [rsp+B8h] [rbp-70h]
  __int64 v47; // [rsp+C0h] [rbp-68h]
  __int64 v48; // [rsp+C8h] [rbp-60h]
  _BYTE SecurityDescriptor[48]; // [rsp+D0h] [rbp-58h] BYREF

  v35 = 0LL;
  ImpersonationState = 0LL;
  v31 = 0;
  Handle = 0LL;
  Dacl = 0LL;
  v48 = 0LL;
  v38 = 0LL;
  v30 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v7 = HandleAttributes & 0xDF2;
  else
    v7 = HandleAttributes & 0x10FF2;
  if ( PreviousMode )
  {
    v8 = TokenHandle;
    v9 = TokenHandle;
    if ( (unsigned __int64)TokenHandle >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *v9 = *v9;
  }
  else
  {
    v8 = TokenHandle;
  }
  result = ObReferenceObjectByHandle(
             ThreadHandle,
             0x800u,
             (POBJECT_TYPE)PsThreadType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v12 = Object;
    if ( (*((_DWORD *)Object + 431) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (unsigned __int64 *)((char *)Object + 1704);
    BugCheckParameter2 = (ULONG_PTR)Object + 1704;
    v15 = KeAbPreAcquire((ULONG_PTR)Object + 1704, 0LL, 0LL, v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v14, v15, (ULONG_PTR)v14, v16);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( (v12[431] & 8) != 0 )
    {
      v17 = Object;
      v18 = (void *)(*((_QWORD *)Object + 203) & 0xFFFFFFFFFFFFFFF8uLL);
      v32 = BYTE1(v12[431]) & 1;
      ObfReferenceObject(v18);
      v36 = v17[406] & 3;
      v33 = (v17[406] & 4) != 0;
    }
    else
    {
      v18 = 0LL;
    }
    v19 = (signed __int64 *)BugCheckParameter2;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v19);
    KeAbPostRelease((ULONG_PTR)v19);
    v20 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v18 )
    {
LABEL_9:
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    if ( v36 <= 0 )
    {
      ObfDereferenceObject(v18);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( OpenAsSelf )
      v31 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    v21 = v32;
    if ( !v32 )
    {
      inserted = ObOpenObjectByPointer(
                   v18,
                   v7,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v27 = v35;
      v26 = Dacl;
      goto LABEL_40;
    }
    if ( OpenAsSelf )
    {
      if ( !ImpersonationState.Token )
        goto LABEL_30;
      v22 = *((_QWORD *)ImpersonationState.Token + 138);
    }
    else
    {
      v29 = *((_QWORD *)Object + 236);
      if ( !v29 )
      {
LABEL_30:
        v23 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
        v24 = PsReferencePrimaryToken(v23);
        v25 = SepCreateImpersonationTokenDacl(v18, v24, &Dacl);
        ObFastDereferenceObject((signed __int64 *)&v23[1].Affinity.Bitmap[5], (unsigned __int64)v24);
        v26 = Dacl;
        if ( v25 < 0 )
          goto LABEL_63;
        if ( Dacl )
        {
          RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
          RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v26, 0);
        }
        v42 = 48;
        v43 = 0LL;
        v45 = v7;
        v44 = 0LL;
        v46 = v26 ? SecurityDescriptor : 0LL;
        v47 = 0LL;
        v25 = SepDuplicateToken((_DWORD)v18, (unsigned int)&v42, v33, 2, v36, 0, 0, (__int64)&v35);
        if ( v25 < 0 )
        {
LABEL_63:
          v27 = v35;
          goto LABEL_41;
        }
        v27 = v35;
        if ( v30 )
          v25 = SepSetTokenTrust(v35, v38);
        if ( v25 < 0 )
          goto LABEL_41;
        ObfReferenceObject(v27);
        inserted = ObInsertObjectEx(v27, 0, 0LL, (__int64)&Handle);
LABEL_40:
        v25 = inserted;
LABEL_41:
        if ( v26 )
          ExFreePoolWithTag(v26, 0);
        if ( v31 )
        {
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
          v27 = v35;
          v21 = v32;
        }
        if ( v25 >= 0 && v21 )
          PsSwapImpersonationToken(Object, v18, v27);
        ObfDereferenceObject(v18);
        if ( v27 )
          ObfDereferenceObject(v27);
        ObfDereferenceObject(Object);
        if ( v25 >= 0 )
          *v8 = Handle;
        return v25;
      }
      v22 = *(_QWORD *)(v29 + 1104);
    }
    v30 = 1;
    v38 = v22;
    goto LABEL_30;
  }
  return result;
}
