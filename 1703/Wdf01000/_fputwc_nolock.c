/*
 * XREFs of _fputwc_nolock @ 0x1C003EE28
 * Callers:
 *     write_char @ 0x1C003ECD0 (write_char.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C00122B0 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 */

int __fastcall fputwc_nolock(wchar_t ch, _iobuf *str)
{
  int result; // eax
  int v3; // eax

  if ( str )
  {
    v3 = str->_cnt - 2;
    str->_cnt = v3;
    if ( v3 < 0 )
    {
      return flswbuf(ch, str);
    }
    else
    {
      *(_WORD *)str->_ptr = ch;
      result = ch;
      str->_ptr += 2;
    }
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFF;
  }
  return result;
}
