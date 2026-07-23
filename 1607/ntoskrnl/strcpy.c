/*
 * XREFs of strcpy @ 0x14014EC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcpy(char *Dest, const char *Source)
{
  return (char *)__entry_from_strcat_in_strcpy(Dest, Source);
}
