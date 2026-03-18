/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x140601DF0
 * Callers:
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsReferenceProcessFilePointer @ 0x14046EFC0 (PsReferenceProcessFilePointer.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140489DD8 (RtlGetOwnerSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x14052121C (ObQuerySecurityObject.c)
 */

char CmpCheckExeOwnerForPca()
{
  PVOID v0; // rcx
  PVOID PoolWithTag; // rax
  void *v2; // rdi
  int v3; // ebx
  void *v4; // rcx
  BOOLEAN OwnerDefaulted; // [rsp+50h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PSID Owner; // [rsp+68h] [rbp+20h] BYREF

  if ( !CmpTrustedInstallerSid
    || (int)PsReferenceProcessFilePointer(
              (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process,
              (ULONG_PTR *)&Object) < 0 )
  {
    return 0;
  }
  if ( (unsigned int)ObQuerySecurityObject((__int64)Object, 1, 0LL, 0, &NumberOfBytes) != -1073741789 )
  {
    v0 = Object;
LABEL_5:
    ObfDereferenceObject(v0);
    return 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
  v0 = Object;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_5;
  v3 = ObQuerySecurityObject((__int64)Object, 1, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes);
  ObfDereferenceObject(Object);
  v4 = v2;
  if ( v3 >= 0 )
  {
    if ( RtlGetOwnerSecurityDescriptor(v2, &Owner, &OwnerDefaulted) >= 0
      && (!Owner || !RtlEqualSid(CmpTrustedInstallerSid, Owner)) )
    {
      ExFreePoolWithTag(v2, 0);
      return 1;
    }
    v4 = v2;
  }
  ExFreePoolWithTag(v4, 0);
  return 0;
}
