/*
 * XREFs of strcat_s @ 0x1800A1F00
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  char *v3; // r9
  errno_t v5; // ebx
  signed __int64 v6; // rcx
  char v7; // al

  v3 = Destination;
  if ( !Destination || !SizeInBytes )
    goto LABEL_5;
  if ( !Source )
  {
    *Destination = 0;
LABEL_5:
    invalid_parameter();
    return 22;
  }
  do
  {
    if ( !*Destination )
      break;
    ++Destination;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( !SizeInBytes )
  {
    v5 = 22;
LABEL_15:
    *v3 = 0;
    invalid_parameter();
    return v5;
  }
  v6 = Destination - Source;
  do
  {
    v7 = *Source;
    Source[v6] = *Source;
    ++Source;
    if ( !v7 )
      break;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( !SizeInBytes )
  {
    v5 = 34;
    goto LABEL_15;
  }
  return 0;
}
