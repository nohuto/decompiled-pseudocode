/*
 * XREFs of _Wcrtomb @ 0x18006BB88
 * Callers:
 *     ?do_narrow@?$ctype@G@std@@MEBADGD@Z @ 0x1800235C0 (-do_narrow@-$ctype@G@std@@MEBADGD@Z.c)
 *     ?do_narrow@?$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z @ 0x180023620 (-do_narrow@-$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl Wcrtomb(char *lpMultiByteStr, wchar_t a2, mbstate_t *a3, const _Cvtvec *a4)
{
  bool v4; // zf
  int result; // eax
  WCHAR WideCharStr; // [rsp+40h] [rbp-18h] BYREF
  WINBOOL UsedDefaultChar[4]; // [rsp+48h] [rbp-10h] BYREF

  v4 = *(_DWORD *)a4->_Isleadbyte == 0;
  WideCharStr = a2;
  if ( !v4 )
  {
    if ( a2 <= 0xFFu )
    {
      *lpMultiByteStr = a2;
      return 1;
    }
    goto LABEL_6;
  }
  UsedDefaultChar[0] = 0;
  result = WideCharToMultiByte(a4->_Mbcurmax, 0, &WideCharStr, 1, lpMultiByteStr, a4->_Isclocale, 0LL, UsedDefaultChar);
  if ( !result || UsedDefaultChar[0] )
  {
LABEL_6:
    *_errno() = 42;
    return -1;
  }
  return result;
}
