/*
 * XREFs of IopCreateSecurityDescriptorPerType @ 0x1404728CC
 * Callers:
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404727EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x14041F9D0 (RtlAddMandatoryAce.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 */

NTSTATUS __fastcall IopCreateSecurityDescriptorPerType(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        int a2,
        ACL **a3,
        _DWORD *a4)
{
  char v4; // si
  int v8; // edx
  int v9; // edx
  ACL *v10; // rbx
  NTSTATUS result; // eax
  int v12; // edx
  int v13; // edx
  unsigned __int16 v14; // bp
  ACL *PoolWithTag; // rax
  ACL *v16; // r15
  ULONG v17; // edx
  UCHAR v18; // [rsp+20h] [rbp-28h]
  PSID LabelSid; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = SePublicDefaultUnrestrictedDacl;
      goto LABEL_4;
    }
    v12 = v9 - 1;
    if ( !v12 )
    {
      v10 = SePublicOpenDacl;
      goto LABEL_10;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v10 = SePublicOpenUnrestrictedDacl;
LABEL_10:
      v4 = 1;
      goto LABEL_4;
    }
    if ( v13 != 1 )
      return -1073741811;
    v10 = SeSystemDefaultDacl;
  }
  else
  {
    v10 = SePublicDefaultDacl;
  }
LABEL_4:
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v4 == 1 )
  {
    v14 = 4 * (*(unsigned __int8 *)(*(_QWORD *)&SeLowMandatorySid + 1LL) + 6);
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x65536F49u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    RtlCreateAcl(PoolWithTag, v14, 2u);
    LODWORD(LabelSid) = 1;
    RtlAddMandatoryAce(v16, v17, 0, SeLowMandatorySid, v18, LabelSid);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
    *a3 = v16;
  }
  result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
  if ( a4 )
  {
    *a4 |= 4u;
    if ( v4 )
      *a4 |= 0x10u;
  }
  return result;
}
