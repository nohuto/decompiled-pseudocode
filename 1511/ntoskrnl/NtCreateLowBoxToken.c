/*
 * XREFs of NtCreateLowBoxToken @ 0x1403C0A6C
 * Callers:
 *     <none>
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x140001290 (AppContainerPrivilegesEnabledExt_0.c)
 *     SepCaptureHandles @ 0x1400032BC (SepCaptureHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400033B0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetTokenLowboxHandles @ 0x1400035E4 (SepSetTokenLowboxHandles.c)
 *     SepLocateTokenIntegrity @ 0x140004E94 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepCheckCapabilities @ 0x1403B47E4 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1403BDBE4 (SepCheckCreateLowBox.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     RtlIsPackageSid @ 0x1403C09B0 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1403C1068 (RtlIsCapabilitySid.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     SeSetMandatoryPolicyToken @ 0x1403C52F8 (SeSetMandatoryPolicyToken.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  int v9; // r14d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rax
  NTSTATUS result; // eax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r12d
  ULONG v19; // ebx
  PSID *v20; // rdi
  unsigned int v21; // r14d
  PSID v22; // r12
  __int64 v23; // r9
  char v24; // r14
  _QWORD *v25; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v27; // r14
  __int64 TokenIntegrity; // rax
  void *v29; // rcx
  unsigned __int8 v30; // al
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  char v36; // [rsp+50h] [rbp-98h]
  char v37; // [rsp+51h] [rbp-97h]
  char v38[6]; // [rsp+52h] [rbp-96h] BYREF
  PVOID v39; // [rsp+58h] [rbp-90h] BYREF
  PSID Sid; // [rsp+60h] [rbp-88h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-78h] BYREF
  PVOID v43; // [rsp+78h] [rbp-70h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v44; // [rsp+80h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-60h] BYREF
  int v46; // [rsp+90h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp-50h] BYREF
  ACCESS_MASK v48; // [rsp+A0h] [rbp-48h]
  _DWORD v49[3]; // [rsp+A4h] [rbp-44h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-38h]
  PHANDLE v51; // [rsp+B8h] [rbp-30h]
  __int64 v52; // [rsp+C0h] [rbp-28h]
  int v53; // [rsp+108h] [rbp+20h]

  v53 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v51 = TokenHandle;
  v41 = 0LL;
  memset(v49, 0, sizeof(v49));
  P = 0LL;
  Sid = 0LL;
  v44 = 0LL;
  Handle = 0LL;
  v52 = 0LL;
  v39 = 0LL;
  v46 = 1;
  v37 = 0;
  v36 = 0;
  v50 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  v38[0] = 0;
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
  result = ObReferenceObjectByHandle(ExistingTokenHandle, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v43, &v44);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(PackageSid, (int)Object, 1, (__int64)&Sid);
  if ( result < 0 )
    return result;
  v14 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)v43 + 48) != 1 && *((int *)v43 + 49) < 2 )
  {
    ObfDereferenceObject(v43);
    return -1073741659;
  }
  GrantedAccess = v44.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  v48 = GrantedAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(Capabilities, 0, (int)HandleInformation, v35, (__int64)&v41, (__int64)v49);
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_81;
  if ( !RtlIsPackageSid(v14) )
    goto LABEL_75;
  if ( ((v14[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_81;
  }
  v19 = 0;
  if ( CapabilityCount )
  {
    v20 = (PSID *)v41;
    while ( RtlIsCapabilitySid(*v20) )
    {
      v21 = 0;
      if ( v19 )
      {
        v22 = *v20;
        while ( !RtlEqualSid(v22, *(PSID *)(v41 + 16LL * v21)) )
        {
          if ( ++v21 >= v19 )
            goto LABEL_33;
        }
        break;
      }
LABEL_33:
      ++v19;
      v20 += 2;
      if ( v19 >= CapabilityCount )
      {
        GrantedAccess = v48;
        v9 = v53;
        goto LABEL_35;
      }
    }
LABEL_75:
    appended = -1073741811;
    goto LABEL_81;
  }
LABEL_35:
  appended = RtlGetAppContainerSidType(v14, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_81:
    v25 = v39;
    goto LABEL_82;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(v43, CapabilityCount, (PSID *)v41, v23, v38);
    if ( !v38[0] )
    {
      appended = -1073741790;
      goto LABEL_81;
    }
  }
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepDuplicateToken((_DWORD)v43, v9, 0, 1, 0, PreviousMode, 0, (__int64)&v39);
  if ( appended < 0 )
    goto LABEL_81;
  v24 = 1;
  v36 = 1;
  v25 = v39;
  appended = SeSetMandatoryPolicyToken(v39, &v46);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v27 = (PERESOURCE *)v39;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v39 + 6), 1u);
    _InterlockedOr(v32, 0);
    v37 = 1;
    v25 = v39;
    TokenIntegrity = SepLocateTokenIntegrity((__int64)v39);
    if ( TokenIntegrity )
    {
      v29 = *(void **)TokenIntegrity;
      v30 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v30 )
        *RtlSubAuthoritySid(v29, (unsigned int)v30 - 1) = 4096;
      v31 = AppContainerPrivilegesEnabledExt_0();
      appended = v31;
      if ( v31 == -1073741637 )
      {
        v25[9] &= 0x200800000uLL;
        v25[10] &= 0x200800000uLL;
        appended = 0;
      }
      else
      {
        if ( v31 < 0 )
          goto LABEL_80;
        v25[9] &= *(_QWORD *)&v49[1];
        v25[10] &= v50;
      }
      *((_DWORD *)v25 + 50) = v25[25] & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    if ( appended >= 0 )
    {
      v14 = Sid;
      appended = SepSetTokenCapabilities(v25, Sid, v41, CapabilityCount);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenLowboxNumber((__int64)v25, (__int64)v14);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenLowboxHandles((__int64)v25, (__int64)v14, HandleCount, (HANDLE *)P);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenPackage(v25, v14);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepAppendAceToTokenDefaultDacl((__int64)v25, v14);
      if ( appended < 0 )
        goto LABEL_82;
      v25[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v32, 0);
      ExReleaseResourceLite(v27[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v37 = 0;
      v25 = v39;
      appended = ObInsertObject(v39, 0LL, GrantedAccess, 1u, 0LL, &Handle);
      v14 = Sid;
      if ( appended < 0 )
        goto LABEL_55;
      appended = SepAppendAceToTokenObjectAcl(v25, 983551LL, Sid);
      if ( appended >= 0 )
      {
        SepAppendAceToTokenObjectAcl(v25, 8LL, SeAliasAdminsSid);
        ObfDereferenceObject(v25);
LABEL_55:
        v24 = 0;
        goto LABEL_56;
      }
LABEL_82:
      v24 = v36;
      goto LABEL_56;
    }
LABEL_80:
    v14 = Sid;
    goto LABEL_82;
  }
LABEL_56:
  if ( v37 )
  {
    if ( appended >= 0 )
      v25[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v39 + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v14 = Sid;
    v25 = v39;
  }
  if ( appended < 0 )
  {
    if ( v24 )
      ObfDereferenceObject(v25);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v41 )
  {
    LOBYTE(v15) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v41, v15);
  }
  if ( v14 )
  {
    LOBYTE(v16) = 1;
    LOBYTE(v15) = PreviousMode;
    SeReleaseSid(v14, v15, v16);
  }
  ObfDereferenceObject(v43);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *v51 = Handle;
  return appended;
}
