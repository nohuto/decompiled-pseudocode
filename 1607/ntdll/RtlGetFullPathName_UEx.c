/*
 * XREFs of RtlGetFullPathName_UEx @ 0x180011770
 * Callers:
 *     RtlGetFullPathName_U @ 0x18006A930 (RtlGetFullPathName_U.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 */

__int64 __fastcall RtlGetFullPathName_UEx(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  int FullPathName_Ustr; // eax
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0;
  result = RtlInitUnicodeStringEx(v11, a1);
  if ( (int)result >= 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(v11, a2, a3, a4, 0LL, &a5);
    if ( FullPathName_Ustr )
    {
      if ( v5 )
        *v5 = FullPathName_Ustr;
      return 0LL;
    }
    else
    {
      return 3221225523LL;
    }
  }
  return result;
}
