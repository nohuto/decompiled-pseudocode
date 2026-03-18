/*
 * XREFs of strnlen @ 0x14014EC04
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x140229F94 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1404098DC (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1406A8494 (EtwpAllocateEventNameFilter.c)
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
