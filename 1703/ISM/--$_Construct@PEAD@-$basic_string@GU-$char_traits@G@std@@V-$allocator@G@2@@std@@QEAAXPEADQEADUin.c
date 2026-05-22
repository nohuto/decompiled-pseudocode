/*
 * XREFs of ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x18002201C
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 * Callees:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 */

_UNKNOWN **__fastcall std::wstring::_Construct<char *>(const void **Src, char *a2, char *a3)
{
  _UNKNOWN **result; // rax
  __int16 v7; // r14
  const void *v8; // rdx
  unsigned __int64 v9; // rdx
  _WORD *v10; // rax
  _QWORD *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  try
  {
    while ( a2 != a3 )
    {
      v7 = *a2;
      v8 = Src[2];
      if ( v8 == Src[3] )
      {
        v9 = (unsigned __int64)v8 + 1;
        if ( v9 )
        {
          if ( (unsigned __int64)Src[3] < v9 )
            std::wstring::_Copy(Src, v9);
        }
        else
        {
          Src[2] = 0LL;
          if ( (unsigned __int64)Src[3] < 8 )
            v10 = Src;
          else
            v10 = *Src;
          *v10 = 0;
        }
      }
      if ( (unsigned __int64)Src[3] < 8 )
        v11 = Src;
      else
        v11 = *Src;
      *((_WORD *)v11 + (_QWORD)Src[2]) = v7;
      Src[2] = (char *)Src[2] + 1;
      result = (_UNKNOWN **)Src[2];
      *((_WORD *)v11 + (_QWORD)result) = 0;
      ++a2;
    }
  }
  catch ( ... )
  {
    std::wstring::_Tidy_deallocate((__int64)Src);
    throw;
  }
  return result;
}
