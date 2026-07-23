/*
 * XREFs of AdtpBuildUserAccountControlString @ 0x1406D1ECC
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1403F4CE4 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildUserAccountControlString(
        ULONG Value,
        ULONG a2,
        UNICODE_STRING *a3,
        _BYTE *a4,
        PUNICODE_STRING Destination,
        _BYTE *a6,
        PUNICODE_STRING DestinationString,
        _BYTE *a8)
{
  unsigned int v8; // ebx
  __int16 v12; // di
  wchar_t *PoolWithTag; // rax
  wchar_t *v14; // rax
  ULONG v15; // r15d
  ULONG v16; // ebp
  int v17; // eax
  unsigned __int16 v18; // di
  wchar_t *v19; // rax
  unsigned int v20; // esi
  int v21; // edi
  UNICODE_STRING String; // [rsp+20h] [rbp-78h] BYREF
  ULONG Valuea; // [rsp+30h] [rbp-68h]
  _BYTE *v25; // [rsp+38h] [rbp-60h]
  char v26; // [rsp+40h] [rbp-58h] BYREF

  v8 = 0;
  *a4 = 0;
  *a6 = 0;
  v12 = 0;
  *a8 = 0;
  v25 = a6;
  *(_DWORD *)&a3->Length = 1441792;
  Valuea = a2;
  String.Buffer = (wchar_t *)&v26;
  *(_DWORD *)&String.Length = 1310720;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x6B416553u);
  a3->Buffer = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *a4 = 1;
  *(_DWORD *)&Destination->Length = 1441792;
  v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x6B416553u);
  Destination->Buffer = v14;
  if ( !v14 )
    return (unsigned int)-1073741801;
  *v25 = 1;
  RtlAppendUnicodeToString(a3, L"0x");
  RtlIntegerToUnicodeString(Value, 0x10u, &String);
  RtlAppendUnicodeStringToString(a3, &String);
  RtlAppendUnicodeToString(Destination, L"0x");
  v15 = Valuea;
  RtlIntegerToUnicodeString(Valuea, 0x10u, &String);
  RtlAppendUnicodeStringToString(Destination, &String);
  v16 = v15 ^ Value;
  if ( !v16 )
  {
    RtlInitUnicodeString(DestinationString, L"-");
    return v8;
  }
  v17 = 1;
  do
  {
    if ( (v17 & v16) != 0 )
      ++v12;
    v17 *= 2;
  }
  while ( v17 );
  v18 = 32 * v12 + 2;
  DestinationString->Length = 0;
  DestinationString->MaximumLength = v18;
  v19 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x6B416553u);
  DestinationString->Buffer = v19;
  if ( v19 )
  {
    *a8 = 1;
    v20 = 0;
    v21 = 1;
    do
    {
      if ( !v21 )
        break;
      if ( (v21 & v16) != 0 && RtlIntegerToUnicodeString(v20 + ((v15 & v21) != 0 ? 2080 : 2048), 0xAu, &String) >= 0 )
      {
        RtlAppendUnicodeToString(DestinationString, L"\r\n\t\t%%");
        RtlAppendUnicodeStringToString(DestinationString, &String);
      }
      ++v20;
      v21 *= 2;
    }
    while ( v20 < 0x20 );
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
