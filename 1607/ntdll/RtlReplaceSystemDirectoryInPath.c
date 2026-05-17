/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x18006E020
 * Callers:
 *     LdrpGetModuleName @ 0x18006D714 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpWow64SelectSystem32PathInternal @ 0x18006E0D4 (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlFindUnicodeSubstring @ 0x18006E130 (RtlFindUnicodeSubstring.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r8
  unsigned __int16 v12; // di
  void *UnicodeSubstring; // rax
  _WORD v14[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v15; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = a2;
  LOBYTE(a2) = a4;
  result = RtlpWow64SelectSystem32PathInternal(a3, a2, &v15);
  v10 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = a4;
    result = RtlpWow64SelectSystem32PathInternal(v5, v9, v14);
    if ( (int)result >= 0 )
    {
      if ( v5 == a3 )
      {
        return 0LL;
      }
      else
      {
        v12 = v15;
        if ( v14[0] == v15 )
        {
          LOBYTE(v11) = 1;
          UnicodeSubstring = (void *)RtlFindUnicodeSubstring(a1, v14, v11);
          if ( UnicodeSubstring )
            memmove(UnicodeSubstring, Src, v12);
        }
        else
        {
          return (unsigned int)-1073741811;
        }
        return v10;
      }
    }
  }
  return result;
}
