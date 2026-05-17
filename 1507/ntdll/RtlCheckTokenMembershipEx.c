/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x18004AF00
 * Callers:
 *     RtlCapabilityCheck @ 0x18004A7A0 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x1800CE760 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlAddAccessAllowedAce @ 0x18001FD50 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004B180 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x18004E790 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x18004E7F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004E850 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x18004F0B0 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x180093900 (ZwAccessCheck.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x180093BF0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180093C00 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180093D20 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, unsigned __int8 *a2, int a3, _BYTE *a4)
{
  char v5; // r14
  __int64 v8; // rdx
  int v9; // ebx
  void *Src; // [rsp+20h] [rbp-E0h]
  HANDLE v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v24[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v25; // [rsp+C0h] [rbp-40h]
  _BYTE v26[80]; // [rsp+D0h] [rbp-30h] BYREF
  char v27[160]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v28[56]; // [rsp+1C0h] [rbp+C0h] BYREF

  v12 = 0LL;
  *a4 = 0;
  v5 = a3;
  if ( (a3 & 0xFFFFFFFE) == 0 )
  {
    if ( a1 )
    {
      v12 = a1;
    }
    else
    {
      v9 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v9 == -1073741700 )
      {
        v9 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
        if ( v9 < 0 )
          goto LABEL_17;
        v18 = 0LL;
        v20 = 0;
        v19 = 0LL;
        v21 = 0LL;
        v22 = v24;
        v17 = 48;
        v24[1] = 2;
        v24[0] = 12;
        v25 = 1;
        v9 = NtDuplicateToken(Handle, 12LL, &v17);
        NtClose(Handle);
      }
      if ( v9 < 0 )
      {
LABEL_17:
        if ( v12 )
          NtClose(v12);
        return (unsigned int)v9;
      }
    }
    RtlCreateSecurityDescriptor(v23, 1LL);
    RtlSetOwnerSecurityDescriptor(v23, a2, 0LL);
    RtlSetGroupSecurityDescriptor(v23, a2, 0LL);
    RtlCreateAcl(v27, 160LL, 2LL);
    RtlpAddKnownAce(v27, 2u, 0, 1, a2, 0);
    if ( (v5 & 1) != 0 )
    {
      LODWORD(Src) = 1;
      RtlInitializeSidEx(v26, &RtlpAppPackageAuthority, 2LL, 2LL);
      RtlAddAccessAllowedAce((int)v27, 2, 1, v26);
    }
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v23, v8, v27, 0LL, Src);
    v15 = 56;
    v9 = ZwAccessCheck(v23, v12, 1LL, &RtlpCheckTokenMembershipGenericMapping, v28, &v15, &v13, &v14);
    if ( v9 >= 0 )
    {
      v9 = 0;
      if ( v14 )
      {
        if ( v14 == -1073741790 )
          goto LABEL_9;
      }
      else if ( v13 == 1 )
      {
        *a4 = 1;
        goto LABEL_9;
      }
      v9 = v14;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v9;
    goto LABEL_17;
  }
  return 3221225485LL;
}
