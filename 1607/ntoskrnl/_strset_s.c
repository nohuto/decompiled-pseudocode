/*
 * XREFs of _strset_s @ 0x140152580
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl strset_s(char *a1, size_t DstSize, int Value)
{
  char *i; // rax

  if ( !a1 || !DstSize )
    goto LABEL_8;
  for ( i = a1; *i; *i++ = Value )
  {
    if ( !--DstSize )
      break;
  }
  if ( !DstSize )
  {
    *a1 = 0;
LABEL_8:
    xHalFreeMessageTarget();
    return 22;
  }
  return 0;
}
