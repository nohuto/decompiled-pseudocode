/*
 * XREFs of MIDL_user_allocate @ 0x140018740
 * Callers:
 *     AudioDGGetStreamVpoDescription @ 0x140018660 (AudioDGGetStreamVpoDescription.c)
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
