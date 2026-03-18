/*
 * XREFs of NtOpenThreadTokenEx @ 0x1404772C0
 * Callers:
 *     NtOpenThreadToken @ 0x1404772A0 (NtOpenThreadToken.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SepCreateImpersonationTokenDacl @ 0x140434DA0 (SepCreateImpersonationTokenDacl.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     PsDisableImpersonation @ 0x1404777B0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140477920 (PsRestoreImpersonation.c)
 *     PsSwapImpersonationToken @ 0x140477AC0 (PsSwapImpersonationToken.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     SepSetTokenTrust @ 0x1404783E4 (SepSetTokenTrust.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  void *v5; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v7; // r14d
  PHANDLE v8; // rsi
  _QWORD *v9; // rax
  NTSTATUS result; // eax
  _DWORD *v11; // rdi
  unsigned __int64 *v12; // r12
  __int64 v13; // rbx
  _DWORD *v14; // rbx
  char v15; // r12
  NTSTATUS inserted; // eax
  _QWORD *v17; // rbx
  PACL v18; // rdi
  NTSTATUS v19; // r15d
  __int64 v20; // rax
  struct _KPROCESS *v21; // rdi
  PACCESS_TOKEN v22; // rbx
  __int64 v23; // rdx
  char v24; // [rsp+40h] [rbp-E8h]
  BOOLEAN v25; // [rsp+41h] [rbp-E7h]
  char v26; // [rsp+42h] [rbp-E6h]
  bool v27; // [rsp+43h] [rbp-E5h]
  PVOID Object; // [rsp+48h] [rbp-E0h] BYREF
  PVOID v29; // [rsp+50h] [rbp-D8h] BYREF
  int v30; // [rsp+58h] [rbp-D0h]
  PACL Dacl; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-C0h]
  HANDLE Handle; // [rsp+70h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-B0h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+88h] [rbp-A0h] BYREF
  int v36; // [rsp+98h] [rbp-90h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-88h]
  __int64 v38; // [rsp+A8h] [rbp-80h]
  ULONG v39; // [rsp+B0h] [rbp-78h]
  _BYTE *v40; // [rsp+B8h] [rbp-70h]
  __int64 v41; // [rsp+C0h] [rbp-68h]
  __int64 v42; // [rsp+C8h] [rbp-60h]
  _BYTE SecurityDescriptor[48]; // [rsp+D0h] [rbp-58h] BYREF

  v5 = 0LL;
  v29 = 0LL;
  ImpersonationState = 0LL;
  v25 = 0;
  Handle = 0LL;
  Dacl = 0LL;
  v42 = 0LL;
  v32 = 0LL;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v7 = HandleAttributes & 0x1DF2;
  else
    v7 = HandleAttributes & 0x11FF2;
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
    v11 = Object;
    if ( (*((_DWORD *)Object + 431) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (unsigned __int64 *)((char *)Object + 1704);
    v13 = KeAbPreAcquire((ULONG_PTR)Object + 1704, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v12, v13, (ULONG_PTR)v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( (v11[431] & 8) != 0 )
    {
      v14 = Object;
      v5 = (void *)(*((_QWORD *)Object + 203) & 0xFFFFFFFFFFFFFFF8uLL);
      v26 = BYTE1(v11[431]) & 1;
      ObfReferenceObject(v5);
      v30 = v14[406] & 3;
      v27 = (v14[406] & 4) != 0;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v5 )
    {
LABEL_9:
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    if ( v30 <= 0 )
    {
      ObfDereferenceObject(v5);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( OpenAsSelf )
      v25 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    v15 = v26;
    if ( !v26 )
    {
      inserted = ObOpenObjectByPointer(
                   v5,
                   v7,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v17 = v29;
      v18 = Dacl;
      goto LABEL_25;
    }
    if ( OpenAsSelf )
    {
      if ( !ImpersonationState.Token )
        goto LABEL_42;
      v20 = *((_QWORD *)ImpersonationState.Token + 138);
    }
    else
    {
      v23 = *((_QWORD *)Object + 236);
      if ( !v23 )
      {
LABEL_42:
        v21 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
        v22 = PsReferencePrimaryToken(v21);
        v19 = SepCreateImpersonationTokenDacl((__int64)v5, (__int64)v22, &Dacl);
        ObFastDereferenceObject((signed __int64 *)&v21[1].Affinity.Bitmap[5], (unsigned __int64)v22);
        v18 = Dacl;
        if ( v19 < 0 )
          goto LABEL_58;
        if ( Dacl )
        {
          memset(SecurityDescriptor, 0, 0x28uLL);
          SecurityDescriptor[0] = 1;
          RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
        }
        v36 = 48;
        v37 = 0LL;
        v39 = v7;
        v38 = 0LL;
        v40 = v18 ? SecurityDescriptor : 0LL;
        v41 = 0LL;
        v19 = SepDuplicateToken((_DWORD)v5, (unsigned int)&v36, v27, 2, v30, 0, 0, (__int64)&v29);
        if ( v19 < 0 )
        {
LABEL_58:
          v17 = v29;
          goto LABEL_26;
        }
        v17 = v29;
        if ( v24 )
          v19 = SepSetTokenTrust(v29, v32);
        if ( v19 < 0 )
          goto LABEL_26;
        ObfReferenceObject(v17);
        inserted = ObInsertObjectEx(v17, 0LL, DesiredAccess, 0, 0, 0LL, (__int64 *)&Handle);
LABEL_25:
        v19 = inserted;
LABEL_26:
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        if ( v25 )
        {
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
          v17 = v29;
          v15 = v26;
        }
        if ( v19 >= 0 && v15 )
          PsSwapImpersonationToken(Object, v5, v17);
        ObfDereferenceObject(v5);
        if ( v17 )
          ObfDereferenceObject(v17);
        ObfDereferenceObject(Object);
        if ( v19 >= 0 )
          *v8 = Handle;
        return v19;
      }
      v20 = *(_QWORD *)(v23 + 1104);
    }
    v24 = 1;
    v32 = v20;
    goto LABEL_42;
  }
  return result;
}
