/*
 * XREFs of RtlCheckTokenCapability @ 0x18000DDF0
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlIsCapabilitySid @ 0x18000DD20 (RtlIsCapabilitySid.c)
 *     RtlCreateSecurityDescriptor @ 0x180010ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010F10 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010F70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180010FD0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1800149B0 (RtlAddAccessAllowedAce.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A6A00 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A6A20 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(void *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-E0h]
  HANDLE v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h]
  _DWORD *v23; // [rsp+88h] [rbp-78h]
  _BYTE v24[48]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25[12]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v26[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v27; // [rsp+128h] [rbp+28h]
  _BYTE v28[160]; // [rsp+130h] [rbp+30h] BYREF
  char v29[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v12 = 0LL;
  *a3 = 0;
  if ( !RtlIsCapabilitySid(a2) )
  {
    v9 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v12 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  v9 = NtOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v9 == -1073741700 )
  {
    v9 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v9 < 0 )
      goto LABEL_16;
    v19 = 0LL;
    v21 = 0;
    v20 = 0LL;
    v22 = 0LL;
    v23 = v26;
    v18 = 48;
    v26[0] = 12;
    v26[1] = 2;
    v27 = 1;
    v9 = NtDuplicateToken(Handle, 8LL, &v18);
    NtClose(Handle);
  }
  if ( v9 >= 0 )
  {
    v7 = 0LL;
LABEL_4:
    v13 = 88;
    NtQueryInformationToken(v7, 1LL, v25);
    RtlCreateSecurityDescriptor(v24, 1LL);
    RtlSetOwnerSecurityDescriptor(v24, v25[0], 0LL);
    RtlSetGroupSecurityDescriptor(v24, v25[0], 0LL);
    RtlCreateAcl(v28, 160LL, 2LL);
    RtlAddAccessAllowedAce(v28, 2LL, 65537LL, v25[0], &v13);
    RtlAddAccessAllowedAce(v28, 2LL, 65537LL, a2, v11);
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v24, v8, v28, 0LL);
    v14 = 56;
    v9 = ZwAccessCheck(v24, v12, 65537LL, &RtlpCheckTokenCapabilityGenericMapping, v29, &v14, &v16, &v15);
    if ( v9 >= 0 )
    {
      if ( !v15 && v16 == 65537 )
        *a3 = 1;
      v9 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v9;
  }
LABEL_16:
  if ( v12 )
    NtClose(v12);
  return (unsigned int)v9;
}
