/*
 * XREFs of PiDmInitializeComparisonObject @ 0x1404399D0
 * Callers:
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x1404E05E4 (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x140439AA0 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall PiDmInitializeComparisonObject(wchar_t *a1, int a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  wchar_t *v5; // rdx
  __int16 v7; // r9
  wchar_t *v8; // rax
  __int64 v9; // rcx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a3 + 28) = a2;
  *(_QWORD *)(a3 + 16) = a1;
  String.MaximumLength = 0;
  v4 = 0;
  String.Length = 0;
  v5 = 0LL;
  String.Buffer = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v8 = a1;
    v9 = 0x7FFFLL;
    while ( *v8 )
    {
      ++v8;
      if ( !--v9 )
        return -1073741811;
    }
    v4 = 2 * (0x7FFF - v9);
    v5 = a1;
    v7 = v4 + 2;
    String.Length = v4;
    String.MaximumLength = v4 + 2;
    String.Buffer = a1;
  }
  if ( a2 != 3 )
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  if ( v4 > 8u )
  {
    String.Length = v4 - 8;
    String.Buffer = v5 + 4;
    String.MaximumLength = v7 - 8;
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  }
  return -1073741772;
}
