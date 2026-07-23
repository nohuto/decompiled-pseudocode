/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x1404D3B60
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009844 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403F5EAC (RtlGetSaclSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x140406184 (ObSetSecurityObjectByPointer.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404727EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PipGetRegistryDwordWithFallback @ 0x1404D3EC8 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404D3FA4 (PipGetRegistrySecurityWithFallback.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404D5328 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140543698 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, ACL *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  int v6; // r15d
  int v7; // esi
  __int64 v8; // rdi
  ACL *v9; // r13
  __int64 v10; // rax
  PSID v11; // r12
  int v12; // r14d
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rdx
  bool v16; // r14
  char RegistryDwordWithFallback; // al
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r15d
  int v23; // esi
  __int64 v24; // rdx
  int v25; // r15d
  void *RegistrySecurityWithFallback; // rax
  void *v27; // r14
  __int64 i; // rax
  int OwnerSecurityDescriptor; // edi
  char v30; // dl
  __int64 v31; // r8
  unsigned int v33; // edi
  char v34; // r8
  void *v35; // rax
  char v37; // [rsp+40h] [rbp-71h]
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-70h] BYREF
  BOOLEAN SaclPresent; // [rsp+42h] [rbp-6Fh] BYREF
  char v40; // [rsp+43h] [rbp-6Eh]
  char v41; // [rsp+44h] [rbp-6Dh]
  int v42; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-65h] BYREF
  PSID Owner; // [rsp+50h] [rbp-61h] BYREF
  int v45; // [rsp+58h] [rbp-59h] BYREF
  __int64 v46; // [rsp+60h] [rbp-51h]
  ACL *v47; // [rsp+68h] [rbp-49h] BYREF
  PACL Sacl; // [rsp+70h] [rbp-41h] BYREF
  __int64 v49; // [rsp+78h] [rbp-39h]
  __int64 v50; // [rsp+80h] [rbp-31h]
  _BYTE v51[40]; // [rsp+88h] [rbp-29h] BYREF

  v5 = a1;
  v46 = a4;
  v49 = a3;
  Sacl = a2;
  v6 = a3;
  v7 = (int)a2;
  if ( a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v8 = 0LL;
  v37 = 0;
  v50 = a1 + 312;
  v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 312);
  v11 = 0LL;
  v47 = 0LL;
  Owner = 0LL;
  v43 = 0;
  v12 = *(_DWORD *)(v10 + 32);
  v13 = a3;
  v14 = (int)a2;
  v45 = 0;
  v15 = *(_QWORD *)(v8 + 48);
  v42 = 0;
  v16 = (v12 & 0x800) != 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v15, v14, v13, a4, (__int64)&v43);
  v18 = *(_QWORD *)(v8 + 48);
  v40 = RegistryDwordWithFallback;
  v19 = PipGetRegistryDwordWithFallback(27, v18, v7, v6, v46, (__int64)&v45);
  v20 = *(_QWORD *)(v8 + 48);
  v41 = v19;
  PipGetRegistryDwordWithFallback(28, v20, v7, v6, v46, (__int64)&v42);
  if ( a5 || (v21 = *(_QWORD *)(v5 + 24)) == 0 )
    v21 = v5;
  v22 = 0;
  while ( v21 )
  {
    v22 |= *(_DWORD *)(v21 + 52);
    v21 = *(_QWORD *)(v21 + 24);
  }
  v23 = 0;
  v24 = *(_QWORD *)(v8 + 48);
  v25 = (v42 | v22) & 0x5010F;
  v42 = 0;
  RegistrySecurityWithFallback = (void *)PipGetRegistrySecurityWithFallback(
                                           v16 ? v46 : 0,
                                           v24,
                                           (_DWORD)Sacl,
                                           v16 ? v49 : 0,
                                           v46 & -(__int64)v16);
  v27 = RegistrySecurityWithFallback;
  if ( !RegistrySecurityWithFallback )
  {
    if ( !v40 )
    {
LABEL_10:
      if ( v41 && v45 )
        *(_DWORD *)(v5 + 48) |= 8u;
      *(_DWORD *)(v5 + 52) = v25 | *(_DWORD *)(v5 + 52) & 0xFFFAFEF0;
      for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(i + 24) )
        *(_DWORD *)(i + 52) |= v25;
      OwnerSecurityDescriptor = 0;
      if ( v27 )
        OwnerSecurityDescriptor = ObSetSecurityObjectByPointer(v5, v23, (__int64)v27);
      v30 = v37;
      v31 = v50;
      do
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 16LL) & 0x100) != 0 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 40LL) + 396LL) |= 0xC00000u;
        if ( v37 && *(_QWORD *)(v5 + 272) )
          *(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) |= 0x800u;
        v5 = *(_QWORD *)(v5 + 24);
      }
      while ( v5 );
      goto LABEL_20;
    }
    memset(v51, 0, sizeof(v51));
    v33 = v43;
    v35 = IopCreateDefaultDeviceSecurityDescriptor(v43, v25, v34, v51, &v47, (__int64)&Owner, &v42);
    v9 = v47;
    v27 = v35;
    v11 = Owner;
    if ( !v35 )
    {
      OwnerSecurityDescriptor = -1073741823;
      goto LABEL_21;
    }
    v23 = v42;
    v37 = 1;
LABEL_40:
    if ( v40 )
      *(_DWORD *)(v5 + 72) = v33;
    goto LABEL_10;
  }
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(RegistrySecurityWithFallback, &Owner, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
  {
    v30 = 0;
  }
  else
  {
    v23 = Owner != 0LL;
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(v27, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor >= 0 )
    {
      if ( Owner )
        v23 |= 2u;
      OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(v27, &SaclPresent, &Sacl, &OwnerDefaulted);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        if ( SaclPresent )
          v23 |= 8u;
        OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(v27, &SaclPresent, &Sacl, &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          v33 = v43;
          if ( SaclPresent )
            v23 |= 4u;
          goto LABEL_40;
        }
      }
    }
    v30 = 0;
  }
LABEL_20:
  if ( v27 && !v30 )
    ExFreePoolWithTag(v27, 0);
LABEL_21:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)OwnerSecurityDescriptor;
}
