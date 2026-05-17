/*
 * XREFs of write_char_0 @ 0x18009CF88
 * Callers:
 *     _woutput_l @ 0x18009C660 (_woutput_l.c)
 *     write_multi_char_0 @ 0x18009CFD8 (write_multi_char_0.c)
 *     write_string_0 @ 0x18009D030 (write_string_0.c)
 * Callees:
 *     _fputwc_nolock @ 0x18009F5E0 (_fputwc_nolock.c)
 */

void __fastcall write_char_0(wchar_t a1, __int64 a2, _DWORD *a3)
{
  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( fputwc_nolock(a1, (FILE *)a2) == 0xFFFF && (*(_BYTE *)(a2 + 24) & 0x20) != 0 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}
