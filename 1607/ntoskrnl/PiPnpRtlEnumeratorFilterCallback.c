/*
 * XREFs of PiPnpRtlEnumeratorFilterCallback @ 0x1404DA730
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     _CmIsDevicePresent @ 0x1404DA2B0 (_CmIsDevicePresent.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 */

char __fastcall PiPnpRtlEnumeratorFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  char v8; // bl
  PCUNICODE_STRING v9; // rax
  __int64 (__fastcall *v10)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v13 = 0;
  if ( !*(_BYTE *)(a4 + 8) || CmIsDevicePresent(a1, a2, &v13) >= 0 && v13 )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( !*(_QWORD *)a4
      || v9->Length < 2u
      || !*v9->Buffer
      || RtlInitUnicodeStringEx(&DestinationString, a2) >= 0
      && RtlPrefixUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
    {
      v8 = 1;
      v10 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 16);
      if ( v10 )
        return v10(a1, a2, a3, *(_QWORD *)(a4 + 24));
    }
  }
  return v8;
}
