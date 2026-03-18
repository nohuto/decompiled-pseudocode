/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1404EBADC
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1404EB778 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlGetAce @ 0x140003350 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14001B408 (RtlGetDaclSecurityDescriptor.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x140439240 (NtQuerySecurityObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x140495070 (NtSetSecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404A9920 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x1404B9688 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x140648A84 (RtlSelfRelativeToAbsoluteSD2.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  void *v7; // rcx
  ULONG i; // r14d
  NTSTATUS Ace; // eax
  _BYTE *v10; // rsi
  void *v11; // rcx
  NTSTATUS SelfRelativeSD; // eax
  ULONG v14; // r14d
  ULONG v15; // r15d
  PVOID v16; // rax
  void *v17; // rsi
  NTSTATUS v18; // r14d
  PVOID v19; // rax
  ULONG Length; // [rsp+30h] [rbp-50h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+34h] [rbp-4Ch] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+35h] [rbp-4Bh] BYREF
  PSID Owner; // [rsp+38h] [rbp-48h] BYREF
  PACL Dacla; // [rsp+40h] [rbp-40h] BYREF
  __int16 Sid2; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+4Ah] [rbp-36h]
  __int16 v27; // [rsp+4Eh] [rbp-32h]
  int v28; // [rsp+50h] [rbp-30h]
  int v29; // [rsp+54h] [rbp-2Ch]
  __int16 v30; // [rsp+60h] [rbp-20h] BYREF
  int v31; // [rsp+62h] [rbp-1Eh]
  __int16 v32; // [rsp+66h] [rbp-1Ah]
  int v33; // [rsp+68h] [rbp-18h]

  v2 = 0;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  if ( !PoolWithTag )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, PoolWithTag, Length, &Length);
  v7 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_23;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(PoolWithTag, DaclPresent, &Dacla, &DaclDefaulted);
  v7 = PoolWithTag;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_23;
  DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(PoolWithTag, &Owner, &DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    v7 = PoolWithTag;
LABEL_23:
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v31 = 0;
  v26 = 0;
  v30 = 257;
  v32 = 1280;
  v33 = 18;
  Sid2 = 513;
  v27 = 1280;
  v28 = 32;
  v29 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent[0] && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(Dacla, i, &Owner);
      v10 = Owner;
      if ( Ace < 0 )
        v10 = 0LL;
      Owner = v10;
      if ( !v10 )
        break;
      if ( !*v10 && RtlEqualSid(v10 + 8, &v30) )
      {
        if ( (v10[1] & 3) == 3 )
          goto LABEL_17;
        v10[1] |= 3u;
        SelfRelativeSD = NtSetSecurityObject(Handle, 4u, PoolWithTag);
        goto LABEL_25;
      }
    }
  }
  v14 = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(PoolWithTag, &Length) != -1073741789 )
    goto LABEL_29;
  v15 = Length;
  v16 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
  v17 = v16;
  if ( !v16 )
    goto LABEL_36;
  memmove(v16, PoolWithTag, v14);
  ExFreePoolWithTag(PoolWithTag, 0);
  Length = v15;
  PoolWithTag = v17;
  v18 = RtlSelfRelativeToAbsoluteSD2(v17, &Length);
  if ( v18 >= 0 )
  {
LABEL_29:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(PoolWithTag, &Sid2, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(PoolWithTag, 1u, Dacl, 0), SelfRelativeSD < 0)
      || (Length = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(PoolWithTag, 0LL, &Length), SelfRelativeSD != -1073741789) )
    {
LABEL_25:
      v2 = SelfRelativeSD;
LABEL_17:
      v11 = PoolWithTag;
LABEL_18:
      ExFreePoolWithTag(v11, 0);
      return v2;
    }
    v19 = ExAllocatePoolWithTag(PagedPool, Length, 0x536C6F56u);
    v17 = v19;
    if ( v19 )
    {
      v18 = RtlMakeSelfRelativeSD(PoolWithTag, v19, &Length);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v18 >= 0 )
      {
        v2 = NtSetSecurityObject(Handle, 5u, v17);
        v11 = v17;
        goto LABEL_18;
      }
      goto LABEL_35;
    }
LABEL_36:
    v2 = -1073741670;
    goto LABEL_17;
  }
LABEL_35:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v18;
}
