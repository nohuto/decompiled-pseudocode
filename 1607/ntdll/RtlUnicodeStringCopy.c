/*
 * XREFs of RtlUnicodeStringCopy @ 0x18006C9AC
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800DA2E8 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlWideCharArrayCopyWorker @ 0x18006CA34 (RtlWideCharArrayCopyWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x18006CA98 (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x18006CAD4 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // r11
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker(a1, v8, &v7, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    result = RtlUnicodeStringValidateSrcWorker(a2, &v6, &v10);
    if ( (int)result >= 0 )
    {
      result = RtlWideCharArrayCopyWorker(v8[0], v7, (unsigned int)&v9, v6, v10);
      v5 = v9;
    }
    *a1 = 2 * v5;
  }
  return result;
}
