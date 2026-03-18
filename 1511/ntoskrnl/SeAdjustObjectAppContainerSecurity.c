/*
 * XREFs of SeAdjustObjectAppContainerSecurity @ 0x140655164
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14051AE6C (SepCheckForAllAppPackagesAceRemoval.c)
 *     SepAppContainerAceProtectionApplies @ 0x140655280 (SepAppContainerAceProtectionApplies.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140655498 (SepBuildObjectSecurityDescriptor.c)
 *     SepSqmInformation @ 0x140655C10 (SepSqmInformation.c)
 */

__int64 __fastcall SeAdjustObjectAppContainerSecurity(const void **a1, void *a2, void *a3, _QWORD *a4, _BYTE *a5)
{
  _BYTE *v5; // r14
  int v10; // ebx
  SIZE_T v11; // r13
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  *a4 = 0LL;
  *v5 = 0;
  v10 = 0;
  SepCheckForAllAppPackagesAceRemoval(a2, a3, 0LL, &a5);
  v11 = (unsigned int)*(unsigned __int16 *)a1 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x67446553u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v11);
  memmove(v13, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString(&DestinationString, (PCWSTR)v13);
  if ( (unsigned __int8)SepAppContainerAceProtectionApplies(&DestinationString) )
  {
    LOBYTE(v15) = (_BYTE)a5;
    v10 = SepBuildObjectSecurityDescriptor(a2, a3, v15, &v17);
    if ( v10 >= 0 )
    {
      *a4 = v17;
      *v5 = 1;
    }
  }
  else if ( !(_BYTE)a5 )
  {
    SepSqmInformation(&DestinationString);
  }
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)v10;
}
