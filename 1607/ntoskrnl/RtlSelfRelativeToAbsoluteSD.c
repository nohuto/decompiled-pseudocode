/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x14052DE3C
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpQuerySecurityDescriptor @ 0x1404BA214 (RtlpQuerySecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlSelfRelativeToAbsoluteSD(
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PULONG AbsoluteSecurityDescriptorSize,
        PACL Dacl,
        PULONG DaclSize,
        PACL Sacl,
        PULONG SaclSize,
        PSID Owner,
        PULONG OwnerSize,
        PSID PrimaryGroup,
        PULONG PrimaryGroupSize)
{
  PULONG v15; // rax
  PULONG v16; // rcx
  PULONG v17; // rdx
  PULONG v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  unsigned int v22; // r15d
  NTSTATUS result; // eax
  PSID v24; // rbx
  PSID v25; // rbx
  PACL v26; // rbx
  ULONG v27; // [rsp+50h] [rbp-30h] BYREF
  ULONG v28; // [rsp+54h] [rbp-2Ch] BYREF
  void *v29; // [rsp+58h] [rbp-28h] BYREF
  void *v30; // [rsp+60h] [rbp-20h] BYREF
  void *v31; // [rsp+68h] [rbp-18h] BYREF
  void *Src; // [rsp+70h] [rbp-10h] BYREF
  ULONG v33; // [rsp+B0h] [rbp+30h] BYREF
  ULONG v34; // [rsp+B8h] [rbp+38h] BYREF

  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor((__int64)SelfRelativeSecurityDescriptor, &v29, &v28, &v30, &v27, &Src, &v34, &v31, &v33);
  v15 = PrimaryGroupSize;
  v16 = OwnerSize;
  v17 = SaclSize;
  v18 = DaclSize;
  v19 = v33;
  v20 = v34;
  v21 = v27;
  v22 = v28;
  if ( AbsoluteSecurityDescriptor
    && *AbsoluteSecurityDescriptorSize >= 0x28
    && v28 <= *OwnerSize
    && v34 <= *DaclSize
    && v33 <= *SaclSize
    && v27 <= *PrimaryGroupSize )
  {
    memmove(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, 0x14uLL);
    *((_QWORD *)AbsoluteSecurityDescriptor + 1) = 0LL;
    *((_WORD *)AbsoluteSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)AbsoluteSecurityDescriptor + 2) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 3) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 4) = 0LL;
    if ( v29 )
    {
      v24 = Owner;
      memmove(Owner, v29, 4 * *((unsigned __int8 *)v29 + 1) + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 1) = v24;
    }
    if ( v30 )
    {
      v25 = PrimaryGroup;
      memmove(PrimaryGroup, v30, 4 * *((unsigned __int8 *)v30 + 1) + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 2) = v25;
    }
    if ( v31 )
    {
      v26 = Sacl;
      memmove(Sacl, v31, *((unsigned __int16 *)v31 + 1));
      *((_QWORD *)AbsoluteSecurityDescriptor + 3) = v26;
    }
    if ( Src )
    {
      memmove(Dacl, Src, *((unsigned __int16 *)Src + 1));
      *((_QWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 40;
    *v15 = v21;
    result = -1073741789;
    *v16 = v22;
    *v17 = v19;
    *v18 = v20;
  }
  return result;
}
