/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x1403C0714
 * Callers:
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E72C0 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1403C07F4 (IopCreateSecurityDescriptorPerType.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlGetNtProductType @ 0x1404B8BC0 (RtlGetNtProductType.c)
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
  bool v11; // zf
  int SecurityDescriptorPerType; // eax
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
        goto LABEL_19;
      case ' ':
        goto LABEL_15;
      case '$':
        goto LABEL_19;
    }
    v11 = a1 == 53;
  }
  else
  {
    switch ( a1 )
    {
      case 0x14u:
        goto LABEL_19;
      case 2u:
        goto LABEL_23;
      case 3u:
        goto LABEL_15;
      case 7u:
LABEL_19:
        if ( a1 != 7 || (a2 & 1) == 0 )
          goto LABEL_15;
LABEL_23:
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
            goto LABEL_30;
          v15 = (unsigned __int8 *)SeWorldSid;
        }
        AclSize += 4 * (v15[1] + 4);
LABEL_30:
        PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
        v17 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
          v11 = ProductType == NtProductWinNt;
          v17->AclSize = AclSize;
          if ( v11 )
          {
            v18 = (PSID)SeInteractiveSid;
            v19 = -1073676288;
          }
          else
          {
            if ( a1 != 2 )
            {
LABEL_36:
              RtlCreateSecurityDescriptor(v8, 1u);
              RtlSetDaclSecurityDescriptor(v8, 1u, v17, 0);
              if ( v7 )
                *v7 |= 4u;
              *v10 = v17;
              SecurityDescriptorPerType = 0;
              goto LABEL_16;
            }
            v18 = SeWorldSid;
            v19 = 0x80000000;
          }
          RtlAddAccessAllowedAce(v17, 2u, v19, v18);
          goto LABEL_36;
        }
        return 0LL;
    }
    if ( a1 <= 9 )
      goto LABEL_15;
    v11 = a1 == 18;
  }
  if ( v11 )
    goto LABEL_19;
LABEL_15:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4);
LABEL_16:
  if ( SecurityDescriptorPerType < 0 )
    return 0LL;
  return v8;
}
