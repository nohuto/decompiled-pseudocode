/*
 * XREFs of RtlCapabilityCheck @ 0x18000DA10
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x18000C630 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlIsMultiSessionSku @ 0x180072080 (RtlIsMultiSessionSku.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlCapabilityCheck(__int64 a1, __int64 a2, _BYTE *a3)
{
  HANDLE v4; // rcx
  int v7; // ebx
  __int64 v8; // r8
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[8]; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+94h] [rbp-6Ch]
  int v24; // [rsp+9Ch] [rbp-64h]
  _BYTE v25[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  _BYTE v28[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[48]; // [rsp+E0h] [rbp-20h] BYREF

  v13 = 1280;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v4 = 0LL;
  Handle = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v11[0] = 0;
  v10 = 0;
  v12 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    v7 = RtlDeriveCapabilitySidsFromName(a2, (__int64)v28, (__int64)v29);
    if ( v7 < 0 )
      goto LABEL_16;
    if ( (unsigned __int8)RtlIsMultiSessionSku()
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          v17 = 48,
          p_DestinationString = &DestinationString,
          v18 = 0LL,
          v20 = 64,
          v21 = 0LL,
          (int)NtOpenKey(&Handle, 0x80000000LL, &v17) >= 0)
      && (int)NtQueryValueKey(Handle, a2, 2LL, &v22, 16, v16) >= 0 )
    {
      RtlInitializeSid((__int64)v25, (__int64)&v12, 1u);
      v8 = 0LL;
      v26 = 18;
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(a1, v28, 1LL, &v10);
      if ( v7 < 0 )
        goto LABEL_16;
      if ( v10 )
        goto LABEL_14;
      RtlInitializeSid((__int64)v25, (__int64)&v12, 1u);
      v26 = 18;
      v7 = RtlCheckTokenMembershipEx(a1, v25, 0LL, &v10);
      if ( v7 < 0 )
        goto LABEL_16;
      if ( v10 )
        goto LABEL_14;
      v26 = 4;
      v8 = 1LL;
    }
    v7 = RtlCheckTokenMembershipEx(a1, v25, v8, &v10);
    if ( v7 >= 0 )
    {
      if ( v10
        || (RtlInitializeSid((__int64)v25, (__int64)&v12, 2u),
            v26 = 32,
            v27 = 544,
            v7 = RtlCheckTokenMembershipEx(a1, v25, 0LL, &v10),
            v7 >= 0)
        && v10 )
      {
LABEL_14:
        v7 = RtlCheckTokenCapability(a1, v29, v11);
        if ( v7 >= 0 )
          *a3 = v11[0];
      }
    }
LABEL_16:
    v4 = Handle;
    goto LABEL_17;
  }
  v7 = -1073741811;
LABEL_17:
  if ( v4 )
    NtClose(v4);
  return (unsigned int)v7;
}
