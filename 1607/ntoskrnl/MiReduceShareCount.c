/*
 * XREFs of MiReduceShareCount @ 0x1401F2D34
 * Callers:
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  char v4; // cl
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v4 = *(_BYTE *)(a1 + 34);
  if ( (v4 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a1 + 0x58000000000LL) / 48, v4 & 7, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = (v5 & 0x3FFFFFFFFFFFFFFFLL) - a2;
  *(_QWORD *)(a1 + 24) = v5 ^ (v6 ^ v5) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v5 & 0x3FFFFFFFFFFFFFFFLL) == a2 )
    return MiPfnShareCountIsZero(a1, v6);
  else
    return 2LL;
}
