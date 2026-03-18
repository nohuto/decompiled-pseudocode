/*
 * XREFs of _vsnwprintf_l @ 0x1C003A8C0
 * Callers:
 *     _vsnwprintf @ 0x1C003A8A8 (_vsnwprintf.c)
 * Callees:
 *     _flsbuf @ 0x1C003A99C (_flsbuf.c)
 *     _woutput_l @ 0x1C003A9A4 (_woutput_l.c)
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C003C340 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 */

int __fastcall vsnwprintf_l(
        wchar_t *string,
        unsigned __int64 count,
        const wchar_t *format,
        localeinfo_struct *plocinfo,
        char *ap)
{
  int result; // eax
  int v7; // edi
  char *ptr; // rax
  _iobuf str; // [rsp+30h] [rbp-30h] BYREF

  if ( format && (!count || string) )
  {
    str._flag = 66;
    str._base = (char *)string;
    str._ptr = (char *)string;
    if ( count <= 0x3FFFFFFF )
      str._cnt = 2 * count;
    else
      str._cnt = 0x7FFFFFFF;
    result = woutput_l(&str, format, plocinfo, ap);
    v7 = result;
    if ( string )
    {
      if ( --str._cnt < 0 )
      {
        flsbuf(0, &str);
        ptr = str._ptr;
      }
      else
      {
        *str._ptr = 0;
        ptr = ++str._ptr;
      }
      if ( --str._cnt < 0 )
        flsbuf(0, &str);
      else
        *ptr = 0;
      return v7;
    }
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return -1;
  }
  return result;
}
