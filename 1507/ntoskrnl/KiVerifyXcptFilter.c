/*
 * XREFs of KiVerifyXcptFilter @ 0x1407DA314
 * Callers:
 *     KiVerifyXcpt2 @ 0x1407D9D38 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x1407D9E5C (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x1407D9E9C (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1407D9EDC (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1407D9F1C (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1407D9F5C (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1407D9F9C (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1407D9FE8 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1407DA034 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1407DA080 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1407DA0CC (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x1407DA1C8 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x1407DA210 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1407DA278 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1407DA2C0 (KiVerifyXcpt14.c)
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
