/*
 * XREFs of KiVerifyXcptFilter @ 0x1407B1D3C
 * Callers:
 *     KiVerifyXcpt2 @ 0x1407B1760 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x1407B1884 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x1407B18C4 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1407B1904 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1407B1944 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1407B1984 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1407B19C4 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1407B1A10 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1407B1A5C (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1407B1AA8 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1407B1AF4 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x1407B1BF0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x1407B1C38 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1407B1CA0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1407B1CE8 (KiVerifyXcpt14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
