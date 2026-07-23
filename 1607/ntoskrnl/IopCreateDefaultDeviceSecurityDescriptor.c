/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x1404727EC
 * Callers:
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404D3B60 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1400AB154 (RtlGetNtProductType.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404728CC (IopCreateSecurityDescriptorPerType.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  void *v8; // rsi
  ACL **v10; // r12
  int SecurityDescriptorPerType; // eax
  bool v13; // zf
  USHORT AclSize; // r15
  unsigned __int8 *v15; // rax
  ACL *PoolWithTag; // rax
  ACL *v17; // rbp
  PSID v18; // r9
  ACCESS_MASK v19; // r8d
  _NT_PRODUCT_TYPE ProductType; // [rsp+60h] [rbp+18h] BYREF

  LOBYTE(ProductType) = a3;
  v7 = a7;
  v8 = a4;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case '-':
        goto LABEL_20;
      case ' ':
        goto LABEL_9;
      case '$':
        goto LABEL_20;
    }
    v13 = a1 == 53;
    goto LABEL_17;
  }
  if ( a1 == 20 )
  {
LABEL_20:
    if ( a1 != 7 || (a2 & 1) == 0 )
      goto LABEL_9;
LABEL_22:
    AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
    if ( !RtlGetNtProductType(&ProductType) )
      return 0LL;
    if ( ProductType == NtProductWinNt )
    {
      v15 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
        goto LABEL_29;
      v15 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v15[1] + 4);
LABEL_29:
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
      v13 = ProductType == NtProductWinNt;
      v17->AclSize = AclSize;
      if ( v13 )
      {
        v18 = (PSID)SeInteractiveSid;
        v19 = -1073676288;
      }
      else
      {
        if ( a1 != 2 )
        {
LABEL_35:
          RtlCreateSecurityDescriptor(v8, 1u);
          RtlSetDaclSecurityDescriptor(v8, 1u, v17, 0);
          if ( v7 )
            *v7 |= 4u;
          *v10 = v17;
          SecurityDescriptorPerType = 0;
          goto LABEL_10;
        }
        v18 = SeWorldSid;
        v19 = 0x80000000;
      }
      RtlAddAccessAllowedAce(v17, 2u, v19, v18);
      goto LABEL_35;
    }
    return 0LL;
  }
  if ( a1 == 2 )
    goto LABEL_22;
  if ( a1 != 3 )
  {
    if ( a1 != 7 )
    {
      if ( a1 <= 9 )
        goto LABEL_9;
      v13 = a1 == 18;
LABEL_17:
      if ( !v13 )
        goto LABEL_9;
      goto LABEL_20;
    }
    goto LABEL_20;
  }
LABEL_9:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4);
LABEL_10:
  if ( SecurityDescriptorPerType < 0 )
    return 0LL;
  return v8;
}
