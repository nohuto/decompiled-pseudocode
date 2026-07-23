/*
 * XREFs of sub_1404D90CC @ 0x1404D90CC
 * Callers:
 *     ExpHwidAuthenticateHardwareId @ 0x1404D917C (ExpHwidAuthenticateHardwareId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall sub_1404D90CC(_DWORD *a1, __int16 *a2)
{
  unsigned __int16 v2; // ax
  const WCHAR *v4; // rbx
  unsigned int v5; // edx
  int v6; // edi
  NTSTATUS result; // eax
  __int64 v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 0;
  v4 = (const WCHAR *)*((_QWORD *)a2 + 1);
  v5 = v2 >> 1;
  if ( (v2 & 1) != 0 || v5 < 2 || v4[v5 - 2] || v4[v5 - 1] )
    return -1073741762;
  v6 = 0;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, v4);
    result = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
    if ( result < 0 )
      break;
    v6 += HashValue;
    v8 = -1LL;
    do
      ++v8;
    while ( v4[v8] );
    v4 += v8 + 1;
    if ( !*v4 )
    {
      *a1 += v6;
      return result;
    }
  }
  return result;
}
