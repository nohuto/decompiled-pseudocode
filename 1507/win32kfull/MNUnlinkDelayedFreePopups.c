/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1C010E640
 * Callers:
 *     xxxMNEndMenuState @ 0x1C010B2F0 (xxxMNEndMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = a1;
  if ( a1 )
  {
    do
    {
      *(_DWORD *)result &= ~0x10000u;
      v2 = *(_QWORD *)(result + 72);
      if ( result != a1 )
        *(_DWORD *)result &= ~0x20000000u;
      *(_QWORD *)(result + 72) = 0LL;
      *(_QWORD *)(result + 64) = 0LL;
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
