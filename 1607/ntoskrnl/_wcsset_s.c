/*
 * XREFs of _wcsset_s @ 0x14014DF50
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl wcsset_s(wchar_t *Dst, size_t SizeInWords, wchar_t Value)
{
  wchar_t *i; // rax

  if ( !Dst || !SizeInWords )
    goto LABEL_8;
  for ( i = Dst; *i; ++i )
  {
    if ( !--SizeInWords )
      break;
    *i = Value;
  }
  if ( !SizeInWords )
  {
    *Dst = 0;
LABEL_8:
    xHalFreeMessageTarget();
    return 22;
  }
  return 0;
}
