/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseClientEndpoint@@MEAAJXZ @ 0x140036BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::IsProperlyInitialized(CCrossProcessBaseClientEndpoint *this)
{
  __int64 result; // rax

  if ( (*((_DWORD *)this + 38) & 0x40000) == 0 )
    return 1LL;
  result = 2289827918LL;
  if ( *((_DWORD *)this + 104) )
    return 1LL;
  return result;
}
