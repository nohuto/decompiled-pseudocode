/*
 * XREFs of NtCreateTokenEx @ 0x140476AAC
 * Callers:
 *     NtCreateToken @ 0x1406927C0 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SeCaptureSecurityQos @ 0x1404119A8 (SeCaptureSecurityQos.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14045F228 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     SeReleaseAcl @ 0x140478688 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x140479ABC (SeCaptureAcl.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14047B0EC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047B324 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v20; // rcx
  PTOKEN_OWNER v21; // r12
  PTOKEN_GROUPS v22; // r14
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v23; // r13
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
  char v36; // [rsp+C0h] [rbp-F8h] BYREF
  char v37; // [rsp+C1h] [rbp-F7h]
  char v38; // [rsp+C2h] [rbp-F6h]
  NTSTATUS v39; // [rsp+C4h] [rbp-F4h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  int GroupCount; // [rsp+D0h] [rbp-E8h]
  int PrivilegeCount; // [rsp+D4h] [rbp-E4h]
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v44; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-C8h] BYREF
  PSID v47; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+118h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+120h] [rbp-98h] BYREF
  __int64 v53; // [rsp+128h] [rbp-90h] BYREF
  __int64 v54; // [rsp+130h] [rbp-88h] BYREF
  int v55[2]; // [rsp+138h] [rbp-80h] BYREF
  __int64 v56; // [rsp+140h] [rbp-78h] BYREF
  PHANDLE v57; // [rsp+148h] [rbp-70h]
  __int64 QuadPart; // [rsp+150h] [rbp-68h] BYREF
  __int64 v59; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v60[4]; // [rsp+160h] [rbp-58h] BYREF
  int v61; // [rsp+164h] [rbp-54h]
  __int64 v62[2]; // [rsp+170h] [rbp-48h] BYREF

  v18 = TokenHandle;
  v57 = TokenHandle;
  *(_QWORD *)v55 = 0LL;
  v36 = 0;
  v44 = 0LL;
  v53 = 0LL;
  Count = 0;
  v45 = 0LL;
  v40 = 0LL;
  PrivilegeCount = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v37 = 0;
  v51 = 0LL;
  v52 = 0LL;
  GroupCount = 0;
  v50 = 0LL;
  LODWORD(v54) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v20 = (__int64)v18;
    if ( (unsigned __int64)v18 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
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
    if ( DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)AuthenticationId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = DeviceGroups;
    if ( DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = DeviceAttributes;
    if ( DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = UserAttributes;
    if ( UserAttributes && ((unsigned __int8)UserAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v21 = Owner;
    v22 = DeviceGroups;
    v23 = DeviceAttributes;
    v24 = UserAttributes;
  }
  if ( (unsigned int)(Type - 1) > 1 )
    return -1073741656;
  result = SeCaptureSecurityQos((__int64)ObjectAttributes, PreviousMode, &v36, (__int64)v60);
  if ( result >= 0 )
  {
    if ( Type == TokenImpersonation && !v36 )
      return -1073741659;
    v39 = 0;
    v59 = (__int64)*AuthenticationId;
    QuadPart = ExpirationTime->QuadPart;
    v27 = SeCaptureSidAndAttributesArray(User, 0, v32, v34, (__int64)&v44, (__int64)&v53);
    v39 = v27;
    if ( v27 >= 0 )
    {
      Count = Groups->GroupCount;
      v30 = Count;
      v27 = SeCaptureSidAndAttributesArray(Groups->Groups, 0, v33, v35, (__int64)&v45, (__int64)&v40);
      v39 = v27;
      LODWORD(v40) = (v40 - 16 * v30 + 3) & 0xFFFFFFFC;
      v18 = v57;
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
              (_DWORD *)&v53 + 1);
      v39 = v27;
    }
    if ( v21 )
    {
      if ( v27 < 0 )
      {
LABEL_50:
        if ( DefaultDacl && v27 >= 0 && DefaultDacl->DefaultDacl )
        {
          v27 = SeCaptureAcl(DefaultDacl->DefaultDacl, NonPagedPoolNx, v33, (__int64)&v49, (__int64)&v56);
          v39 = v27;
        }
        *(struct _TOKEN_SOURCE *)v62 = *Source;
        if ( v22 && v27 >= 0 )
        {
          GroupCount = v22->GroupCount;
          v27 = SeCaptureSidAndAttributesArray(v22->Groups, 0, v33, v35, (__int64)&v50, (__int64)&v54);
          v39 = v27;
        }
        if ( v24 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v24, v26, 0LL, &v51);
          v39 = v27;
        }
        if ( v23 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v23, v26, 0LL, &v52);
          v39 = v27;
        }
        if ( MandatoryPolicy && v27 >= 0 )
        {
          HIDWORD(v40) = (_TOKEN_MANDATORY_POLICY)MandatoryPolicy->Policy;
          v37 = 1;
        }
        if ( v27 >= 0 )
          v27 = SepCreateTokenEx(
                  (HANDLE *)v55,
                  PreviousMode,
                  DesiredAccess,
                  (__int64)ObjectAttributes,
                  Type,
                  v61,
                  (__int64)&v59,
                  &QuadPart,
                  (_SID_AND_ATTRIBUTES *)v44,
                  Count,
                  (_SID_AND_ATTRIBUTES *)v45,
                  v40,
                  PrivilegeCount,
                  (char **)v46,
                  v47,
                  (void *)v48,
                  (void *)v49,
                  v62,
                  v51,
                  v52,
                  GroupCount,
                  v50,
                  (_DWORD *)(((unsigned __int64)&v40 + 4) & -(__int64)(v37 != 0)),
                  0);
        if ( v44 )
          SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
        if ( v45 )
          SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
        if ( v46 )
          SeReleaseLuidAndAttributesArray((void *)v46, PreviousMode);
        if ( v47 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v47, v26, v28);
        }
        if ( v48 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v48, v26, v28);
        }
        if ( v49 )
        {
          LOBYTE(v26) = PreviousMode;
          SeReleaseAcl(v49, v26);
        }
        if ( v50 )
          SeReleaseLuidAndAttributesArray((void *)v50, PreviousMode);
        if ( v51 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v52 )
          SepFreeCapturedTokenSecurityAttributesInformation();
        if ( v27 >= 0 )
          *v18 = *(HANDLE *)v55;
        return v27;
      }
      v27 = SeCaptureSid(v21->Owner, PoolType, 1, (__int64)&v47);
      v39 = v27;
    }
    if ( v27 >= 0 )
    {
      v27 = SeCaptureSid(PrimaryGroup->PrimaryGroup, PoolType, 1, (__int64)&v48);
      v39 = v27;
    }
    goto LABEL_50;
  }
  return result;
}
