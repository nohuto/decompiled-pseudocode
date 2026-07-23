/*
 * XREFs of NtCreateLowBoxToken @ 0x140412A24
 * Callers:
 *     <none>
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x140001290 (AppContainerPrivilegesEnabledExt_0.c)
 *     SepCaptureHandles @ 0x1400078F0 (SepCaptureHandles.c)
 *     SepSetTokenLowboxHandles @ 0x140007984 (SepSetTokenLowboxHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140007EA4 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14004563C (SepLocateTokenIntegrity.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepCheckCapabilities @ 0x140408A80 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x14041063C (SepCheckCreateLowBox.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     RtlGetAppContainerSidType @ 0x1404129AC (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x140413050 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1404130F4 (RtlIsPackageSid.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     SeSetMandatoryPolicyToken @ 0x14046D548 (SeSetMandatoryPolicyToken.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  int v9; // esi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rax
  NTSTATUS result; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  ULONG v18; // ebx
  PSID *v19; // rdi
  unsigned int v20; // esi
  PSID v21; // r14
  __int64 v22; // r9
  char v23; // si
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v25; // r14
  __int64 TokenIntegrity; // rax
  void *v27; // rcx
  unsigned __int8 v28; // al
  int v29; // eax
  _QWORD *v30; // rdi
  unsigned __int8 *v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // r9
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  PVOID v36; // rdi
  _QWORD *v37; // rdi
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  signed __int32 v40[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v43; // [rsp+30h] [rbp-B8h]
  char v44; // [rsp+50h] [rbp-98h]
  char v45; // [rsp+51h] [rbp-97h]
  char v46[6]; // [rsp+52h] [rbp-96h] BYREF
  PVOID v47; // [rsp+58h] [rbp-90h] BYREF
  PSID Sid; // [rsp+60h] [rbp-88h] BYREF
  __int64 v49; // [rsp+68h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-78h] BYREF
  PVOID v51; // [rsp+78h] [rbp-70h] BYREF
  PVOID P; // [rsp+80h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-60h] BYREF
  int v54; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v55; // [rsp+98h] [rbp-50h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-40h]
  __int64 v58; // [rsp+B0h] [rbp-38h]
  PHANDLE v59; // [rsp+B8h] [rbp-30h]
  __int64 v60; // [rsp+C0h] [rbp-28h]
  int v61; // [rsp+108h] [rbp+20h]

  v61 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v59 = TokenHandle;
  v49 = 0LL;
  LODWORD(v56) = 0;
  P = 0LL;
  Sid = 0LL;
  v55 = 0LL;
  Handle = 0LL;
  v60 = 0LL;
  v47 = 0LL;
  v54 = 1;
  v45 = 0;
  v44 = 0;
  v57 = 0LL;
  v58 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  v46[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)TokenHandle >= MmUserProbeAddress )
      TokenHandle = (PHANDLE)MmUserProbeAddress;
    *TokenHandle = *TokenHandle;
    v12 = HandleCount;
    if ( v12 * 8 )
    {
      if ( ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Handles[v12] > MmUserProbeAddress || &Handles[v12] < Handles )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  if ( !PackageSid )
    return -1073741811;
  if ( !HandleCount )
  {
    if ( !Handles )
      goto LABEL_14;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_14:
  result = ObReferenceObjectByHandle(ExistingTokenHandle, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v51, &v55);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(PackageSid, (int)Object, 1, (__int64)&Sid);
  if ( result < 0 )
    return result;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)v51 + 48) != 1 && *((int *)v51 + 49) < 2 )
  {
    ObfDereferenceObject(v51);
    return -1073741659;
  }
  GrantedAccess = v55.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 Capabilities,
                 0,
                 (int)HandleInformation,
                 v43,
                 (__int64)&v49,
                 (__int64)&v56);
  if ( appended < 0 )
    goto LABEL_78;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_78;
  if ( !RtlIsPackageSid(Sid) )
    goto LABEL_77;
  if ( ((*((_BYTE *)Sid + 1) - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_78;
  }
  v18 = 0;
  if ( CapabilityCount )
  {
    v19 = (PSID *)v49;
    while ( RtlIsCapabilitySid(*v19) )
    {
      v20 = 0;
      if ( v18 )
      {
        v21 = *v19;
        while ( !RtlEqualSid(v21, *(PSID *)(v49 + 16LL * v20)) )
        {
          if ( ++v20 >= v18 )
            goto LABEL_33;
        }
        appended = -1073741811;
        goto LABEL_81;
      }
LABEL_33:
      ++v18;
      v19 += 2;
      if ( v18 >= CapabilityCount )
      {
        v9 = v61;
        goto LABEL_35;
      }
    }
LABEL_77:
    appended = -1073741811;
    goto LABEL_78;
  }
LABEL_35:
  appended = RtlGetAppContainerSidType(Sid, &AppContainerSidType);
  if ( appended < 0 )
    goto LABEL_78;
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(v51, CapabilityCount, v49, v22, v46);
    if ( !v46[0] )
    {
      appended = -1073741790;
      goto LABEL_78;
    }
  }
  if ( appended < 0 )
    goto LABEL_78;
  appended = SepDuplicateToken((_DWORD)v51, v9, 0, 1, 0, PreviousMode, 0, (__int64)&v47);
  if ( appended < 0 )
    goto LABEL_78;
  v23 = 1;
  v44 = 1;
  appended = SeSetMandatoryPolicyToken(v47, &v54);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = (PERESOURCE *)v47;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v47 + 6), 1u);
    _InterlockedOr(v40, 0);
    v45 = 1;
    TokenIntegrity = SepLocateTokenIntegrity((__int64)v47);
    if ( TokenIntegrity )
    {
      v27 = *(void **)TokenIntegrity;
      v28 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v28 )
        *RtlSubAuthoritySid(v27, (unsigned int)v28 - 1) = 4096;
      v29 = AppContainerPrivilegesEnabledExt_0();
      appended = v29;
      if ( v29 == -1073741637 )
      {
        v30 = v47;
        *((_QWORD *)v47 + 9) &= 0x200800000uLL;
        v30[10] &= 0x200800000uLL;
        appended = 0;
      }
      else
      {
        if ( v29 < 0 )
          goto LABEL_58;
        v37 = v47;
        *((_QWORD *)v47 + 9) &= v57;
        v37[10] &= v58;
      }
      *((_DWORD *)v47 + 50) = *((_DWORD *)v47 + 50) & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    if ( appended >= 0 )
    {
      v31 = (unsigned __int8 *)Sid;
      v32 = v47;
      appended = SepSetTokenCapabilities(v47, Sid, v49, CapabilityCount);
      if ( appended < 0
        || (appended = SepSetTokenLowboxNumber((__int64)v32, (__int64)v31, v15, v33), appended < 0)
        || (appended = SepSetTokenLowboxHandles((__int64)v32, (__int64)v31, HandleCount, (HANDLE *)P), appended < 0)
        || (appended = SepSetTokenPackage(v32, v31), appended < 0)
        || (appended = SepAppendAceToTokenDefaultDacl((__int64)v32, v31), appended < 0) )
      {
LABEL_81:
        v23 = v44;
        goto LABEL_58;
      }
      v32[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v40, 0);
      ExReleaseResourceLite(v25[6]);
      v34 = KeGetCurrentThread();
      v35 = v34->KernelApcDisable + 1;
      v34->KernelApcDisable = v35;
      if ( !v35
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
        && !v34->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v45 = 0;
      appended = ObInsertObject(v47, 0LL, GrantedAccess, 1u, 0LL, &Handle);
      if ( appended < 0 )
        goto LABEL_57;
      v36 = v47;
      appended = SepAppendAceToTokenObjectAcl(v47, 983551LL, Sid);
      if ( appended >= 0 )
      {
        SepAppendAceToTokenObjectAcl(v36, 8LL, SeAliasAdminsSid);
        ObfDereferenceObject(v36);
LABEL_57:
        v23 = 0;
        goto LABEL_58;
      }
LABEL_78:
      v23 = v44;
    }
  }
LABEL_58:
  if ( v45 )
  {
    if ( appended >= 0 )
      *((_QWORD *)v47 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v40, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v47 + 6));
    v38 = KeGetCurrentThread();
    v39 = v38->KernelApcDisable + 1;
    v38->KernelApcDisable = v39;
    if ( !v39
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
      && !v38->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( appended < 0 )
  {
    if ( v23 )
      ObfDereferenceObject(v47);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v49 )
  {
    LOBYTE(v14) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v49, v14);
  }
  if ( Sid )
  {
    LOBYTE(v15) = 1;
    LOBYTE(v14) = PreviousMode;
    SeReleaseSid(Sid, v14, v15);
  }
  ObfDereferenceObject(v51);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *v59 = Handle;
  return appended;
}
