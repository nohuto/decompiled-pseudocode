/*
 * XREFs of _strset_s @ 0x140177270
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
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
    PopPoCoalescinCallback();
    return 22;
  }
  return 0;
}
