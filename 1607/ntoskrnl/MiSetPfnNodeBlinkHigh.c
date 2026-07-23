/*
 * XREFs of MiSetPfnNodeBlinkHigh @ 0x140105BBC
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1401059EC (MiReplaceNumaStandbyPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401213C4 (MiUnlinkNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeBlinkHigh(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r9
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v9; // rcx

  v3 = a2;
  if ( a3 == 1 )
  {
    result = 0xFFFFF000000000LL;
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ (a2 << 36)) & 0xFFFFF000000000LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = (unsigned __int64)(v3 & 0xFFFFF) << 36;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 | v5 & 0xFF00000FFFFFFFFFuLL, v5);
    for ( i = v5 == result; !i; i = v9 == result )
    {
      v9 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v6 | result & 0xFF00000FFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
