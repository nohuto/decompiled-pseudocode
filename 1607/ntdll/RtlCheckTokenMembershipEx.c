/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180011040
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x180088E50 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x18000D450 (RtlInitializeSidEx.c)
 *     RtlCreateSecurityDescriptor @ 0x180010ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010F10 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010F70 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180010FD0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1800149B0 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180014CE4 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x1800A6A00 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A6A20 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, void *a2, int a3, _BYTE *a4)
{
  char v5; // r14
  int v8; // ebx
  void *Src; // [rsp+20h] [rbp-E0h]
  HANDLE v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _DWORD *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v23[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v24; // [rsp+C0h] [rbp-40h]
  _BYTE v25[80]; // [rsp+D0h] [rbp-30h] BYREF
  int v26[40]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v27[56]; // [rsp+1C0h] [rbp+C0h] BYREF

  v11 = 0LL;
  *a4 = 0;
  v5 = a3;
  if ( (a3 & 0xFFFFFFFE) == 0 )
  {
    if ( a1 )
    {
      v11 = a1;
    }
    else
    {
      v8 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v8 == -1073741700 )
      {
        v8 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
        if ( v8 < 0 )
          goto LABEL_17;
        v17 = 0LL;
        v19 = 0;
        v18 = 0LL;
        v20 = 0LL;
        v21 = v23;
        v16 = 48;
        v23[1] = 2;
        v23[0] = 12;
        v24 = 1;
        v8 = NtDuplicateToken(Handle, 12LL, &v16);
        NtClose(Handle);
      }
      if ( v8 < 0 )
      {
LABEL_17:
        if ( v11 )
          NtClose(v11);
        return (unsigned int)v8;
      }
    }
    RtlCreateSecurityDescriptor(v22, 1);
    RtlSetOwnerSecurityDescriptor((__int64)v22, (__int64)a2, 0);
    RtlSetGroupSecurityDescriptor((__int64)v22, (__int64)a2, 0);
    RtlCreateAcl(v26, 160LL, 2LL);
    RtlpAddKnownAce((int)v26, 2, 0, 1, a2, 0);
    if ( (v5 & 1) != 0 )
    {
      LODWORD(Src) = 1;
      RtlInitializeSidEx((__int64)v25, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      RtlAddAccessAllowedAce(v26, 2LL, 1LL, v25, Src);
    }
    RtlSetDaclSecurityDescriptor((__int64)v22, 1, (__int64)v26, 0);
    v12 = 56;
    v8 = ZwAccessCheck(v22, v11, 1LL, &RtlpCheckTokenMembershipGenericMapping, v27, &v12, &v14, &v13);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( v13 )
      {
        if ( v13 == -1073741790 )
          goto LABEL_9;
      }
      else if ( v14 == 1 )
      {
        *a4 = 1;
        goto LABEL_9;
      }
      v8 = v13;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v8;
    goto LABEL_17;
  }
  return 3221225485LL;
}
