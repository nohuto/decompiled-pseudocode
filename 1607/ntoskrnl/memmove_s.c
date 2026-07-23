/*
 * XREFs of memmove_s @ 0x140153040
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

errno_t __cdecl memmove_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx

  if ( MaxCount )
  {
    if ( !a1 )
    {
      xHalFreeMessageTarget();
      return 22;
    }
    if ( !Src )
    {
      v5 = 22;
LABEL_8:
      xHalFreeMessageTarget();
      return v5;
    }
    if ( DstSize < MaxCount )
    {
      v5 = 34;
      goto LABEL_8;
    }
    memmove(a1, Src, MaxCount);
  }
  return 0;
}
