/*
 * XREFs of RtlCapabilityCheck @ 0x18004A7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180050F90 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlCapabilityCheck(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v4; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h]
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+94h] [rbp-6Ch]
  int v27; // [rsp+9Ch] [rbp-64h]
  _BYTE v28[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  _BYTE v31[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v32[48]; // [rsp+E0h] [rbp-20h] BYREF

  v16 = 1280;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v4 = 0LL;
  v17 = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v14[0] = 0;
  v13 = 0;
  v15 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    v7 = RtlDeriveCapabilitySidsFromName(a2, v31, v32);
    if ( v7 < 0 )
      goto LABEL_19;
    if ( (MEMORY[0x7FFE02F0] & 0x100) != 0
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          v20 = 48,
          p_DestinationString = &DestinationString,
          v21 = 0LL,
          v23 = 64,
          v24 = 0LL,
          (int)NtOpenKey(&v17, 0x80000000LL, &v20) >= 0)
      && (int)NtQueryValueKey(v17, a2, 2LL, &v25, 16, v19) >= 0 )
    {
      LOBYTE(v8) = 1;
      RtlInitializeSid(v28, &v15, v8);
      v9 = 0LL;
      v29 = 18;
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(a1, v31, 1LL, &v13);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( v13 )
        goto LABEL_17;
      LOBYTE(v10) = 1;
      RtlInitializeSid(v28, &v15, v10);
      v29 = 18;
      v7 = RtlCheckTokenMembershipEx(a1, v28, 0LL, &v13);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( v13 )
        goto LABEL_17;
      v29 = 4;
      v9 = 1LL;
    }
    v7 = RtlCheckTokenMembershipEx(a1, v28, v9, &v13);
    if ( v7 >= 0 )
    {
      if ( v13
        || (LOBYTE(v11) = 2,
            RtlInitializeSid(v28, &v15, v11),
            v29 = 32,
            v30 = 544,
            v7 = RtlCheckTokenMembershipEx(a1, v28, 0LL, &v13),
            v7 >= 0)
        && v13 )
      {
LABEL_17:
        v7 = RtlCheckTokenCapability(a1, v32, v14);
        if ( v7 >= 0 )
          *a3 = v14[0];
      }
    }
LABEL_19:
    v4 = v17;
    goto LABEL_21;
  }
  v7 = -1073741811;
LABEL_21:
  if ( v4 )
    NtClose(v4);
  return (unsigned int)v7;
}
