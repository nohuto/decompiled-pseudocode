/*
 * XREFs of KiVerifyXcptFilter @ 0x1407676C0
 * Callers:
 *     KiVerifyXcpt2 @ 0x1407670E4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140767208 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140767248 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140767288 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1407672C8 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140767308 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140767348 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140767394 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1407673E0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x14076742C (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140767478 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140767574 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x1407675BC (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140767624 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x14076766C (KiVerifyXcpt14.c)
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
