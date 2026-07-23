/*
 * XREFs of strcat_s @ 0x140153160
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl strcat_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  char *v3; // r9
  errno_t v5; // ebx
  signed __int64 v6; // rcx
  char v7; // al

  v3 = a1;
  if ( !a1 || !SizeInBytes )
    goto LABEL_5;
  if ( !Src )
  {
    *a1 = 0;
LABEL_5:
    xHalFreeMessageTarget();
    return 22;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( !SizeInBytes )
  {
    v5 = 22;
LABEL_15:
    *v3 = 0;
    xHalFreeMessageTarget();
    return v5;
  }
  v6 = a1 - Src;
  do
  {
    v7 = *Src;
    Src[v6] = *Src;
    ++Src;
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
