/*
 * XREFs of RtlQueryValidationRunlevel @ 0x1800F3100
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlQueryValidationRunlevel(__int64 a1)
{
  unsigned int v1; // edi
  int v2; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+44h] [rbp-24h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v1 = MEMORY[0x7FFE0258];
  v2 = 0;
  if ( a1 && MEMORY[0x7FFE0258] != -1 && (int)NtOpenKey() >= 0 )
  {
    if ( (int)NtQueryValueKey() >= 0 && v5 == 4 && v6 == 4 )
      v2 = v7;
    NtClose(Handle);
  }
  return v2 | v1;
}
