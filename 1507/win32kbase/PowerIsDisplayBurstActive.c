/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1C00A5360
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C00104B0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  _BOOL8 result; // rax
  int v6; // ecx

  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v3 = v2 - qword_1C00FFF70;
  v4 = v2 - qword_1C00FFF78;
  result = v4 <= 0x1388 || v3 <= 0x61A8;
  v6 = 6 - (v4 < v3);
  if ( a1 )
    *a1 = v6;
  return result;
}
