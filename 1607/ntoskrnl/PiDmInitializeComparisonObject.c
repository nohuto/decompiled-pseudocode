/*
 * XREFs of PiDmInitializeComparisonObject @ 0x1404E20C8
 * Callers:
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x1404E9190 (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 */

NTSTATUS __fastcall PiDmInitializeComparisonObject(wchar_t *a1, int a2, __int64 a3)
{
  wchar_t *v4; // rdx
  unsigned __int16 v6; // r9
  __int16 v7; // r10
  __int64 v8; // rcx
  wchar_t *v9; // rdx
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a3 + 28) = a2;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)&String.Length = 0;
  v4 = 0LL;
  String.Buffer = 0LL;
  v6 = 0;
  v7 = 0;
  if ( a1 )
  {
    v8 = 0x7FFFLL;
    v9 = a1;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v8;
    }
    while ( v8 );
    if ( !v8 )
      return -1073741811;
    v4 = a1;
    v6 = 2 * (0x7FFF - v8);
    String.Buffer = a1;
    String.Length = v6;
    v7 = v6 + 2;
    String.MaximumLength = v6 + 2;
  }
  if ( a2 != 3 )
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  if ( v6 > 8u )
  {
    String.Length = v6 - 8;
    String.Buffer = v4 + 4;
    String.MaximumLength = v7 - 8;
    return RtlHashUnicodeString(&String, 1u, 0, (PULONG)(a3 + 24));
  }
  return -1073741772;
}
