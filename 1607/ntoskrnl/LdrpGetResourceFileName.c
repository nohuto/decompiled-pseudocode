/*
 * XREFs of LdrpGetResourceFileName @ 0x14014B530
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F8494 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 */

int __fastcall LdrpGetResourceFileName(__int64 a1, __int64 a2, const WCHAR *a3, UNICODE_STRING *a4)
{
  unsigned __int16 v7; // dx
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  int result; // eax
  WCHAR Source[264]; // [rsp+20h] [rbp-248h] BYREF

  if ( !a1 || !a4 || !a3 )
    return -1073741811;
  v7 = *(_WORD *)(a1 + 72);
  v8 = *(unsigned __int16 *)(a1 + 88);
  v9 = v7 - v8;
  if ( (unsigned __int64)(int)v9 >= 0x208 || v7 <= (unsigned __int16)v8 )
    return -1073020927;
  v10 = v9;
  memmove(Source, *(const void **)(a1 + 80), v9);
  v11 = v10 >> 1;
  if ( v11 >= 260 )
    _report_rangecheckfailure();
  Source[v11] = 0;
  result = RtlAppendUnicodeToString(a4, Source);
  if ( result >= 0 )
  {
    RtlAppendUnicodeToString(a4, a3);
    RtlAppendUnicodeToString(a4, L"\\");
    result = RtlAppendUnicodeToString(a4, *(PCWSTR *)(a1 + 96));
    if ( result >= 0 )
      return RtlAppendUnicodeToString(a4, L".mui");
  }
  return result;
}
