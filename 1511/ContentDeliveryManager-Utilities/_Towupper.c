/*
 * XREFs of _Towupper @ 0x1800239C0
 * Callers:
 *     ?do_toupper@?$ctype@G@std@@MEBAGG@Z @ 0x18000ABA0 (-do_toupper@-$ctype@G@std@@MEBAGG@Z.c)
 *     ?do_toupper@?$ctype@G@std@@MEBAPEBGPEAGPEBG@Z @ 0x18000ABC0 (-do_toupper@-$ctype@G@std@@MEBAPEBGPEAGPEBG@Z.c)
 * Callees:
 *     _GetLocaleHandleByType @ 0x180024584 (_GetLocaleHandleByType.c)
 *     __crtLCMapStringW_Stub @ 0x180024604 (__crtLCMapStringW_Stub.c)
 */

wchar_t __cdecl Towupper(wchar_t a1, const _Ctypevec *a2)
{
  __int64 LocaleHandleByType; // rax
  wchar_t v4; // cx
  int v5; // eax
  wchar_t v7; // [rsp+50h] [rbp+8h] BYREF
  wchar_t v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = a1;
  v8 = a1;
  LocaleHandleByType = GetLocaleHandleByType(a2);
  if ( v7 == 0xFFFF )
    return v8;
  if ( !LocaleHandleByType && v7 < 0x100u )
  {
    if ( (unsigned __int16)(v7 - 97) <= 0x19u )
      return v7 - 32;
    return v8;
  }
  v5 = _crtLCMapStringW_Stub(LocaleHandleByType, 512, (unsigned int)&v7, 1, (__int64)&v8, 1, *(&a2->_Page + 1));
  v4 = v8;
  if ( !v5 )
    return v7;
  return v4;
}
