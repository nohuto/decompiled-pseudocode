/*
 * XREFs of RtlAreLongPathsEnabled @ 0x180082FF0
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222B0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlSetCurrentDirectory_U @ 0x180079060 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

char RtlAreLongPathsEnabled()
{
  char v1; // cl
  HANDLE Handle; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v3[8]; // [rsp+38h] [rbp-1h] BYREF
  int v4; // [rsp+40h] [rbp+7h] BYREF
  __int64 v5; // [rsp+48h] [rbp+Fh]
  const wchar_t *v6; // [rsp+50h] [rbp+17h]
  int v7; // [rsp+58h] [rbp+1Fh]
  __int128 v8; // [rsp+60h] [rbp+27h]
  _BYTE v9[4]; // [rsp+70h] [rbp+37h] BYREF
  int v10; // [rsp+74h] [rbp+3Bh]
  int v11; // [rsp+78h] [rbp+3Fh]
  char v12; // [rsp+7Ch] [rbp+43h]

  Handle = 0LL;
  if ( byte_180152B30 )
    return byte_180152B40;
  v5 = 0LL;
  v6 = L"|~";
  v4 = 48;
  v7 = 64;
  v8 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v4) < 0 )
  {
LABEL_11:
    byte_180152B30 = 1;
    return byte_180152B40;
  }
  if ( (int)NtQueryValueKey(Handle, L" \"", 2LL, v9, 20, v3) < 0 )
  {
    NtClose(Handle);
    goto LABEL_11;
  }
  if ( v10 == 4 )
  {
    v1 = byte_180152B40;
    if ( v11 == 4 )
      v1 = v12;
    byte_180152B40 = v1;
  }
  byte_180152B30 = 1;
  NtClose(Handle);
  return byte_180152B40;
}
