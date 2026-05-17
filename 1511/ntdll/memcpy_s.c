/*
 * XREFs of memcpy_s @ 0x1800A08D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
  {
    invalid_parameter();
    return 22;
  }
  if ( Source && DestinationSize >= SourceSize )
  {
    memmove(Destination, Source, SourceSize);
    return 0;
  }
  memset(Destination, 0, DestinationSize);
  if ( Source )
  {
    if ( DestinationSize >= SourceSize )
      return 22;
    v8 = 34;
  }
  else
  {
    v8 = 22;
  }
  invalid_parameter();
  return v8;
}
