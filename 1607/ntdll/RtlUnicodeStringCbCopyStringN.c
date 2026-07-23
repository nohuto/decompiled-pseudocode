/*
 * XREFs of RtlUnicodeStringCbCopyStringN @ 0x18006C834
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180042800 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x18006C8B8 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x18006CAD4 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCbCopyStringN(_WORD *a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker(a1, &v10, &v9, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = a3 >> 1;
    v11 = v7;
    if ( v8 > 0x7FFF )
    {
      result = 3221225485LL;
    }
    else
    {
      result = RtlWideCharArrayCopyStringWorker(v10, v9, (unsigned int)&v11, a2, v8);
      LOWORD(v7) = v11;
    }
    *a1 = 2 * v7;
  }
  return result;
}
