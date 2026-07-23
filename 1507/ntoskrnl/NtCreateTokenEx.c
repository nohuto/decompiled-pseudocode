/*
 * XREFs of NtCreateTokenEx @ 0x14046EF1C
 * Callers:
 *     NtCreateToken @ 0x1406D5128 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     SeCaptureSecurityQos @ 0x140436EA8 (SeCaptureSecurityQos.c)
 *     SeCaptureAcl @ 0x14046BDC8 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14046BEE0 (SeReleaseAcl.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14046E008 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140553FE0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  PHANDLE v18; // rbx
  char PreviousMode; // si
  _QWORD *v20; // rcx
  PTOKEN_OWNER v21; // r12
  PTOKEN_DEFAULT_DACL v22; // r13
  PTOKEN_GROUPS v23; // r14
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v24; // r15
  NTSTATUS result; // eax
  __int64 v26; // rdx
  NTSTATUS v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v32; // [rsp+28h] [rbp-190h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+30h] [rbp-188h]
  int v35; // [rsp+30h] [rbp-188h]
  char v36; // [rsp+C0h] [rbp-F8h]
  _BYTE v37[2]; // [rsp+C2h] [rbp-F6h] BYREF
  NTSTATUS v38; // [rsp+C4h] [rbp-F4h]
  __int64 v39; // [rsp+C8h] [rbp-F0h] BYREF
  int PrivilegeCount; // [rsp+D0h] [rbp-E8h]
  unsigned int Policy; // [rsp+D4h] [rbp-E4h] BYREF
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v43; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+100h] [rbp-B8h] BYREF
  PSID_AND_ATTRIBUTES v48; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+120h] [rbp-98h] BYREF
  __int64 v52; // [rsp+128h] [rbp-90h] BYREF
  __int64 v53; // [rsp+130h] [rbp-88h] BYREF
  int v54[2]; // [rsp+138h] [rbp-80h] BYREF
  PHANDLE v55; // [rsp+140h] [rbp-78h]
  __int64 v56; // [rsp+148h] [rbp-70h] BYREF
  __int64 v57; // [rsp+150h] [rbp-68h] BYREF
  __int64 QuadPart; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v59[4]; // [rsp+160h] [rbp-58h] BYREF
  int v60; // [rsp+164h] [rbp-54h]
  __int64 v61[2]; // [rsp+170h] [rbp-48h] BYREF

  v18 = TokenHandle;
  v55 = TokenHandle;
  *(_QWORD *)v54 = 0LL;
  v37[0] = 0;
  v43 = 0LL;
  Count = 0;
  v48 = 0LL;
  v39 = 0LL;
  PrivilegeCount = 0;
  v46 = 0LL;
  LODWORD(v53) = 0;
  v47 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  Policy = 0;
  v36 = 0;
  v51 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v52 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v20 = v18;
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v20 = (_QWORD *)MmUserProbeAddress;
    *v20 = *v20;
    if ( ((unsigned __int8)ExpirationTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Groups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Source & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = Owner;
    if ( Owner && ((unsigned __int8)Owner & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)PrimaryGroup & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = DefaultDacl;
    if ( DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)AuthenticationId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = DeviceGroups;
    if ( DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = UserAttributes;
    if ( UserAttributes && ((unsigned __int8)UserAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v22 = DefaultDacl;
    v21 = Owner;
    v23 = DeviceGroups;
    v24 = UserAttributes;
  }
  if ( (unsigned int)(Type - 1) > 1 )
    return -1073741656;
  result = SeCaptureSecurityQos((__int64)ObjectAttributes, PreviousMode, v37, (__int64)v59);
  if ( result >= 0 )
  {
    if ( !v37[0] && Type == TokenImpersonation )
      return -1073741659;
    v38 = 0;
    v56 = (__int64)*AuthenticationId;
    QuadPart = ExpirationTime->QuadPart;
    v27 = SeCaptureSidAndAttributesArray(User, 0, v32, v34, (__int64)&v43, (__int64)&v52 + 4);
    v38 = v27;
    if ( v27 >= 0 )
    {
      Count = Groups->GroupCount;
      v30 = Count;
      v27 = SeCaptureSidAndAttributesArray(Groups->Groups, 0, v33, v35, (__int64)&v48, (__int64)&v39);
      v38 = v27;
      LODWORD(v39) = (v39 - 16 * v30 + 3) & 0xFFFFFFFC;
      v18 = v55;
    }
    if ( v27 >= 0 )
    {
      PrivilegeCount = Privileges->PrivilegeCount;
      v27 = SeCaptureLuidAndAttributesArray(
              (char *)Privileges->Privileges,
              PrivilegeCount,
              PreviousMode,
              v29,
              PoolType,
              v33,
              v35,
              &v46,
              &v53);
      v38 = v27;
    }
    if ( v21 )
    {
      if ( v27 < 0 )
      {
LABEL_50:
        if ( v22 && v27 >= 0 && v22->DefaultDacl )
        {
          v27 = SeCaptureAcl(
                  (char *)v22->DefaultDacl,
                  PreviousMode,
                  v28,
                  v29,
                  NonPagedPoolNx,
                  v33,
                  (PVOID *)&v44,
                  (unsigned int *)&v57);
          v38 = v27;
        }
        *(struct _TOKEN_SOURCE *)v61 = *Source;
        if ( v23 && v27 >= 0 )
        {
          HIDWORD(v39) = v23->GroupCount;
          v27 = SeCaptureSidAndAttributesArray(v23->Groups, 0, v33, v35, (__int64)&v45, (__int64)&v52);
          v38 = v27;
        }
        if ( v24 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v24, v26, 0LL, &v51);
          v38 = v27;
        }
        if ( DeviceAttributes && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(DeviceAttributes, v26, 0LL, &v50);
          v38 = v27;
        }
        if ( MandatoryPolicy && v27 >= 0 )
        {
          Policy = MandatoryPolicy->Policy;
          v36 = 1;
        }
        if ( v27 >= 0 )
          v27 = SepCreateTokenEx(
                  (HANDLE *)v54,
                  PreviousMode,
                  DesiredAccess,
                  (__int64)ObjectAttributes,
                  Type,
                  v60,
                  (__int64)&v56,
                  &QuadPart,
                  (_SID_AND_ATTRIBUTES *)v43,
                  Count,
                  v48,
                  v39,
                  PrivilegeCount,
                  v46,
                  (void *)v47,
                  (void *)v49,
                  (void *)v44,
                  v61,
                  v51,
                  v50,
                  SHIDWORD(v39),
                  v45,
                  (_DWORD *)((unsigned __int64)&Policy & -(__int64)(v36 != 0)),
                  0);
        if ( v43 )
          SeReleaseLuidAndAttributesArray((void *)v43, PreviousMode);
        if ( v48 )
          SeReleaseLuidAndAttributesArray(v48, PreviousMode);
        if ( v46 )
          SeReleaseLuidAndAttributesArray((void *)v46, PreviousMode);
        if ( v47 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v47, v26, v28);
        }
        if ( v49 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v49, v26, v28);
        }
        if ( v44 )
          SeReleaseAcl((void *)v44, PreviousMode);
        if ( v45 )
          SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
        if ( v51 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v50 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v27 >= 0 )
          *v18 = *(HANDLE *)v54;
        return v27;
      }
      v27 = SeCaptureSid(v21->Owner, PoolType, 1, (__int64)&v47);
      v38 = v27;
    }
    if ( v27 >= 0 )
    {
      v27 = SeCaptureSid(PrimaryGroup->PrimaryGroup, PoolType, 1, (__int64)&v49);
      v38 = v27;
    }
    goto LABEL_50;
  }
  return result;
}
