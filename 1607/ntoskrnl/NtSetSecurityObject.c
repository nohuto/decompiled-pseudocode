/*
 * XREFs of NtSetSecurityObject @ 0x140503BA4
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A55C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140688E7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403F5EAC (RtlGetSaclSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x140406184 (ObSetSecurityObjectByPointer.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeSetSecurityAccessMask @ 0x140503EAC (SeSetSecurityAccessMask.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140504198 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SepRmGlobalSaclFind @ 0x1406956E8 (SepRmGlobalSaclFind.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  unsigned int v3; // r15d
  SECURITY_INFORMATION v5; // ebx
  ACCESS_MASK v6; // esi
  KPROCESSOR_MODE PreviousMode; // r12
  HANDLE v8; // r10
  NTSTATUS v9; // edi
  int v10; // eax
  _QWORD *v11; // r14
  void *v12; // r13
  PVOID v13; // r15
  int v14; // ecx
  int v15; // r9d
  PVOID v16; // r12
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v19; // r9
  char v20; // al
  __int16 HandleInformation; // [rsp+28h] [rbp-81h]
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-39h] BYREF
  PVOID v23; // [rsp+78h] [rbp-31h] BYREF
  PVOID SecurityDescriptora; // [rsp+80h] [rbp-29h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+88h] [rbp-21h] BYREF
  PVOID P; // [rsp+90h] [rbp-19h] BYREF
  PVOID v27; // [rsp+98h] [rbp-11h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-9h] BYREF
  _WORD *v29; // [rsp+A8h] [rbp-1h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v30; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+Fh] BYREF
  PACL Sacl; // [rsp+C0h] [rbp+17h] BYREF
  BOOLEAN SaclPresent; // [rsp+120h] [rbp+77h] BYREF
  KPROCESSOR_MODE v35; // [rsp+128h] [rbp+7Fh]

  v3 = 0;
  v23 = 0LL;
  v5 = SecurityInformation;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v27 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  if ( (SecurityInformation & 0x10000) != 0 )
  {
    v5 = SecurityInformation | 0xFF;
    if ( (SecurityInformation & 0x80) == 0 )
      v5 = SecurityInformation & 0xFFFFFF00 | 0x7F;
  }
  SeSetSecurityAccessMask(v5, &DesiredAccess);
  v6 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
  v9 = ObReferenceObjectByHandle(v8, DesiredAccess, 0LL, PreviousMode, &Object, &v30);
  if ( v9 < 0 )
    return v9;
  v10 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v29);
  v11 = Object;
  v9 = v10;
  if ( v10 < 0 )
  {
LABEL_31:
    ObfDereferenceObject(v11);
    return v9;
  }
  v12 = v29;
  if ( (v29[1] & 0x10) == 0 && (v5 & 0x10000) != 0 )
    v5 &= 0xFFFFFF07;
  if ( ((v5 & 1) == 0 || *((_DWORD *)v29 + 1)) && ((v5 & 2) == 0 || *((_DWORD *)v29 + 2)) )
  {
    if ( (v30.HandleAttributes & 4) == 0 )
      v6 &= 0xFFF3FFFF;
    if ( v6 )
    {
      v9 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, &SecurityDescriptora);
      if ( v9 < 0 )
        goto LABEL_44;
      if ( (v6 & 0xFEFFFFFF) != 0 )
      {
        SaclPresent = 0;
        SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(SecurityDescriptora, &SaclPresent, &Sacl, SaclDefaulted);
        v9 = SaclSecurityDescriptor;
        v20 = SaclPresent;
        if ( !SaclPresent )
        {
          v31 = 0LL;
          LOBYTE(v19) = 1;
          v20 = (unsigned int)SepRmGlobalSaclFind(
                                &v31,
                                0LL,
                                ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v11 - 24) ^ ((unsigned __int16)((_WORD)v11 - 48) >> 8))]
                              + 16,
                                v19) != -1073741772;
        }
        if ( v9 < 0 )
          goto LABEL_44;
        if ( v20 )
        {
          if ( (v6 & 0x80000) != 0 )
            v3 = v5 & 0x13;
          if ( (v6 & 0x40000) != 0 )
            v3 |= 4u;
          v9 = ObpAllocateAndQuerySecurityDescriptorInfo(v11, v3, &v23);
        }
        else
        {
          v6 &= 0xFFF3FFFF;
        }
      }
    }
    if ( v9 >= 0 )
    {
      if ( (v5 & 0x40) != 0
        && ((POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)] != IoFileObjectType
         || (*(_DWORD *)(v11[1] + 52LL) & 0x10) == 0) )
      {
        v9 = ObpAllocateAndQuerySecurityDescriptorInfo(v11, 64LL, &v27);
      }
      v13 = v23;
      if ( v9 < 0 )
        goto LABEL_20;
      if ( (v5 & 0x20) != 0
        && ((POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)] != IoFileObjectType
         || (*(_DWORD *)(v11[1] + 52LL) & 0x10) == 0) )
      {
        v9 = ObpAllocateAndQuerySecurityDescriptorInfo(v11, 32LL, &P);
      }
      if ( v9 >= 0
        && (v9 = ObSetSecurityObjectByPointer((__int64)v11, v5, (__int64)v12), v9 >= 0)
        && (v6 || (v5 & 0x20) != 0) )
      {
        v16 = P;
        SeSecurityDescriptorChangedAuditAlarm(
          v14,
          (_DWORD)v11,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)]
        + 16,
          v15,
          (__int64)Handle,
          HandleInformation,
          v6,
          v5,
          (__int64)v13,
          (__int64)SecurityDescriptora,
          (__int64)P,
          (__int64)v27,
          (__int64)v12);
      }
      else
      {
LABEL_20:
        v16 = P;
      }
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      PreviousMode = v35;
      goto LABEL_26;
    }
LABEL_44:
    v13 = v23;
LABEL_26:
    if ( SecurityDescriptora )
      ExFreePoolWithTag(SecurityDescriptora, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SeReleaseSecurityDescriptor(v12, PreviousMode, 1);
    goto LABEL_31;
  }
  SeReleaseSecurityDescriptor(v29, PreviousMode, 1);
  ObfDereferenceObject(Object);
  return -1073741703;
}
