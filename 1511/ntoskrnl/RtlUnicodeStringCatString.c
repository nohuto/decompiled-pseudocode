/*
 * XREFs of RtlUnicodeStringCatString @ 0x1401AA6D4
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     sub_1401AA7C0 @ 0x1401AA7C0 (sub_1401AA7C0.c)
 *     sub_1401AA8A0 @ 0x1401AA8A0 (sub_1401AA8A0.c)
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
  result = sub_1401AA7C0(DestinationString, v5, &v7, &v8);
  if ( result >= 0 )
  {
    v4 = v8;
    v6 = 0LL;
    result = sub_1401AA8A0(v5[0] + 2 * v8, v7 - v8, &v6);
    DestinationString->Length = 2 * ((_WORD)v6 + v4);
  }
  return result;
}
