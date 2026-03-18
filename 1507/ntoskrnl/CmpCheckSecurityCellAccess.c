/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x1405598A8
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140659298 (CmpCheckKeyAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404D0650 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  PVOID PoolWithTag; // rdi
  NTSTATUS v10; // ebx
  PVOID v12; // rax
  DWORD SecurityInformation; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+54h] [rbp-2Ch] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+58h] [rbp-28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+20h] BYREF

  v14 = -1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v14);
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
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v14);
    return (unsigned int)v10;
  }
  return 3221225626LL;
}
