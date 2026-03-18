/*
 * XREFs of MiAnyAddressLocked @ 0x14021354C
 * Callers:
 *     MiFlushDirtyBitsToPfn @ 0x140119A48 (MiFlushDirtyBitsToPfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAnyAddressLocked(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rax

  v2 = 1LL;
  if ( MEMORY[0xFFFFF58010804008] <= 1uLL )
    return 0LL;
  v4 = (__int64 *)(MEMORY[0xFFFFF58010804040] + MEMORY[0xFFFFF580108041F0]);
  while ( 1 )
  {
    v5 = *v4;
    v6 = (*v4 & 0x800000000000LL) != 0 ? v5 | 0xFFFF000000000000uLL : v5 & 0xFFFFFFFFFFFFLL;
    if ( v6 >= a1 && v6 <= a2 )
      break;
    ++v2;
    v4 = (__int64 *)((char *)v4 + MEMORY[0xFFFFF58010804040]);
    if ( v2 >= MEMORY[0xFFFFF58010804008] )
      return 0LL;
  }
  return 1LL;
}
