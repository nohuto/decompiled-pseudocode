/*
 * XREFs of memmove_s @ 0x1800A1DA0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // ebx

  if ( SourceSize )
  {
    if ( !Destination )
    {
      invalid_parameter();
      return 22;
    }
    if ( !Source )
    {
      v5 = 22;
LABEL_8:
      invalid_parameter();
      return v5;
    }
    if ( DestinationSize < SourceSize )
    {
      v5 = 34;
      goto LABEL_8;
    }
    memmove(Destination, Source, SourceSize);
  }
  return 0;
}
