/*
 * XREFs of MIDL_user_allocate @ 0x140017400
 * Callers:
 *     AudioDGGetStreamVpoDescription @ 0x1400172F0 (AudioDGGetStreamVpoDescription.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size <= 0xC800 )
    return operator new[](size);
  else
    return 0LL;
}
