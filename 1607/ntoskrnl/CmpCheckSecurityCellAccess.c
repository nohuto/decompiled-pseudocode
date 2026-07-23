/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x1404CC9B8
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140601FB0 (CmpCheckKeyAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404038C0 (SeQuerySecurityDescriptorInfo.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  PVOID PoolWithTag; // rdi
  NTSTATUS v10; // ebx
  PVOID v12; // rax
  DWORD SecurityInformation; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v14[2]; // [rsp+58h] [rbp-1h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+60h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+Fh] BYREF
  ULONG Length; // [rsp+C0h] [rbp+67h] BYREF

  v14[0] = -1;
  v14[1] = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v14);
  v8 = v7;
  if ( v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(v7 + 16), 0x20204D43u);
    if ( PoolWithTag )
    {
      Length = *(_DWORD *)(v8 + 16);
      SecurityInformation = 31;
      ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(v8 + 20);
      v10 = SeQuerySecurityDescriptorInfo(&SecurityInformation, PoolWithTag, &Length, &ObjectsSecurityDescriptor);
      if ( v10 != -1073741789 )
      {
LABEL_4:
        if ( v10 >= 0 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          if ( SeAccessCheck(
                 PoolWithTag,
                 &SubjectContext,
                 0,
                 a4,
                 0,
                 0LL,
                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                 a3,
                 &SecurityInformation,
                 (PNTSTATUS)&Length) != 1 )
            v10 = -1073741790;
          SeReleaseSubjectContext(&SubjectContext);
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_9;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      v12 = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      PoolWithTag = v12;
      if ( v12 )
      {
        v10 = SeQuerySecurityDescriptorInfo(&SecurityInformation, v12, &Length, &ObjectsSecurityDescriptor);
        goto LABEL_4;
      }
    }
    v10 = -1073741670;
LABEL_9:
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v14);
    return (unsigned int)v10;
  }
  return 3221225626LL;
}
