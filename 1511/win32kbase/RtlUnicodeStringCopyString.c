/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C00CFD00
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C00CECE8 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     sub_1C00CFD60 @ 0x1C00CFD60 (sub_1C00CFD60.c)
 *     sub_1C00CFDE8 @ 0x1C00CFDE8 (sub_1C00CFDE8.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  NTSTRSAFE_PCWSTR v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v5 = pszSrc;
  v3 = sub_1C00CFD60(DestinationString, &v7, &v6, 0LL);
  if ( v3 >= 0 )
  {
    v5 = 0LL;
    v3 = sub_1C00CFDE8(v7, v6, &v5, L"\\Registry\\Machine\\");
    DestinationString->Length = 2 * (_WORD)v5;
  }
  return v3;
}
