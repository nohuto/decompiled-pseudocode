/*
 * XREFs of strnlen @ 0x14014F1C4
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x140229DC0 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpGetProviderGroupFromTraits @ 0x14040879C (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1406A85CC (EtwpAllocateEventNameFilter.c)
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
