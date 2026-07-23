/*
 * XREFs of NtCreateLowBoxToken @ 0x14047AAA8
 * Callers:
 *     <none>
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x1400012D8 (AppContainerPrivilegesEnabledExt_0.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x140012AEC (SepLocateTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140080840 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x1400809F0 (SepCaptureHandles.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140479A2C (SeSetMandatoryPolicyToken.c)
 *     RtlIsPackageSid @ 0x140479C40 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x14047AA30 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14047B0A8 (RtlIsCapabilitySid.c)
 *     SepCheckCreateLowBox @ 0x14047B8B0 (SepCheckCreateLowBox.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  char PreviousMode; // r15
  __int64 v12; // rcx
  HANDLE *v13; // rcx
  NTSTATUS result; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rsi
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r12d
  ULONG v20; // ebx
  PSID *v21; // rdi
  unsigned int v22; // r14d
  PSID v23; // r12
  __int64 v24; // r9
  char v25; // r14
  _QWORD *v26; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v28; // r14
  __int64 TokenIntegrity; // rax
  void *v30; // rcx
  unsigned __int8 v31; // al
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  signed __int32 v39[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v42; // [rsp+30h] [rbp-B8h]
  char v43; // [rsp+50h] [rbp-98h]
  char v44; // [rsp+51h] [rbp-97h]
  char v45[6]; // [rsp+52h] [rbp-96h] BYREF
  PVOID v46; // [rsp+58h] [rbp-90h] BYREF
  PSID Sid; // [rsp+60h] [rbp-88h] BYREF
  __int64 v48; // [rsp+68h] [rbp-80h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-78h] BYREF
  PVOID v50; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v51; // [rsp+80h] [rbp-68h] BYREF
  ACCESS_MASK v52; // [rsp+84h] [rbp-64h]
  int v53; // [rsp+88h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v54; // [rsp+90h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-40h]
  __int64 v58; // [rsp+B0h] [rbp-38h]
  PHANDLE v59; // [rsp+B8h] [rbp-30h]
  __int64 v60; // [rsp+C0h] [rbp-28h]
  int v61; // [rsp+108h] [rbp+20h]

  v61 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v59 = TokenHandle;
  v48 = 0LL;
  v51 = 0;
  P = 0LL;
  Sid = 0LL;
  v54 = 0LL;
  Handle = 0LL;
  v60 = 0LL;
  v46 = 0LL;
  v53 = 1;
  v44 = 0;
  v43 = 0;
  v57 = 0LL;
  v58 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  v45[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      TokenHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *TokenHandle = *TokenHandle;
    v12 = HandleCount;
    if ( v12 * 8 )
    {
      if ( ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = &Handles[v12];
      if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || v13 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
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
  result = ObReferenceObjectByHandle(ExistingTokenHandle, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v50, &v54);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(PackageSid, PreviousMode, v15, v16, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v17 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)v50 + 48) != 1 && *((int *)v50 + 49) < 2 )
  {
    ObfDereferenceObject(v50);
    return -1073741659;
  }
  GrantedAccess = v54.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  v52 = GrantedAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 (char *)Capabilities,
                 CapabilityCount,
                 PreviousMode,
                 0LL,
                 0,
                 (int)HandleInformation,
                 v42,
                 (void **)&v48,
                 &v51);
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_81;
  if ( !RtlIsPackageSid(v17) )
    goto LABEL_75;
  if ( ((v17[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_81;
  }
  v20 = 0;
  if ( CapabilityCount )
  {
    v21 = (PSID *)v48;
    while ( RtlIsCapabilitySid(*v21) )
    {
      v22 = 0;
      if ( v20 )
      {
        v23 = *v21;
        while ( !RtlEqualSid(v23, *(PSID *)(v48 + 16LL * v22)) )
        {
          if ( ++v22 >= v20 )
            goto LABEL_33;
        }
        break;
      }
LABEL_33:
      ++v20;
      v21 += 2;
      if ( v20 >= CapabilityCount )
      {
        GrantedAccess = v52;
        v9 = v61;
        goto LABEL_35;
      }
    }
LABEL_75:
    appended = -1073741811;
    goto LABEL_81;
  }
LABEL_35:
  appended = RtlGetAppContainerSidType(v17, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_81:
    v26 = v46;
    goto LABEL_82;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(v50, CapabilityCount, (PSID *)v48, v24, v45);
    if ( !v45[0] )
    {
      appended = -1073741790;
      goto LABEL_81;
    }
  }
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepDuplicateToken((__int64)v50, v9, 0, 1, 0, PreviousMode, 0, (char **)&v46);
  if ( appended < 0 )
    goto LABEL_81;
  v25 = 1;
  v43 = 1;
  v26 = v46;
  appended = SeSetMandatoryPolicyToken((__int64)v46, &v53);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v28 = (PERESOURCE *)v46;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v46 + 6), 1u);
    _InterlockedOr(v39, 0);
    v44 = 1;
    v26 = v46;
    TokenIntegrity = SepLocateTokenIntegrity((__int64)v46);
    if ( TokenIntegrity )
    {
      v30 = *(void **)TokenIntegrity;
      v31 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v31 )
        *RtlSubAuthoritySid(v30, (unsigned int)v31 - 1) = 4096;
      v32 = AppContainerPrivilegesEnabledExt_0();
      appended = v32;
      if ( v32 == -1073741637 )
      {
        v26[9] &= 0x200800000uLL;
        v26[10] &= 0x200800000uLL;
        appended = 0;
      }
      else
      {
        if ( v32 < 0 )
          goto LABEL_80;
        v26[9] &= v57;
        v26[10] &= v58;
      }
      *((_DWORD *)v26 + 50) = v26[25] & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    if ( appended >= 0 )
    {
      v17 = Sid;
      appended = SepSetTokenCapabilities((__int64)v26, Sid, (void *)v48, CapabilityCount);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenLowboxNumber((__int64)v26, (__int64)v17);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenLowboxHandles((__int64)v26, (__int64)v17, HandleCount, (__int64)P);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenPackage((__int64)v26, v17);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepAppendAceToTokenDefaultDacl((__int64)v26, (__int64)v17);
      if ( appended < 0 )
        goto LABEL_82;
      v26[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v39, 0);
      ExReleaseResourceLite(v28[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
      v44 = 0;
      v26 = v46;
      appended = ObInsertObject(v46, 0LL, GrantedAccess, 1u, 0LL, &Handle);
      v17 = Sid;
      if ( appended < 0 )
        goto LABEL_55;
      appended = SepAppendAceToTokenObjectAcl((__int64)v26, 983551, Sid);
      if ( appended >= 0 )
      {
        SepAppendAceToTokenObjectAcl((__int64)v26, 8, SeAliasAdminsSid);
        ObfDereferenceObject(v26);
LABEL_55:
        v25 = 0;
        goto LABEL_56;
      }
LABEL_82:
      v25 = v43;
      goto LABEL_56;
    }
LABEL_80:
    v17 = Sid;
    goto LABEL_82;
  }
LABEL_56:
  if ( v44 )
  {
    if ( appended >= 0 )
      v26[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v39, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v46 + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
    v17 = Sid;
    v26 = v46;
  }
  if ( appended < 0 )
  {
    if ( v25 )
      ObfDereferenceObject(v26);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v48 )
    SeReleaseLuidAndAttributesArray((void *)v48, PreviousMode);
  if ( v17 )
    SeReleaseSid(v17, PreviousMode, 1);
  ObfDereferenceObject(v50);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *v59 = Handle;
  return appended;
}
