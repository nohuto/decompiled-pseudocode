/*
 * XREFs of UpconvertTime @ 0x1C00B1900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UpconvertTime(unsigned int a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax

  if ( !a1 )
    return 0LL;
  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v3 = HIDWORD(v2);
  if ( (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 96 )
  {
    if ( a1 > (unsigned int)v2 )
      v3 = (unsigned int)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 96)
                        - 1);
  }
  return a1 | (v3 << 32);
}
