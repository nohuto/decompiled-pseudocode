/*
 * XREFs of CmpSetConvKeyAtIndex @ 0x1400501C0
 * Callers:
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetConvKeyAtIndex(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax

  if ( a3 >= 8 )
  {
    *(_DWORD *)(a2 + 4LL * (a3 - 8)) = a4;
  }
  else
  {
    result = a3;
    *(_DWORD *)(a1 + 4LL * a3) = a4;
  }
  return result;
}
