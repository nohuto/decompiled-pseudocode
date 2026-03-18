/*
 * XREFs of memmove_s @ 0x1401496F0
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

errno_t __cdecl memmove_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx

  if ( MaxCount )
  {
    if ( !a1 )
    {
      PopPoCoalescinCallback();
      return 22;
    }
    if ( !Src )
    {
      v5 = 22;
LABEL_8:
      PopPoCoalescinCallback();
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
