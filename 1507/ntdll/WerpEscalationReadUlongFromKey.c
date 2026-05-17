/*
 * XREFs of WerpEscalationReadUlongFromKey @ 0x1800C895C
 * Callers:
 *     WerpEscalationIsDisabled @ 0x1800C87FC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800C88AC (WerpEscalationIsWMRSendStringSet.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 */

__int64 __fastcall WerpEscalationReadUlongFromKey(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  int ValueKey; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  ValueKey = NtQueryValueKey();
  result = 3221225524LL;
  if ( ValueKey >= 0 )
  {
    if ( v7 == 4 && v8 == 4 )
    {
      *a3 = v9;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  else if ( ValueKey != -1073741772 )
  {
    return (unsigned int)ValueKey;
  }
  return result;
}
