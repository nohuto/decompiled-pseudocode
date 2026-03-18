/*
 * XREFs of strnlen @ 0x140173854
 * Callers:
 *     EtwpGetProviderGroupFromTraits @ 0x1404D2F14 (EtwpGetProviderGroupFromTraits.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Str )
  {
    if ( !*Str )
      break;
    ++result;
  }
  return result;
}
