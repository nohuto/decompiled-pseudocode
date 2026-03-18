/*
 * XREFs of RtlUnicodeStringCatString @ 0x1C00CFC94
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C00CECE8 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     sub_1C00CFD60 @ 0x1C00CFD60 (sub_1C00CFD60.c)
 *     sub_1C00CFDE8 @ 0x1C00CFDE8 (sub_1C00CFDE8.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  __int16 v4; // bx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  NTSTRSAFE_PCWSTR v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = pszSrc;
  result = sub_1C00CFD60(DestinationString, v5, &v7, &v8);
  if ( result >= 0 )
  {
    v4 = v8;
    v6 = 0LL;
    result = sub_1C00CFDE8(
               v5[0] + 2 * v8,
               v7 - v8,
               &v6,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad");
    DestinationString->Length = 2 * ((_WORD)v6 + v4);
  }
  return result;
}
