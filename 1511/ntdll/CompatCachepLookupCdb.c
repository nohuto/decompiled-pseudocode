/*
 * XREFs of CompatCachepLookupCdb @ 0x180075C80
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800C9B14 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x18009B430 (wcsrchr.c)
 *     NtApphelpCacheControl @ 0x1800A5A40 (NtApphelpCacheControl.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall CompatCachepLookupCdb(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  _QWORD v8[44]; // [rsp+20h] [rbp-168h] BYREF
  int v9; // [rsp+1A0h] [rbp+18h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0;
  v9 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( RtlInitUnicodeStringEx((PUNICODE_STRING)&v8[29], v6) < 0 )
    return 0LL;
  LODWORD(v8[43]) = 4;
  v8[42] = &v9;
  if ( (int)NtApphelpCacheControl(6LL, v8) >= 0 && (a2 & v9) != 0 )
    return 1;
  return v4;
}
