/*
 * XREFs of strnlen @ 0x140145824
 * Callers:
 *     EtwpGetProviderGroupFromTraits @ 0x14046CA90 (EtwpGetProviderGroupFromTraits.c)
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
