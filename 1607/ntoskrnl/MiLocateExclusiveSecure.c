/*
 * XREFs of MiLocateExclusiveSecure @ 0x140014688
 * Callers:
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateExclusiveSecure(__int64 a1)
{
  __int64 *result; // rax

  for ( result = *(__int64 **)(a1 + 56); result; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 2) == 2 )
    {
      if ( (result[2] & 0x20) != 0 )
        return result;
      return 0LL;
    }
  }
  return 0LL;
}
